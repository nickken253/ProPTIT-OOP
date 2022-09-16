#include <bits/stdc++.h>
using namespace std;

#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"
#include "CongTy.h"
CongTy congTy;
void addNhanVien()
{
    cout << "===============THEM NHAN VIEN===============" << endl;
    cout << "/t 1. Nhan vien van phong /t 2. Nhan vien san xuat" << endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        cout << "=> NHAN VIEN VAN PHONG !!!" << endl;
        string name;
        long long salary, days, basePay;
        cout << "NAME: "; cin.ignore(); getline(cin, name);
        cout << "SALARY: "; cin >> salary;
        cout << "WORKING DAY: "; cin >> days;
        cout << "BASE PAY: "; cin >> basePay;
        congTy.addNhanVienVanPhong(name, salary, days, basePay);
        break;
    }
    case 2:
    {
        cout << "=> NHAN VIEN SAN XUAT !!!" << endl;
        string name;
        long long salary, product, wagePerProduct;
        cout << "NAME: "; cin.ignore(); getline(cin, name);
        cout << "SALARY: "; cin >> salary;
        cout << "PRODUCT: "; cin >> product;
        cout << "WAGE PER PRODUCT: "; cin >> wagePerProduct;
        congTy.addNhanVienSanXuat(name, salary, product, wagePerProduct);
        break;
    }
    default:
        break;
    }
}
void showInfoEmployee()
{
    cout << "===============XEM THONG TIN NHAN VIEN===============" << endl;
    cout << "NHAP ID: ";
    string ID;
    cin >> ID;
    congTy.findInfo(ID);
}
void editInfoEmployee()
{
    cout << "===============SUA THONG TIN NHAN VIEN===============" << endl;
    cout << "NHAP ID: ";
    string ID;
    cin >> ID;
    string name;
    long long salary;
    cout << "NAME: "; cin.ignore(); getline(cin, name);
    cout << "SALARY: "; cin >> salary;
    if(ID[0] == 'V')
    {
        long long days, basePay;
        cout << "WORKING DAY: "; cin >> days;
        cout << "BASE PAY: "; cin >> basePay;
        congTy.editInfo(ID, name, salary, days, basePay);
    }
    else if(ID[0] == 'S')
    {
        long long product, wagePerProduct;
        cout << "PRODUCT: "; cin >> product;
        cout << "WAGE PER PRODUCT: "; cin >> wagePerProduct;
        congTy.editInfo(ID, name, salary, product, wagePerProduct);
    }
    else
    {
        cout << "ERROR: NOT FOUND" << endl;
        return;
    }
}
void showEmployeeSalary()
{
    cout << "===============XEM LUONG CUA NHAN VIEN===============" << endl;
    cout << "NHAP ID: ";
    string ID;
    cin >> ID;
    congTy.getSalary(ID);
}
void showMenu()
{
    cout << "====================MENU====================" << endl;
    cout << "1. Them nhan vien" << endl;
    cout << "2. Xuat nhan vien" << endl;
    cout << "3. Sua thong tin nhan vien" << endl;
    cout << "4. Tinh luong nhan vien" << endl;
    cout << "5. Tinh tong luong" << endl;
    cout << "0. Thoat" << endl;
    cout << "============================================" << endl;
    cout << "Your choice: ";
}
int main()
{
    while(1)
    {
        system("cls");
        showMenu();
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            addNhanVien();
            break;
        }
        case 2:
        {
            showInfoEmployee();
            system("pause");
            break;
        }
        case 3:
        {
            editInfoEmployee();
            system("pause");
            break;
        }
        case 4:
        {
            showEmployeeSalary();
            system("pause");
            break;
        }
        case 5:
        {
            cout << congTy.SumSalary() << endl;
            system("pause");
            break;
        }
        case 0:
        {
            cout << "THANKS FOR USING !!!" << endl;
            return 0;
        }
        default:
            break;
        }
    }
}