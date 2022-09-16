#pragma once
#include "NhanVien.h"
#include "NhanVienVanPhong.h"
#include "NhanVienSanXuat.h"

class CongTy
{
protected:
    vector<NhanVien*> nhanViens;
public:
    CongTy();
    long long SumSalary();
    void addNhanVienVanPhong(string name, long long salary, long long days, long long basePay);
    void addNhanVienSanXuat(string name, long long salary, long long product, long long wagePerProduct);
    void findInfo(string ID);
    void editInfo(string ID, string name, long long salary, long long tmpInfo1, long long tmpInfo2);
    void getSalary(string ID);
};