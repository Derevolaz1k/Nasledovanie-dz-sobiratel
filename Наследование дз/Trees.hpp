#include "Plaints.hpp"
#include "Fruits.hpp"
#include <string>
#include<memory>
class Trees :virtual public Plaints
{
public:
	Trees() :Plaints("Trees",20) {}
	std::unique_ptr<Harvest> harvest() {
		decreaseHarvest();
		return std::make_unique<Fruits>();
	}
private:
	void set_name(std::string name)
	{
		Plaints::set_name(name);
	}
};