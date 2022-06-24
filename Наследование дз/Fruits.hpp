#pragma once
#include "Harvest.hpp"
#include <string>
class Fruits :public Harvest
{
public:
	Fruits() :Harvest("Fruits") {}
private:
	void set_name(std::string name)
	{
		Harvest::set_name(name);
	}
};