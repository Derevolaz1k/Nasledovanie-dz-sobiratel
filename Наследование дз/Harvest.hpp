#pragma once
#include <string>
#include<typeinfo>
class Harvest
{
public:
	Harvest(std::string name) :name_{ name } { ++harvests_; }
	std::string get_name()
	{
		return name_;
	}
	void set_name(std::string name)
	{
		name_ = name;
	}
	static int howMuch();
	virtual ~Harvest()
	{
		--harvests_;
	}
	virtual const char* type() {
		return typeid(*this).name();
	}
private:
	std::string name_;
	static int harvests_;
};

