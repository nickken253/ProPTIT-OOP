# OOP - OBJECT ORIENTED PROGRAMMING

Câu hỏi kỳ này:
- Object Oriented Programming – OOP
- Class? Object? Phân biệt giữa chúng. Con trỏ this?
- 4 tính chất của OOP (tập trung vào Encapsulation(Đóng gói) và Abstraction (Trừu tượng).
- Access Modifiers (Nhãn phạm vi) (public, private, protected).
- Constructor(Hàm khởi tạo), Destructor(Hàm hủy)
- Getter, Setter
- Biến static là gì?
- Kỹ thuật chia tách file (file.h và file.cpp)
- Quy tắc đặt tên biến trong OOP C++

## **I. TÌM HIỂU CHUNG VỀ OOP**
### **1. Hướng đối tượng là gì ?**
- **Hướng đối tượng** là một kỹ thuật lập trình phát triển hơn so với lập trình Hướng cấu trúc.
- Khi học C và C++, về cơ bản bạn sẽ không thấy rõ được sự khác biệt, nhưng **Hướng đối tượng** - OOP chính là một đặc sản của C++. Nếu học C++ mà chưa biết về **Hướng đối tượng** thì bạn chưa thực sự nắm được ngôn ngữ này.
- Lập trình Hướng cấu trúc - POP là lập trình mà ta cần sắp xếp đúng thứ tự code để giải quyết vấn đề. Còn OOP thì ngược lại, ta viết ít dùng nhiều, được áp dụng nhiều vào các dự án lớn, phức tạp hơn.
> Lập trình **Hướng đối tượng** là một kỹ thuật lập trình bằng cách đóng gói dữ liệu vào trong đối tượng và dùng chính đối tượng đó để thao tác dữ liệu.
>
> Một đối tượng sẽ gồm 2 thông tin là **thuộc tính** của nó và **phương thức** để xử lý nó. Dữ liệu trong OOP được mô hình hóa thành các lớp, các đối tượng, có các **thuộc tính** riêng và **phương thức** thao tác riêng để xử lý.

- Mục đích: Liên kết dữ liệu và các chức năng của các đối tượng để dễ dàng thao tác và cập nhật, tạo tính liên thông trong sử dụng, qua đó thay đổi tư duy và nâng cao hiệu suất lập trình.
### **2. Các khái niệm liên quan**
![Anh](https://media.geeksforgeeks.org/wp-content/uploads/OOPs-Concepts.jpg)
#### a. Class (Lớp) và Object (Đối tượng):
- Để thiết kế ra các đối tượng dùng để xử lý dữ liệu, chúng ta sẽ cần các bản thiết kế chi tiết. Và **`Class`** chính là bản thiết kế ra các đối tượng đó.
- **`Class`** là kiểu dữ liệu người dùng tự định nghĩa, chứa các dữ liệu, các mã lệnh để thiết kế ra các thuộc tính và hàm con bên trong của riêng nó, ví dụ như là các hàm tạo (constructor), các định số / biến static (static const), hay là hàm hủy (Destructor).
- Trước đây ta học về Struct thì cũng đã mang hơi hướng Class của **Hướng đối tượng**.
- Phân biệt **`Class`** và **`Object`**:
  - **`Class`** sẽ xác định các một đối tượng sẽ làm gì và chứa những gì, nó chính là một bản kế hoạch hướng dẫn xây dựng một đối tượng.
  - **`Object`** là đối tượng, bao gồm phương thức và thuộc tính để tạo kiểu dữ liệu cụ thể.
  - **`Object`** thì xác định hành động của Class, nếu bạn gửi thông tin đến cho **`Object`**, tức là bạn đang yêu cầu gọi hoặc thực thi một trong các phương thức của nó.

> Ví dụ: 
>
> **Class**: Mèo
>
> **Data Member / Dữ liệu**: Kích thước, tuổi, màu lông, giống, ...
>
> **Methods / Phương thức**: Ăn, ngủ, ngồi, ...

Với mỗi kiểu dữ liệu và phương thức khác nhau, ta có các đối tượng Mèo khác nhau.

 *Vd: Mèo cái nhỏ lông vàng, mèo đực trưởng thành đen*, ...

**Thủ tục:**
``` C++
class <class_name>
{
    khai báo thuộc tính;
    khai báo phương thức;
};

int main()
{
    <class_name> object_name;
}
```
#### b. Con trỏ this:
- This là một con trỏ đặc biệt dùng để trỏ đến địa chỉ của đối tượng hiện tại. Như vậy để truy cập đến các thuộc tính, phương thức của đối tượng hiện tại thì ta sẽ sử dụng con trỏ this.
- Con trỏ this có thể sử dụng trong 3 cách như sau:

  - Nó có thể được sử dụng để truyền đối tượng hiện tại làm tham số cho phương thức khác.
  - Nó có thể được sử dụng để tham chiếu đến thể hiện hiện tại của lớp.
  - Nó có thể được sử dụng để khai báo các chỉ mục.

> Ta sử dụng `this->ten_thuoc_tinh` để thực hiện phép gán dữ liệu cho các thuộc tính.
``` C++
class SinhVien { 
    int MSV;    
    string ten;
    public:  
    void Nhap(int MSV, string ten)
    {  
        this->MSV = MSV;    
        this->ten = ten;    
    }    
    void HienThi()
    {
        cout << ten << endl;
        cout << MSV << endl;
    }    
}; 
int main() {  
    SinhVien a =  Nhap(091011, "Dinh Hoang Anh");    
    a.HienThi();    
    return 0;  
}
```
##  **II. TÍNH CHẤT**
### **1. Các tính chất của OOP - Hướng đối tượng**
> Lập trình **Hướng đối tượng** có 4 tính chất:
> - Encapsulation (Tính đóng gói).
> - Abstraction (Tính trừu tượng).
> - Polymorphism (Tính đa hình).
> - Inheritance (Tính kế thừa).

#### a. Encapsulation *(Tính đóng gói)*:
> Tính đóng gói *(Encapsulation)* trong lập trình **Hướng đối tượng** có nghĩa là không cho phép người sử dụng các đối tượng thay đổi trạng thái nội tại của một đối tượng, mà chỉ có phương thức nội tại của đối tượng mới có thể thay đổi chính nó. 

![anh](https://media.geeksforgeeks.org/wp-content/uploads/Encapsulation-in-C-1.jpg)

- Dữ liệu và thông tin sẽ được đóng gói lại, giúp các tác động bên ngoài một đối tượng không thể làm thay đổi đối tượng đó, nên sẽ đảm bảo tính toàn vẹn của đối tượng, cũng như giúp dấu đi các dữ liệu thông tin cần được che giấu.

Vd: Trường đại học của bạn có các khoa CNTT, ATTT, DTVT, ... Bạn học ở khoa CNTT, thì chỉ có bạn và các bạn cùng khoa mới biết được thông tin nội bộ của khoa. Các bạn khoa khác muốn nghe ngóng cập nhật thì phải thông qua một bạn ở trong khoa mới có thể biết được. Ở đây, thông tin khoa CNTT và các thành viên trong khoa được Đóng gói lại dưới tên "Khoa CNTT".
- Như đoạn code ngắn bên trên, ta muốn cập nhật thông tin của SinhVien a, thì ta phải gọi tới phương thức `Nhap()` là một phương thức nội tại của Class SinhVien.
- `Setter` và `Getter` là 2 phương thức sử dụng để cập nhật hoặc lấy ra giá trị thuộc tính, đặc biệt dành cho các thuộc tính ở phạm vi private.
``` C++
class Employee
{
private:
    int salary;
public:
    // Setter
    void setSalary(int salary)
    {
      this->salary = salary;
    }

    // Getter
    int getSalary()
    {
      return salary;
    }
};
```
- Đóng gói dữ liệu dẫn đến khái niệm OOP quan trọng là Data Hiding / Infomation Hiding hay là Data abstraction.
#### b. Abstraction *(Tính trừu tượng)*:
- Abstraction *(Tính trừu tượng)* liên quan tới việc chỉ cung cấp thông tin cần thiết tới bên ngoài và ẩn chi tiết cơ sở của chúng.
> VD: Một chiếc TV, bạn có thể bật/tắt, thay đổi kênh, chỉnh âm lượng, và thêm các thiết bị ngoại vi như loa, VCR và DVD. Nhưng bạn không biết các chi tiết nội vi của nó, đó là, bạn không biết cách nó nhận tín hiệu qua không khí hoặc qua dây cáp, cách phiên dịch chúng và cuối cùng là hiển thị chúng trên màn hình.
> - Bạn chỉ có thể thao tác ngoại vi với TV, còn nội vi thì bản thân bạn không thể biết gì nhiều.
> - Bạn có thể sử dụng đối tượng cout của lớp ostream cho luồng dữ liệu tới đầu ra chuẩn như sau. Bạn không cần hiểu cách cout hiển thị văn bản trên màn hình, bạn chỉ cần biết là bạn truy cập tới cout và bạn có kết quả.

``` C++
#include <iostream>
using namespace std;
int main( )
{
   cout << "ProPTIT" << endl;
}
```
- Có 3 loại Access Modifiers:
  - Public
  - Private
  - Protected

- Phần được khai báo Public trong Class: có thể truy cập tại bất cứ đâu trong toàn bộ Chương trình.
- Phần được khai báo Private trong Class: thì chỉ có các phương thức trong Class đó mới có thể truy cập.
- Phần được khai báo Protected trong Class: cũng tương tự như Private khi mà không cái nào bên ngoài Class chứa nó có thể truy cập mà không nhờ tới Friend Class. Điểm khác biệt ở đây, là phần tử có nhãn Protected có thể truy cập bởi SubClass của Class chứa nhãn.

> VD về Nhãn Protected.
``` C++
class SinhVien
{
protected:
    int MSV;
    string ten;
};

class ThongTin : public SinhVien
{
public:
    void Nhap(int MSVV, string tenn)
    {
        MSV = MSVV;
        ten = tenn;
    }
    void HienThi()
    {
        cout << ten << endl;
        cout << MSV << endl;
    }
};

int main()
{
    ThongTin n1;
    n1.Nhap(111231, "Nguyen Van A");
    n1.HienThi();
    return 0;
}
```
> VD về Friend Class.
```C++
class B
{
private:
	int b;
public:
	B()
	{
		b = 10;
	}
	friend class A;
};

class A
{
public:
	void print(B arg)
	{
		cout << arg.b;
	}
};
int main()
{
	B b;
	A a;
	a.print(b);
    return 0;
}
```
#### c. Polymorphism *(Tính đa hình)*:
- Khi cùng một nhiệm vụ mà thực hiện nhiều cách khác nhau thì được gọi là đa hình.
- Ví dụ chúng ta có nhiệm vụ kêu của động vật, cùng là tiếng kêu nhưng con chó thì kêu gâu gâu, con mèo thì kêu meo meo, con heo thì kêu ọc ọc...
#### d. Inheritance *(Tính thừa kế)*:
- Một đối tượng có tất cả trạng thái và hành vi của đối tượng cha thì được gọi là thừa kế.


### **2. Constructor *(Hàm khởi tạo)* và Destructor *(Hàm hủy)***
#### a. Construtor:
- Là các hàm thành viên được tự động được thực thi khi chương trình tạo ra một đối tượng từ Class, và được sử dụng với mục đích chính là khởi tạo các biến thành viên trong class đó.
- Constructor gồm 2 tính chất sau:
  - Tên hàm trùng với tên Class.
  - Hàm không mang kiểu dữ liệu nào cả, kể cả Void.
- Contructor chỉ có thể được gọi 1 lần duy nhất, sau khi được gọi và khởi tạo các biến, thì nó không thể gọi lại được nữa.
- Nếu một Constructor không chứa tham số trong nó thì chúng ta gọi nó là Default Constructor.
``` C++
class MyClass {
private:
    int    m;

public:
    MyClass(int a) // Constructor có tham số a.
    {    
        m = a;      
    }

    MyClass() m = 5; // Default Constructor.
};
```

#### b. Destructor:
- Là các hàm thành viên được tự động được thực thi khi chương trình hủy một đối tượng được tạo ra từ Class, và được sử dụng với mục đích xóa và giải phóng đối tượng đó khỏi bộ nhớ.
- Destructor có 3 tính chất sau:
  - Tên hàm hủy trùng với tên Class nhưng phải có toán tử ~ ở phía trước.
  - Hàm không mang kiểu dữ liệu nào cả, kể cả Void.
  - Hàm hủy không có tham số, cũng không trả về giá trị từ nó.
- Trong POP, các kiểu dữ liệu có cơ chế tự giải phóng bộ nhớ nên ta không cần dùng tới Destructor, nhưng khi làm việc với Class thì chúng không có cơ chế trên, nên ta phải áp dụng Destructor.
- Nếu ta không tạo Destructor, chương trình sẽ tự tạo ra một Destructor trống và tự động thực thi khi xóa 1 đối tượng từ Class khỏi chương trình.

``` C++
class MyClass {
public:
    ~ MyClass(); 
};
```
> Toán tử $delete[]$:
>> là một toán tử có tác dụng xóa và giải phóng vùng bộ nhớ đã sử dụng để lưu giữ một đối tượng, sau khi đối tượng đó bị xóa khỏi chương trình.
``` C++
class MyClass {
private:
    char *m_data;

public:
    MyClass()
    {
        m_data = new char[100];
    }
    ~MyClass()
    {
        delete [] m_data; // Giải phóng vùng nhớ
    }
};
```
### **3. Static const (Định Số)**
- Là biến thành viên ở dạng tĩnh và tồn tại duy nhất trong class. Biến static có khả năng được sử dụng chung cho tất cả các đối tượng được tạo ra từ class, chính vì thế, biến static phải nằm trong Nhãn public.
- Ngoài ra do nó ở dạng tĩnh nên chúng ta có thể sử dụng trực tiếp nó mà không cần phải tạo đối tượng từ class.

``` C++
class TestClass
{
public:    
    int num;          //Khai báo biến thông thường
    static int sNum;  //Khai báo biến static
public:
    TestClass(){ num = 10;} 
};

int TestClass::sNum = 100; //Khởi tạo giá trị cho biến static

int main()
{   
    cout << TestClass::sNum; // 100
    cout << TestClass::num;  // error: invalid use of non-static data member
}
```
## **III. THAO TÁC VỚI FILE VÀ TÊN BIẾN**
### **1. Kỹ thuật tách file và đặt tên file trong OOP**
#### a. Chia tách file *(File.h & File.cpp)*
- File.h là file để khai báo các hàm mà chương trình chúng ta cần dùng tới. Có 2 dạng: file thư viện có sẵn và file thư viện do người dùng xây dựng.
- File.cpp là file để đi định nghĩa lại các hàm đã khai báo ở file.h bên trên.

> Để include thư viện từ file.h, giống như lúc include thư viện testlib
>> #include "file_name"

Lưu ý: thận trọng khi dùng vì có thể mắc lỗi trùng thư viện.

``` C++
// ThuVienCuaTui.h
// File.h để khai báo tên hàm

#include <bits/stdc++.h>
using namespace std;

int SNT(int n);
int SoCPp(int n);
```

> File.cpp ta dùng để định nghĩa các hàm đã xây dựng:
``` C++
// ThuVienCuaTui.cpp
// File.cpp để định nghĩa lại các hàm trong File.h
#include"ThuVienCuaTui.h"
int SNT(int n)
{
    if(n < 2 || (n != 2 && n % 2 == 0) || (n != 3 && n % 3 == 0)) return 0;
    else
    {
        if(n == 2) return 1;
        else 
        {
            for(int i = 2; i <= sqrt(n); i++)
            {
                if(n % i == 0) return 0;
            }
        }
    }
    return 1;
}
int SoCPp(int n)
{
    if(sqrt(n) == ceil(sqrt(n) * 1.0)) return 1;
    return 0;
}
```

> Khi dùng code, ta chỉ cần include thư viện, và sử dụng hàm đã xây dựng:
``` C++
#include "ThuVienCuaTui.h"
int main()
{   
    int n;
    cin >> n;
    int k = SoCPp(n);
    cout << k;
}
```
### **2. Quy tắc đặt tên biến trong lập trình OOP**
- Một quy tắc hay được áp dụng bất kể kỹ thuật lập trình hay ngôn ngữ lập trình nào. 
  - **CamelCase:** (còn được gọi là Upper CamelCase) là tên mà mỗi từ mới bắt đầu bằng chữ in hoa.
  - VD: CamelCase, CustomerAccount, PlayingCard.

> **Đặt tên Class**: Cố gắng sử dụng danh từ vì một class thường đại diện cho một cái gì đó trong thế giới thực.
>> VD: Class các sinh viên: SinhVien, Class lớp học: LopHoc, ...

> **Đặt tên Method**: Sử dụng CamelCase, nhưng chữ cái đầu tiên không viết hoa, nên sử dụng các động từ để mô tả những gì phương thức sẽ làm.
>> VD: clearData, getInfor, setName, ...

> **Đặt tên cho biến, biến static**: Các tên biến sẽ đại diện cho những gì giá trị của biến đại diện.
>>VD: oddNum, orderNum, ...

> **Đặt tên hằng số**: nên được viết hoa hết.
>>VD: IMAX, IMIN, MOD, ...

