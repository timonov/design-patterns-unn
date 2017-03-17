#pragma once
#include "iperson.h"
#include "classroom.h"

class tutor : public iperson
{
public:
	tutor();
	~tutor();
	void say(char *sound, classroom *classroom);
	void hear(char *sound, classroom *classroom);
};
