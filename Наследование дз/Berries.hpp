#pragma once
#include "Harvest.hpp"
#include <string>
class Berries :public Harvest
{
public:
	Berries() :Harvest("Berry") {}
private:
	void set_name(std::string name)
	{
		Harvest::set_name(name);
	}
};