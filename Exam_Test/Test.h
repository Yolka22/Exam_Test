#pragma once
#include "Task.h"
#include <iostream>
#include <vector>
using namespace std;


class Test
{

	vector<Task> Task_list;

public:
	vector<int>point_for_answer;

	vector<Task> Get_list() {

		return Task_list;

	}


	void Read(string path) {

		ifstream in(path, ios::in | ios::binary);

		Task tmp_task;
		string tmp_ans;


		if (in.is_open()) {

			while (getline(in, tmp_task.question), getline(in, tmp_task.right_answer)) {

				for (size_t i = 0; i < 3; i++)
				{
					getline(in, tmp_ans);
					tmp_task.incorrect_answers.push_back(tmp_ans);
				}

				Task_list.push_back(tmp_task);
				tmp_task.incorrect_answers.clear();
			}

			in.close();


		}
	}


	int perevod_mark() {

		int from_mas = 0;

		for (size_t i = 0; i < point_for_answer.size(); i++)
		{
			from_mas += point_for_answer[i];
		}

		int perevod;

		perevod = (((100 / point_for_answer.size()) * from_mas) * 12) / 100;

		cout <<"correct "<< from_mas << " / " << point_for_answer.size()<<endl;

		return perevod;
	}



	void Show(vector<Tester>& mas_testers,string name,int index) {

		for (size_t i = 0; i < Task_list.size(); i++)
		{
			Task_list[i].Show(mas_testers[index], name, point_for_answer);

		}

		info info;

		info.mark = perevod_mark();

		cout << "Your mark = " << info.mark<<endl;

		info.test_name = name;

		mas_testers[index].info.push_back(info);
		
	}

};

