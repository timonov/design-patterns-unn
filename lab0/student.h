#pragma once
#include "iperson.h"
#include "classroom.h"

class student : public iperson
{
public:
	student();
	~student();
	void say(char *sound, classroom *classroom);
	void hear(char *sound, classroom *classroom);
	void make_abstract(char *sound, classroom *classroom, char *workbook);
};
