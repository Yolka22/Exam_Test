#pragma once
#include<string>
using namespace std;

class People
{
protected:
	string type;
	string name;
	string login;
	string password;

public:

	People() {

		type = "people";
		name = "name";
		login = "login";
		password = "password";

	}

	People(string type,string name,string login,string password) {

		this->type=type;
		this->name=name;
		this->login=login;
		this->password=password;

	}

	void Set_type(string type){
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

	string Get_type(){
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

	/*virtual void Save() = 0;
	virtual void Read() = 0;
	virtual void Show() = 0;*/
};

