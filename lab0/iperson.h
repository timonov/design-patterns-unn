#pragma once
#include <vector>
#include "classroom.h"

class iperson
{
private:
	std::vector<iperson *> m_people;
public:
	iperson();
	virtual void hear(char *sound, classroom *classroom) = 0;
	virtual void say(char *soundm, classroom *classroom) = 0;
	virtual ~iperson() = 0 {};
};
