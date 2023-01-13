 #pragma once
#include "People.h"
#include<vector>


struct info
{
	int mark=0;
	string test_name;
};

class Tester : protected People
    
{
public:
	
	vector<info> info;

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
		return name;
	}

	string Get_login() {
		return login;
	}

	string Get_password() {
		return password;
	}
    void Read(vector<Tester>& mas_tersters);
    void Save(vector<Tester>& mas_tersters);
    void Show(Tester tester);
	void CreateTester(vector<Tester>& mas_tersters);
	void Menu_tester(vector<Tester>& mas_testers, int index);
	void verification(vector<Tester>& mas_testers);
};

