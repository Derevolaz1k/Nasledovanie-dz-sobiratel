#include <iostream>
#include <conio.h>

#include"Plaint_List.h"
#include "Backpack.hpp"


using namespace std;

int main()
{
	//�������� ������ ��������
	auto place = Init();

	Backpack playerBackpack;

	//��������� ��� ��������
	for (auto& plant : *place) {
		std::cout << "i'm near of " << plant->get_name() << '\n';
		while (plant->muchHarvests()) {
			playerBackpack.emplace_back(plant->harvest());
		}
		std::cout << "now i have " << playerBackpack.size() << " items\n";
		std::cout << "harvest in world - " << Harvest::howMuch() << '\n';
	}

	//�� �� �� �� ���� ��������� �� � ������
	std::shuffle(playerBackpack.begin(), playerBackpack.end(), std::random_device());

	//�������� ��� �����
	for (const auto& item : playerBackpack) {
		std::cout << "i found " /* << item->get_name() << " it's " <<
			item->type() << '\n'*/;
	}

}