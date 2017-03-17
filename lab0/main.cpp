// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iperson.h"
#include "classroom.h"
#include "tutor.h"
#include "student.h"


int main()
{
	classroom *clrm = new classroom();
	tutor *tr = new tutor();
	student *st_petrov = new student();
	student *st_ivanov = new student();
	
	clrm->add_person(tr);
	clrm->add_person(st_petrov);
	clrm->add_person(st_ivanov);

	tr->say("tutor's speech", clrm);
	st_petrov->hear("tutor's speech", clrm);
	st_petrov->make_abstract("tutor's speech", clrm, "workbook");
	
	st_ivanov->say("student's speech", clrm);
	tr->hear("student's speech", clrm);
	tr->say("tutor's speech", clrm);

	clrm->remove_person(tr);
	clrm->add_person(st_petrov);
	clrm->add_person(st_ivanov);

	delete tr;
	delete st_petrov;
	delete st_ivanov;
	delete clrm;

	return 0;
}

