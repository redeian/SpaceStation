#include "SpaceStation.hpp"

#include <iostream>
#include "Robot.hpp"

SpaceStation::SpaceStation() :
	m_x(0), m_y(0), m_z(0)
{
}


SpaceStation::~SpaceStation()
{
}

void SpaceStation::init()
{
	m_robot = std::make_shared<Robot>();

	// shared_from_this requires the object to exist, so
	// it cannot use within intializer.
	m_robot->setStation( shared_from_this() );
}


void SpaceStation::printStatus() const
{
	std::cout << "x " << m_x << ", y " << m_y << ", z " << m_z << std::endl;
}


std::weak_ptr<Robot> SpaceStation::getRobot() const
{
	return m_robot;
}