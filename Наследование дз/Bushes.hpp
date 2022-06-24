#pragma once
#include "Plaints.hpp"
#include "Berries.hpp"
#include <string>
#include<memory>
class Bushes:virtual public Plaints
{
public:
	Bushes() :Plaints("Bushes", 30) {}

	std::unique_ptr<Harvest> harvest() {
		decreaseHarvest();
		return std::make_unique<Berries>();
	}
private:
	void set_name(std::string name)
	{
		Plaints::set_name(name);
	}
};