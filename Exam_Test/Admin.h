#pragma once
#include "People.h"
#include"Tester.h"

using namespace std;


class Admin : protected People
   
{
public:
	Admin() {

		type = "admin";
		name = "name";
		login = "login";
		password = "password";

	}

	Admin(string type, string name, string login, string password) {

		this->type = type;
		this->name = name;
		this->login = login;
		this->password = password;

	}
	void Set_type(string type) {
		this->type = type;
	}

	void Set_name(string name) {
		this->name = name;
	}

	void Set_login(string login) {
		this->login = login;
	}

	void Set_password(string password) {
		this->password = password;
	}

	string Get_type() {
		return type;
	}

	string Get_name() {
		return name;
	}

	string Get_login() {
		return login;
	}

	string Get_password() {
		return password;
	}
	void Save();
	void Read();
	void Show();
	void CreatAdm(Admin& ad);
	void verification(vector<Tester>& mas_testers);
	void Menu_admin(vector<Tester>& mas_testers);
};

