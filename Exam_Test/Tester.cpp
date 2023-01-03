#include "Tester.h"
#include <fstream>
#include "Admin.h"
#include <iostream>
#include <vector>

using namespace std;
void Tester::Save(vector<Tester>& mas_testers) {



	ofstream out;


	out.open("Tester.txt", ios::out | ios::binary);


	if (out.is_open()) {
		for (size_t i = 0; i < mas_testers.size(); i++)
		{
         out << mas_testers[i].type<< "\n";
		out << mas_testers[i].name << "\n";
		out << mas_testers[i].login << "\n";
		out << mas_testers[i].password << "\n";
		}
		

	}

	out.close();

}

void Tester::Read(vector<Tester>& mas_testers) {


	ifstream in("Tester.txt", ios::in | ios::binary);
	string tpm_type;
	string tpm_name;
	string tpm_login;
	string tpm_password;

	if (in.is_open()) {

		Tester *tmp = new Tester();
		while (!in.eof()) {
			tpm_type = "";
			tpm_name = "";
			tpm_login = "";
			tpm_password = "";
			getline(in, tpm_type);
			getline(in, tpm_name);
			getline(in, tpm_login);
			getline(in, tpm_password);
			tmp->type = tpm_type;
			tmp->name = tpm_name;
			tmp->login = tpm_login;
			tmp->password = tpm_password;
			mas_testers.push_back(*tmp);
		}

	}

	in.close();


}

void Tester::Show() {

	cout << this->type << endl;
	cout <<"Name: " << this->name << endl;
	/*cout << this->login << endl;
	cout << this->password << endl;*/

}
void Tester::CreateTester(vector<Tester>&mas_testers) {
	string _type{ "Tested" };
	string _name;
	string _login;
	string _password;
	cout << "Enter name Tested: " << endl;
	getline(cin, _name);
	cout << "Enter login Tested: " << endl;
	getline(cin, _login);
	cout << "Enter password Tested: " << endl;
	getline(cin, _password);
	Tester *new_tester=new Tester(_type, _name,_login, _password);
	mas_testers.push_back(*new_tester);
}