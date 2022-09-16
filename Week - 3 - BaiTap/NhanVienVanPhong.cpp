#pragma once
#include "NhanVienVanPhong.h"
int NhanVienVanPhong::NUMS = 0;
NhanVienVanPhong::NhanVienVanPhong(){};
NhanVienVanPhong::NhanVienVanPhong(string name, long long salary, long long days, long long basePay)
{
    this->name = name;
    this->salary = salary;
    this->days = days;
    this->basePay = basePay;
    string tmp = to_string(++NUMS);
    while(tmp.size() < 3) tmp = "0" + tmp;
    this->ID = "VP" + tmp; 
}
void NhanVienVanPhong::editNhanVien(string name, long long salary, long long days, long long basePay)
{
    this->name = name;
    this->salary = salary;
    this->days = days;
}
long long NhanVienVanPhong::getSalary()
{
    return this->days * this->basePay;
}
void NhanVienVanPhong::showInfo()
{
    cout << "NAME: "; cout << this->name << endl;
    cout << "SALARY: "; cout << this->salary << endl;
    cout << "WORKING DAY: "; cout << this->days << endl;
    cout << "BASE PAY: "; cout << this->basePay << endl;
}
string NhanVienVanPhong::getID()
{
    return this->ID;
}