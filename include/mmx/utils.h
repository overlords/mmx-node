/*
 * utils.h
 *
 *  Created on: Dec 10, 2021
 *      Author: mad
 */

#ifndef INCLUDE_MMX_UTILS_H_
#define INCLUDE_MMX_UTILS_H_

#include <mmx/hash_t.hpp>
#include <mmx/ChainParams.hxx>

#include <vnx/Config.hpp>


namespace mmx {

inline
std::shared_ptr<const ChainParams> get_params()
{
	auto params = ChainParams::create();
	vnx::read_config("chain.params", params);
	if(params->challenge_delay < 1) {
		throw std::logic_error("challenge_delay < 1");
	}
	if(params->challenge_delay > params->finality_delay) {
		throw std::logic_error("challenge_delay > finality_delay");
	}
	return params;
}

inline
bool check_plot_filter(	std::shared_ptr<const ChainParams> params,
						const hash_t& challenge, const hash_t& plot_id)
{
	return hash_t(challenge + plot_id).to_uint256() >> (256 - params->plot_filter) == 0;
}

inline
uint128_t calc_proof_score(	std::shared_ptr<const ChainParams> params,
							const uint8_t ksize, const hash_t& quality, const uint64_t space_diff)
{
	uint256_t divider = (uint256_1 << (256 - params->score_bits)) / (uint128_t(space_diff) * params->space_diff_constant);
	divider *= (2 * ksize) + 1;
	divider <<= ksize - 1;
	return quality.to_uint256() / divider;
}

inline
uint64_t calc_block_reward(std::shared_ptr<const ChainParams> params, const uint64_t space_diff)
{
	// depends on score_bits
	return ((uint128_t(space_diff) * params->space_diff_constant * params->reward_factor.value) << params->plot_filter)
			/ params->target_score / params->reward_factor.inverse;
}

inline
uint64_t calc_total_netspace(std::shared_ptr<const ChainParams> params, const uint64_t space_diff)
{
	return 0.762 * uint64_t(
			((uint128_t(space_diff) * params->space_diff_constant) << (params->plot_filter + params->score_bits)) / params->target_score);
}


} // mmx

#endif /* INCLUDE_MMX_UTILS_H_ */
