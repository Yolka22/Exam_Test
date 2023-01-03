#include"Admin.h"
#include"Tester.h"
#include"Test.h"
#include"People.h"
#include<vector>



using namespace std;

int main()
{
    Admin admin;
    admin.Save();
    Tester tester1;
    vector<Tester>mas_testers;
    int num;
//Entry_start:
//    cout << "Login as administrator - enter 1: " << endl;
//    cout << "Login as testee - enter 2: " << endl;
//    cin >> num;
//    cin.ignore();
//    if (num == 1) {
//        admin.Read();
//       
//        if (admin.Get_password() == "password") {
//            admin.CreatAdm(admin);
//            admin.Save();
//        }
//       
//    }
//    else if (num == 2) {
//
//    }
//    else {
//        goto Entry_start;
//    }
   /* tester1.CreateTester(mas_testers);
    tester1.Show();*/
    
    /*Test math_test;
    Test test;

    
    math_test.Read("math_test.txt");
    math_test.Show();*/

}
