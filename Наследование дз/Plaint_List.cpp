#pragma once
#include "Plaint_List.h"

Environment Init() {
	Environment result{ std::make_shared<std::vector<std::unique_ptr<Plaints>>>() };
	for (size_t i = 0; i < 10; i++) {
		result->emplace_back(std::make_unique<Trees>());
	}
	for (size_t i = 0; i < 7; i++) {
		result->emplace_back(std::make_unique<Bushes>());
	}
	std::shuffle(result->begin(), result->end(), std::random_device());
	return result;
}