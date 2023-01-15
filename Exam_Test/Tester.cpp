#include "Tester.h"
#include "Test.h"
#include <fstream>
#include "Admin.h"
#include <iostream>
#include <vector>
#include<string>

using namespace std;
void Tester::Save(vector<Tester>& mas_testers) {



	ofstream out;


	out.open("Tester.txt", ios::out | ios::binary);


	if (out.is_open()) {

		for (int i = 0; i < mas_testers.size(); i++)
		{
        out << mas_testers[i].type<< "\n";
		out << mas_testers[i].name << "\n";
		out << mas_testers[i].login << "\n";
		out << mas_testers[i].password << "\n";
		out << mas_testers[i].info.size() << "\n"; 
		for (int j = 0; j < mas_testers[i].info.size(); j++)
		{
			out << mas_testers[i].info[j].mark << "\n";
			out << mas_testers[i].info[j].test_name << "\n";

		}
		
		}
		

	}

	out.close();

}

void Tester::Read(vector<Tester>& mas_testers) {


	ifstream in("Tester.txt", ios::in | ios::binary);
	string test,test1;
	string tpm_type;
	string tpm_name;
	string tpm_login;
	string tpm_password;
	int size;
	if (in.is_open()) {

		Tester *tmp = new Tester();
		
		while (in>> tmp->type, getline(in, test1), getline(in, tmp->name,'\r'), in >> tmp->login >> tmp->password) {
			
			in >> size;
			if (size > 0) {
            tmp->info.resize(size);
			for (int i = 0; i < size; i++)
			{
				in >> tmp->info[i].mark;
				getline(in, test);
				getline(in, tmp->info[i].test_name);
				
			}
			
			}
			mas_testers.push_back(*tmp);
			tmp->info.clear();
		}
			
		

	}

	in.close();


}

void Tester::Show(Tester tester) {
	cout << "Type: " << this->type << endl;
	cout <<"Name: " << this->name << endl;
	for (size_t i = 0; i < tester.info.size(); i++)
	{
        cout << "Test: " << tester.info[i].test_name<<endl<<"Mark:  "<<tester.info[i].mark << endl;
	}
	

}
void Tester::CreateTester(vector<Tester>&mas_testers) {
	string _type{ "Tested" };
	string _name;
	string _login;
	string _password;
	cout << "Enter name Tested: " << endl;
	getline(cin, _name);
	cout << "Enter login Tested: " << endl;

	Enter_login:

	getline(cin, _login);

	for (size_t i = 0; i < mas_testers.size(); i++)
	{
		if (mas_testers[i].Get_login() == _login)
		{
			cout << "login already used"<<endl;
			goto Enter_login;
		}
	}

	cout << "Enter password Tested: " << endl;
	getline(cin, _password);
	Tester *new_tester=new Tester(_type, _name,_login, _password);
	mas_testers.push_back(*new_tester);
}


void Tester::Menu_tester(vector<Tester>& mas_testers,int index) {

Tester_menu:

	int ans;
	cout << "1 for start test "<<endl;
	cout << "2 for information about the test "<<endl;
	cout << "3 Exit "<<endl;
	cin >> ans;


	Test math_test;
	Test phisics_test;
	string test_name = "test";



	switch (ans)
	{
	case 1:

		int choose;
		cout << "choose category " << endl;
		cout << "1-math test " << endl;
		cout << "2-phisics test " << endl;
		cin >> choose;

		switch (choose)
		{
		case 1:

			test_name = "math test";

			math_test.Read("math_test.txt");
			math_test.Show(mas_testers,test_name,index);
			
			goto Tester_menu;
			break;


		case 2:

			test_name = "phisics test";

			phisics_test.Read("phisic_test.txt");
			phisics_test.Show(mas_testers, test_name, index);

			goto Tester_menu;
			break;
		}



	case 2:
		mas_testers[index].Show(mas_testers[index]);
		goto Tester_menu;
		break;

	case 3:
		
		int a = 0;

		break;
	}


}




void Tester::verification(vector<Tester>& mas_testers) {
	string _login;
	string _password;
Start:
	cout << "Enter login teste: " << endl;
	getline(cin, _login);

	cout << "Enter password teste: " << endl;
	getline(cin, _password);

	int i = 0;
	for (i; i < mas_testers.size(); i++)
	{
		if (mas_testers[i].login == _login && mas_testers[i].password == _password) {
			goto Menu;
		}
	}
	cout << "Login or password entered incorrectly! " << endl;
	goto Start;


	Menu:mas_testers[i].Menu_tester(mas_testers,i);
}