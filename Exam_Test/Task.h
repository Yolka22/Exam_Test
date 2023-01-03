#pragma once
#include"Test.h"
#include"Test.h"
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
struct Task
{

	string question;
	string right_answer;
	vector<string> incorrect_answers;
	

	


	void Show() {
		vector<string> shufled;
		int tester_answer;

		shufled.push_back(right_answer);

		for (size_t i = 0; i < incorrect_answers.size(); i++)
		{
			shufled.push_back(incorrect_answers[i]);
		}

		random_shuffle(begin(shufled), end(shufled));

		cout << question<<endl;


		for (size_t i = 0; i < shufled.size(); i++)
		{
			cout <<i+1<<")" << shufled[i] << endl;
		}


		cout << "enter your ans";
		cin >> tester_answer;


		switch (tester_answer)
		{
		case 1:
			if (shufled[tester_answer-1]==right_answer)
			{
				cout << "right";
			}
			else
			{
				cout << "false";
			}

			
			break;
		case 2:
			if (shufled[tester_answer - 1] == right_answer)
			{
				cout << "right";
			}
			else
			{
				cout << "false";
			}

			
			break;
		case 3:
			if (shufled[tester_answer - 1] == right_answer)
			{
				cout << "right";
			}
			else
			{
				cout << "false";
			}

			break;
		case 4:
			if (shufled[tester_answer - 1] == right_answer)
			{
				cout << "right";
			}
			else
			{
				cout << "false";
			}

			

			break;

		}
	}

};