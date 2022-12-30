#include <fstream>
#include "Admin.h"
#include <iostream>

using namespace std;

void Admin::Save(){



		ofstream out;


		out.open("Admin.txt", ios::out | ios::binary);


		if (out.is_open()) {

				out << this->type << " ";
				out << this->name << " ";
				out << this->login << " ";
				out << this->password << " ";

		}

		out.close();

}

void Admin::Read() {


		ifstream in("Admin.txt", ios::in | ios::binary);


		if (in.is_open()) {

			Admin* tmp = new Admin();
			while (in >> tmp->type >> tmp->name >> tmp->login >> tmp->password) {

				this->type = tmp->type;
				this->name = tmp->name;
				this->login = tmp->login;
				this->password = tmp->password;

			}

		}

		in.close();


}

void Admin::Show() {

	cout << this->type << endl;
	cout << this->name << endl;
	cout << this->login << endl;
	cout << this->password << endl;

}