#pragma once
#include "Task.h"
#include <vector>
using namespace std;


class Test
{


	vector<Task> Task_list;

public:


	vector<Task> Get_list() {

		return Task_list;

	}


	void Read(string path) {

		ifstream in(path, ios::in | ios::binary);

		Task tmp_task;
		string tmp_ans;

		if (in.is_open()) {

			while (in >> tmp_task.question >> tmp_task.right_answer) {

				for (size_t i = 0; i < 3; i++)
				{
					in >> tmp_ans;
					tmp_task.incorrect_answers.push_back(tmp_ans);
				}

				Task_list.push_back(tmp_task);

			}

			in.close();


		}
	}


	void Show() {

		for (size_t i = 0; i < Task_list.size(); i++)
		{
			Task_list[i].Show();

		}
	}

};

