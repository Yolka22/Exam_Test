#pragma once
#include"Test.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
struct Task
{

	string question;
	string right_answer;
	vector<string> incorrect_answers;

	


	void Show() {

		cout << question<<endl;
		cout << right_answer<<endl;

		for (size_t i = 0; i < incorrect_answers.size(); i++)
		{
			cout << incorrect_answers[i]<<endl;
		}

	}

};