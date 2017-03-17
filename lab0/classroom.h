#pragma once
#include "iperson.h"
class classroom
{
public:
	classroom();
	~classroom();
	void provide_sound(char *sound);
	void add_person(iperson *person);
	void remove_person(iperson *person);
};
