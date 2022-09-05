# OOP - OBJECT ORIENTED PROGRAMMING THEORY P.2
Câu hỏi kì này:
- Kế thừa là gì ?
- Đơn kế thừa ? Đa kế thừa ?
- Function Overloading & Operator Overloading (Nạp chồng hàm và nạp chồng toán tử)
- Function Overriding (Ghi đè)
- Hàm friend

## I. INHERITANCE (TÍNH KẾ THỪA)
### 1. Giải nghĩa:
- Là một trong bốn tính chất quan trọng của OOP. Khi một Class có khả năng lấy các thuộc tính và đặc điểm từ một Class khác, thì nó được gọi là Tính kế thừa.
- Giữa 2 Class có tính chất Kế thừa, một Class mới được tạo từ Class có sẵn được gọi là Class Con (Sub Class), Class còn lại là Class Cha (Super Class).
- Class Con có đủ thuộc tính của Class Cha và có thêm thuộc tính riêng của nó, nhưng thay đổi Class con không ảnh hưởng Class Cha.

![Ảnh](https://raw.githubusercontent.com/nickken253/ProPTIT-OOP/main/OOP%20-%20INHERITANCE%20-%20UML%20-%201.png)

- Thay vì ta tạo ra 2 Class riêng biệt: Worker và Manager với các thuộc tính gần giống nhau. Ta có thể tạo 1 Class Person bao gồm các thuộc tính và tính chất giống nhau đó.
- Như thế, khi tạo Class Worker và Manager với vai trò là Class Con của Class Person, ta không mất công phải tạo lại các thuộc tính nữa.
- Làm như này, mỗi khi cần sửa code, ta có thể sửa ngay tại Class cha, thay vì sửa lần lượt ở các Class riêng lẻ nhiều lần. Điều này sẽ tránh việc sai sót khi sửa và tăng khả năng sử dụng lại.

### 2. Cú pháp:

#### a. Cú pháp chung:

>class <Sub_Class_Name> : <Super_Class_Access_Modifiers> <Super_Class_Name> {   };

> VD: Một Class Cha và 1 Class Con
``` C++
class Cha
{
private:
    int Private;
Protected:
    int Protected;
Public:
    int Public;
};

class Con : Public Cha
{
Public:
    int check;
};
```
#### b. Chế độ phạm vi kế thừa (Access Mode)
![ảnh](https://blog.luyencode.net/wp-content/uploads/2020/02/table-class.png)
Mỗi một thuộc tính hay phương thức được kế thừa từ Class Cha. Nó sẽ có nhãn phạm vi phụ thuộc vào nhãn phạm vi thấp nhất giữa Class Cha và Class Con.
> Ví dụ: Thuộc tính Age ở Class Cha là `Public`, nhãn kế thừa là Private, thì Age ở Class Con sẽ có nhãn là `Private`.

- `Public`: Nếu kế thừa ở dạng này, sau khi kế thừa, tất cả các thành viên dạng `Public` lớp cha sẽ `Public` ở lớp con, dạng `Protected` ở lớp cha vẫn sẽ là `Protected` ở lớp con.
- `Protected`: Nếu dùng `Protected` thì sau khi kế thừa, tất cả các thành viên dạng `Public` lớp cha sẽ trở thành `Protected` tại lớp con.
- `Private`: Trường hợp ta sử dụng `Private`, thì sau khi kế thừa, tất cả các thành viên dạng `Public` và `Protected` ở lớp cha sẽ thành `Private` tại lớp con.
#### c. Đơn kế thừa (Single Inheritance):
- Là mỗi Class Con là được kế thừa từ đúng một Class Cha.
- Ví dụ bên trên chính là một Đơn kế thừa.
- Mở rộng của **`Đơn kế thừa`** chính là **`Kế thừa Đa cấp`**.
#### d. Đa kế thừa (Multiple Inheritance):
- Một Class Con có thể kế thừa từ nhiều Class Cha khác nhau.

![Ảnh](https://blog.luyencode.net/wp-content/uploads/2020/02/multiple-inheritance.png)

- Cú pháp:
>class <Sub_Class_Name> : <Super_Class_Access_Modifiers1> <Super_Class_Name1>,  <Super_Class_Access_Modifiers2> <Super_Class_Name2>, ... {   };

**NOTE:** Ngoài các dạng kể trên, còn có dạng **`Kế thừa phân cấp`**, **`Kế thừa lai`**, **`Kế thừa đa đường`**, ...
## II. NẠP CHỒNG VÀ GHI ĐÈ
### 1. Nạp chồng:
#### a. Nạp chồng hàm (Function overloading):
- Là tính năng có trong CPP chứ không có trong C.
- Đây là tính năng khi ta sử dụng nhiều hàm có tên giống nhau, cùng mục đích sử dụng, nhưng khác nhau ở kiểu dữ liệu truyền vào. số lượng biến truyền vào và kiểu dữ liệu trả về.
>VD: ta có một số hàm cộng sau:
``` CPP
int add(int a, int b)
{
	return a + b;
}
//------
double add(double a, double b)
{
	return a + b;
}
//------
int add(int a, int b, int c)
{
	return a + b + c;
}
```
- Các hàm không thể nạp chồng:
  - Hàm chỉ khác nhau kiểu dữ liệu trả về.
  - Hàm có biến truyền vào dạng con trỏ hoặc dạng mảng.
  - Hàm có biến const truyền vào không phải con trỏ hoặc truyền tham chiếu.

#### b. Nạp chồng toán tử (Operator Overloading):
- Cũng tương tự như nạp chồng hàm, bạn có thể định nghĩa nhiều hàm có cùng tên, nhưng khác tham số truyền vào, nạp chồng toán tử cũng tương tự.
- Nạp chồng toán tử chính là một tính năng trên CPP cho phép ta định lại ý nghĩa của một toán tử (khi thao tác với các đối tượng trong Class).
- Cú pháp:
``` CPP
class ClassName
{
public:
    kiểu_trả_về operator ký_hiệu (đối_số)
    {
    // Something ...
    } 
};
```
>Note: 
>- Nạp chồng toán tử chỉ sử dụng cho kiểu dữ liệu tự định nghĩa như Class, Struct, ...
>- Toán tử $=$ và $\&$ đã được nạp chồng sẵn.
> - Nạp chồng không làm mất thứ tự ưu tiên của toán tử. Vẫn là nhân chia trước, cộng trừ sau.
>- 4 toán tử không thể nạp chồng. Đó là:
>   - Toán tử phạm vi (::).
>   - Toán tử ba ngôi.
>   - Toán tử lựa chọn thành viên (.).
>   - Toán tử lựa chọn qua con trỏ hàm (.*).
``` CPP
void operator ++() 
{ 
    cnt = cnt-100; 
}
```
> Nạp chồng 1 ngôi:
``` CPP
class phanSo 
{
private:
    int tu, mau;
public:
    phanSo()
    {
        tu = mau = 0;
    }
    phanSo operator +(phanSo b)
    {
        phanSo c;
        c.tu = this->tu * b.mau + this->mau * b.tu;
        c.mau = this->mau * b.mau;
        return c;
    }    
};
int main()
{
    phanSo a, b, c;
    a.input();
    b.input();
 
    c = a + b;  
    c.output();
}
```
>Nạp chồng 2 ngôi;
>
> Ở phần này, hàm nạp chồng được coi là một hàm friend của Class:
``` CPP
class phanSo 
{
private:
    int tu, mau;
public:
    phanSo()
    {
        tu = mau = 0;
    }
    friend phanso operator +(phanso a, phanso b)
    {
        phanso c;
        c.tu = a.tu * b.mau + a.mau * b.tu;
        c.mau = a.mau * b.mau;
        return c;
    }     
};
int main()
{
    phanSo a, b, c;
    a.input();
    b.input();
 
    c = a + b;  
    c.output();
}
```
> Nạp chồng toán tử nhập xuất:
>
> Đối với nạp chồng toán tử nhập $>>$ và toán tử xuất $<<$ ta sẽ dùng cách nạp chồng toán tử 2 ngôi.
``` CPP
class phanSo 
{
private:
    int tu, mau;
public:
    phanSo()
    {
        tu = mau = 0;
    }
    friend istream &operator >> (istream &is, phanso &a)
    {
        is >> a.tu;
        is >> a.mau;
        return is;
    }
 
    friend ostream &operator << (ostream &os, phanso a)
    {
        os << a.tu << "/" << a.mau << endl;
        return os;
    }     
};
int main()
{
    phanso a;
    cin >> a;
    cout << a;
}
```
### 2. Ghi đè (Function Overriding)
- Kế thừa là một tính chất quan trọng trong OOP. Một Class con được tạo ra sẽ mang thuộc tính và phương thức, hàm của một Class cha.
- Giả sử, cùng một phương thức được định nghĩa trong cả Class Con và Class Cha. Bây giờ nếu chúng ta gọi phương thức này bằng cách sử dụng đối tượng của Class Con, thì phương thức của Class Con sẽ được thực thi. Đây được gọi là ghi đè phương thức trong C ++. Hàm trong Class Con sẽ ghi đè hàm trong Class Cha.
``` CPP
class sinh_vien {
public:
    string School;
    void getInfo (){
        cout << "Toi la sinh vien" << endl;
    }
};

class sv1 : public sinh_vien {
public:
    void getInfo() {
        cout << School << endl;
    }
};

// Truy cập phương thức của Class Cha
int main()
{
    sv.sinh_vien::in_thong_tin();
}
```
## III. Hàm Friend
### 1. Định nghĩa:
- Một hàm friend được khai báo trong Class. Dữ liệu private và protected của một Class có thể được truy cập bằng cách sử dụng hàm đó.
### 2. Khai báo:
``` CPP
class className {    
    friend data_type function_name(cac_doi_so);
};
```
>VD:
``` CPP
class Box {
private:
    int length;
public:
    friend int printLength(Box); //ham friend
};
```
>Note : các hàm friend không là các hàm thành viên.