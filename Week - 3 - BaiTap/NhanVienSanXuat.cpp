#pragma once
#include "NhanVienSanXuat.h"
int NhanVienSanXuat::NUMS = 0;
NhanVienSanXuat::NhanVienSanXuat(){};
NhanVienSanXuat::NhanVienSanXuat(string name, long long salary, long long product, long long wagePerProduct)
{
    this->name = name;
    this->salary = salary;
    this->product = product;
    this->wagePerProduct = wagePerProduct;
    string tmp = to_string(++NUMS);
    while(tmp.size() < 3) tmp = "0" + tmp;
    this->ID = "SX" + tmp; 
}
void NhanVienSanXuat::editNhanVien(string name, long long salary, long long product, long long wagePerProduct)
{
    this->name = name;
    this->salary = salary;
    this->product = product;
    this->wagePerProduct = wagePerProduct;
}
long long NhanVienSanXuat::getSalary()
{
    return this->product * this->wagePerProduct;
}
void NhanVienSanXuat::showInfo()
{
    cout << "NAME: "; cout << this->name << endl;
    cout << "SALARY: "; cout << this->salary << endl;
    cout << "PRODUCTS: "; cout << this->product << endl;
    cout << "WAGE PER PRODUCT: "; cout << this->wagePerProduct << endl;
}
string NhanVienSanXuat::getID()
{
    return this->ID;
}
