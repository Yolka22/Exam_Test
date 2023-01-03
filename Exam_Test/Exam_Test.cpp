#include"Admin.h"
#include"Tester.h"
#include"Test.h"
#include"People.h"
#include<vector>



using namespace std;

int main()
{
    Admin admin;
    
    Tester tester1;
    vector<Tester>mas_testers;
    /*admin.Save();
    admin.Read();

    admin.Show();*/
    tester1.CreateTester(mas_testers);
    tester1.Show();
    
    /*Test math_test;
    Test test;

    
    math_test.Read("math_test.txt");
    math_test.Show();*/

}
