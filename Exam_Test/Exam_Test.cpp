#include"Admin.h"
#include"Tester.h"
#include"Test.h"


using namespace std;

int main()
{
    Admin admin;

    admin.Save();
    admin.Read();

    admin.Show();


    Test math_test;
    Test test;

    
    math_test.Read("math_test.txt");
    math_test.Show();

}
