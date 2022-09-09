// #pragma once
#include "MyLibrary.h"
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
            string name, gender, address, phoneNumber, hometown, ID;
            long long age, coeSalary, days;
            cout << "NAME: "; getline(cin, name);
            cout << "AGE: "; cin >> age;
            cin.ignore();
            cout << "GENDER: "; getline(cin, gender);
            cout << "ADDRESS: "; getline(cin, address);
            cout << "PHONE NUMBER: "; getline(cin, phoneNumber);
            cout << "HOME TOWN: "; getline(cin, hometown);
            cout << "COEFFICIENTS SALARY: "; cin >> coeSalary;
            cout << "WORKING DAYS: "; cin >> days;
            switch (employeeChoice)
            {
            case 1:
            {
                int level;
                cout << "LEVEL (1-10): "; cin >> level;
                manager.addWorker(name, age, gender, address, phoneNumber, hometown, coeSalary, days, level);
                break;
            }
            case 2:
            {
                string major;
                long long years;
                cout << "MAJOR: "; getline(cin, major);
                cout << "YEARS: "; cin >> years;
                manager.addEngineer(name, age, gender, address, phoneNumber, hometown, coeSalary, days, major, years);
                break;
            }  
            case 3:
            {
                string area;
                int areaNumber;
                cout << "----------WORKING AREA----------\n";
                cout << "1. Nha kho. \t  2. Cong \t  3. Nha May \t  4. Ky tuc xa \n";
                cout << "----------WORKING AREA----------\n";
                cout << "AREA: "; cin >> areaNumber;
                if(areaNumber == 1) area = "Nha kho";
                else if(areaNumber == 2) area = "Cong";
                else if(areaNumber == 3) area = "Nha May";
                else area = "Ky tuc xa";
                manager.addGuard(name, age, gender, address, phoneNumber, hometown, coeSalary, days, area);
                break;
            }
            default:
                break;
            }
            break;
        }
        case 2:
        {
            cout << "TIM THONG TIN CAN BO (Theo Ten) !!!" << endl;
            cout << "-------------------------------------" << endl;
            string name;
            cout << "NAME: "; getline(cin, name);
            manager.FindInfo(name);
        }   
        case 3:
        {
            cout << "TINH LUONG CAN BO (Theo Ten) !!!" << endl;
            cout << "-------------------------------------" << endl;
            string name;
            cout << "NAME: "; getline(cin, name);
            manager.SalaryCaculation(name);
        }
        case 0:
        {
            cout << "EXTING...\n";
            return 0;
        }
        default:
            break;
        }
    }
    
}