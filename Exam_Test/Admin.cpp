#include <fstream>
#include "Admin.h"
#include <iostream>
#include<vector>

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
void Admin::CreatAdm(Admin&ad) {
	
	string _name;
	string _login;
	string _password;
	cout << "Enter name admin: " << endl;
	getline(cin, _name);
	cout << "Enter login admin: " << endl;
	getline(cin, _login);
	cout << "Enter password admin: " << endl;
	getline(cin, _password);
	
	ad.Set_name(_name);
	ad.Set_login(_login);
	ad.Set_password(_password);
	
	
}
void Admin::verification(vector<Tester>& mas_testers) {
	string _login;
	string _password;
Start:
	cout << "Enter login admin: " << endl;
	getline(cin, _login);

	cout << "Enter password admin: " << endl;
	getline(cin, _password);
	if (this->login == _login && this->password == _password) {
		Admin::Menu_admin(mas_testers);
	}
	else {
		cout << "Login or password entered incorrectly! " << endl;
		goto Start;
	}
}
void Admin::Menu_admin(vector<Tester>& mas_testers) {
	
	string delet_name;
	Tester new_obj;
	bool noexit = true;
	int choise;
	
	while (noexit)
	{
	Begin_menu:
		cout << "Create user - type 1" << endl;
		cout << "Delete user - type 2" << endl;
		cout << "Change user - type 3" << endl;
		cin >> choise;
		cin.ignore();

		
		switch (choise)
		{
		case 1:
		
			
			new_obj.CreateTester(mas_testers);
			new_obj.Save(mas_testers);
		break;
		case 2:
		{
			if (mas_testers.size() != 0) {

             cout << "Enter username to delete" << endl;
			getline(cin, delet_name);
			auto it = mas_testers.begin();
			for (int i = 0; i < mas_testers.size(); i++)
			{
				if (mas_testers[i].Get_name() == delet_name) {
					advance(it, i);
					mas_testers.erase(it);
				}

			}
			new_obj.Save(mas_testers);
			}
			
			break;
		}
		case 3:
			break;
		case 0:
			noexit = false;
			break;
		default:
			goto Begin_menu;
			break;
		}

	}

}