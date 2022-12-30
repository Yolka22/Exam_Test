#pragma once
#include "People.h"


using namespace std;


class Admin : protected People
   
{
public:
	void Save();
	void Read();
	void Show();
};

