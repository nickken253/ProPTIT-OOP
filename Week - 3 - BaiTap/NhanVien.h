#pragma once
#include <bits/stdc++.h>
using namespace std;
class NhanVien
{
protected:
    string name, ID;
    long long salary;
public:
    NhanVien();
    NhanVien(string name, long long salary);
    virtual void editNhanVien(string name, long long salary, long long info1, long long info2);
    virtual long long getSalary();
    virtual void showInfo();
    virtual string getID();
};