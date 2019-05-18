// SpaceStationProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "SpaceStation.hpp"
#include "Robot.hpp"


#define _CRTDBG_MAP_ALLOC  
#include <stdlib.h>  
#include <crtdbg.h>

int main()
{
	std::shared_ptr<SpaceStation> spaceStation = std::make_shared<SpaceStation>();
	spaceStation->init();
	spaceStation->printStatus();

	auto aRobot = spaceStation->getRobot();
	if (!aRobot.expired())
	{
		aRobot.lock()->checkSpaceStation();
	}

	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
}
