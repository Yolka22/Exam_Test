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
       

        if (mas_testers.size() == 0) {
            tester1.CreateTester(mas_testers);
            tester1.Save(mas_testers);

        }
        else
        {
            tester1.verification(mas_testers);
        }
    }
    else {
        goto Entry_start;
    }
   /* tester1.CreateTester(mas_testers);
    tester1.Show();*/
    


}
