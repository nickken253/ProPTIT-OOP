#pragma once
#include "NhanVien.h"
class NhanVienVanPhong : public NhanVien
{
protected:
    long long days;
    long long basePay;
public:
    static int NUMS;
    NhanVienVanPhong();
    NhanVienVanPhong(string name, long long salary, long long days, long long basePay);
    void editNhanVien(string name, long long salary, long long days, long long basePay);
    long long getSalary();
    void showInfo();
    string getID();
};