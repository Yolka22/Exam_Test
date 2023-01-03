 #pragma once
#include "People.h"
#include<vector>

class Tester : protected People
    
{
public:
	Tester(){ 
		type="tester";
		name = "name";
		login = "login";
		password = "password"; }
	Tester(string type, string name, string login, string password) {

		this->type = type;
		this->name = name;
		this->login = login;
		this->password = password;

	}
	void Set_type(string type) {
		this->type = type;
	}

	void Set_name(string name) {
		this->type = name;
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
		return type;
	}

	string Get_login() {
		return type;
	}

	string Get_password() {
		return type;
	}
    void Read(vector<Tester>& mas_tersters);
    void Save(vector<Tester>& mas_tersters);
    void Show();
	void CreateTester(vector<Tester>& mas_tersters);
};

