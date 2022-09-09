// #pragma once
#include "MyLib.h"
Manager manager;
void displayMenu()
{
    cout << "===================MENU===================" << endl;
    cout << "1. Them moi can bo." << endl;
    cout << "2. Tim thong tin can bo (Theo ten)." << endl;
    cout << "3. Tinh luong can bo." << endl;
    cout << "0. Thoat." << endl;
    cout << "===================MENU===================" << endl;
    cout << "Lua chon cua ban: ";
}
int main()
{
    while(1)
    {
        // system("cls");
        displayMenu();
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            cout << "THEM MOI CAN BO !!!" << endl;
            cout << "-------------------------------------" << endl;
            cout << "Can bo: \n  1. Cong Nhan. \n  2. Ky Su \n  3. Bao ve \n";
            int employeeChoice;
            cin >> employeeChoice;
            cin.ignore();
            Employee* employee = new Employee();
            // string name, int age, string gender, string address, string phoneNumber, string homeTown, long long coeSalary, long long days
            string name, gender, address, phoneNumber, homeTown, ID;
            long long age, coeSalary, days;
            cout << "NAME: "; getline(cin, name);
            cout << name << endl;
            cout << "AGE: "; cin >> age;
            cin.ignore();
            cout << "GENDER: "; getline(cin, gender);
            cout << "PHONE NUMBER: "; getline(cin, phoneNumber);
            cout << "HOME TOWN: "; getline(cin, homeTown);
            cout << "COEFFICIENTS SALARY: "; cin >> coeSalary;
            cout << "WORKING DAYS: "; cin >> days;
            switch (employeeChoice)
            {
            case 1:
            {
                int level;
                cout << "LEVEL (1-10): "; cin >> level;
                employee = new Worker(name, age, gender, address, phoneNumber, homeTown, coeSalary, days, level);
                break;
            }
            case 2:
            {
                string major, years;
                cout << "MAJOR: "; getline(cin, major);
                cout << "YEARS: "; getline(cin, years);
                employee = new Engineer(name, age, gender, address, phoneNumber, homeTown, coeSalary, days, major, years);
                break;
            }  
            case 3:
            {
                string area;
                cout << "AREA: "; getline(cin, area);
                employee = new Guard(name, age, gender, address, phoneNumber, homeTown, coeSalary, days, area);
                break;
            }
            default:
                break;
            }
            manager.addEmployee(employee);
            cout << "name: " << employee->getName() << endl;
            break;
        }
        case 2:
        {
            //CHƯA CHẠY ĐC
            cout << "TIM THONG TIN CAN BO (Theo ten) !!!" << endl;
            string nameFind;
            cout << "NAME: "; getline(cin, nameFind);
            cout << nameFind << endl;
            vector<Employee*> findName = manager.findEmployee(nameFind);
            cout << findName.size() << endl;
            break;
        }   
        case 3:
        {
            
        }
        case 0:
        {
            return 0;
        }
        default:
            break;
        }
    }
    
}