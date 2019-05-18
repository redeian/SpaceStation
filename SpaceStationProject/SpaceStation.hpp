#pragma once

#include <memory>

class Robot;

// the class must interit "enable_shared_from_this"
// to be able to use shared_from_this function.
class SpaceStation final : public std::enable_shared_from_this <SpaceStation>
{
public:
	SpaceStation();
	~SpaceStation();

	void init();

	void printStatus() const;
	std::weak_ptr<Robot> getRobot() const;

private:
	float m_x;
	float m_y;
	float m_z;

	std::shared_ptr<Robot> m_robot;
};

