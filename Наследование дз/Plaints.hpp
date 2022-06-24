#pragma once
#include <string>
#include <memory>
#include "Harvest.hpp"
class Plaints
{
public:
	Plaints(std::string name, int count) :name_(name), countHarvest_(count) { ++countPlaints_; }
	std::string get_name()
	{
		return name_;
	}
	void set_name(std::string name)
	{
		name_ = name;
	}
	int muchHarvests()
	{
		return countHarvest_;
	}
	virtual std::unique_ptr<Harvest> harvest() = 0;
	static int howMutch();
	virtual ~Plaints()
	{
		--countPlaints_;
	}
protected:
	void decreaseHarvest() {
		countHarvest_ -= 1;
	}
private:
	std::string name_ = "";
	static int countPlaints_;
	int countHarvest_;
};

