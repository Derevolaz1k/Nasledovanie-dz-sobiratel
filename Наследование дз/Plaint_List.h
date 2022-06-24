#pragma once
#include <memory>
#include <vector>
#include<random>
#include <algorithm>

#include "Plaints.hpp"
#include "Harvest.hpp"
#include "Trees.hpp"
#include "Bushes.hpp"

using Environment = std::shared_ptr<std::vector<std::unique_ptr<Plaints>>>;
Environment Init();
