#pragma once
#include <vector>
#include <memory>
#include "Harvest.hpp"
#include "Plaints.hpp"
using BP = std::vector<std::unique_ptr<Harvest>>;
class Backpack
{
public:
	int size()
	{
		return playerBP.size();
	}
	void emplace_back(std::unique_ptr<Harvest> h)
	{
		playerBP.emplace_back();
	}
	BP::iterator begin()
	{
		return playerBP.begin();
	}
	BP::iterator end()
	{
		return playerBP.end();
	}
	bool operator !=(BP &other)const
	{
		return *this!=other;
	}
	bool operator <(BP& other)const
	{
		return *this < other;
	}
private:
	std::vector<std::unique_ptr<Harvest>> playerBP;
};

