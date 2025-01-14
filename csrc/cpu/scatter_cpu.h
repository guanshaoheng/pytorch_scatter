#pragma once

#include "../extensions.h"
#include <optional>

std::tuple<torch::Tensor, std::optional<torch::Tensor>>
scatter_cpu(torch::Tensor src, torch::Tensor index, int64_t dim,
            std::optional<torch::Tensor> optional_out,
            std::optional<int64_t> dim_size, std::string reduce);
