#include"Admin.h"
#include"Tester.h"
#include"Test.h"
#include"People.h"
#include<vector>



using namespace std;

int main()
{
    Admin admin;
    admin.Read();

    Tester tester1;
    vector<Tester>mas_testers;
    tester1.Read(mas_testers);

    int new_tested;
    int num;
Entry_start:
    cout << "Login as administrator - enter 1: " << endl;
    cout << "Login as testee - enter 2: " << endl;
    cin >> num;
    cin.ignore();
    if (num == 1) {

       
        if (admin.Get_password() == "password") {
            admin.CreatAdm(admin);
            admin.Save();
            admin.Menu_admin();
        }
        else {
           
            admin.verification();
        }
       
    }
    else if (num == 2) {
        int num1;
     Start_tester:
        cout << "Type 1 for register\n";
        cout << "Type 2 for enter\n";
        cin >> num1;
        cin.ignore();
        if (num1 == 1) {
           tester1.CreateTester(mas_testers);
           new_tested= mas_testers.size();
           tester1.Menu_tester(mas_testers,(new_tested - 1));
           tester1.Save(mas_testers);

        }
        else if (num1 == 2) {
            tester1.verification(mas_testers);
            tester1.Save(mas_testers);
        }
        else
        {
            goto Start_tester;
        }
    }
    else {
        goto Entry_start;
    }
  
}
