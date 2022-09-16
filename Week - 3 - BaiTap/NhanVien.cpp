#pragma once
#include "NhanVien.h"
NhanVien::NhanVien(){};
NhanVien::NhanVien(string name, long long salary)
{
    this->name = name;
    this->salary = salary;
}
void NhanVien::editNhanVien(string name, long long salary, long long info1, long long info2)
{
    this->name = name;
    this->salary = salary;
}
long long NhanVien::getSalary()
{
    return this->salary;
};
void NhanVien::showInfo()
{
    cout << this->name << endl;
    cout << this->salary << endl;
}
string NhanVien::getID()
{
    return this->ID;
}
