#include"Admin.h"
#include"Tester.h"
#include"Test.h"
#include"People.h"
#include<vector>
#include<windows.h>



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
    cout << "Exit 3: " << endl;
    cin >> num;
    cin.ignore();

    switch (num)
    {
    case 1:

            if (admin.Get_password() == "password") {
                admin.CreatAdm(admin);
                admin.Save();
                admin.Menu_admin(mas_testers);

                system("cls");
                goto Entry_start;
            }
            else {

                admin.verification(mas_testers);

                system("cls");
                goto Entry_start;
            }

        break;



    case 2:
        int choise;

    Start_tester:

        cout << "Type 1 for register\n";
        cout << "Type 2 for enter\n";
        cin >> choise;
        cin.ignore();
        

        switch (choise)
        {
        case 1:

                tester1.CreateTester(mas_testers);
                new_tested = mas_testers.size();
                tester1.Menu_tester(mas_testers, (new_tested - 1));
                tester1.Save(mas_testers);

                system("cls");

                goto Entry_start;

            break;


        case 2:

            tester1.verification(mas_testers);
            tester1.Save(mas_testers);

            system("cls");

            goto Entry_start;

            break;
        }

    


        }
       
    }


