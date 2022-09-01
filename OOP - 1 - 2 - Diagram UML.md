# DIAGRAM UML - SƠ ĐỒ UML
Câu hỏi kì này:

Tìm hiểu về Diagram UML: 
- Access Modifier.
- Composition (Thành phần).
- Agreegation (Tập hợp).
- Cardinality.


## I. KÝ HIỆU CLASS TRONG UML

> MỘT CLASS THÌ ĐƯỢC BIỂU DIỄN BỞI 1 HÌNH CHỮ NHẬT NHƯ NÀY:

![Anh](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/02-class-notation.png)

### 1. Tên Class:
- Tên Class được viết ngay trên đầu của ô.
### 2. Thuộc tính:
- Thuộc tính của Class được viết vào phần bên dưới phần Tên.
- Kiểu dữ liệu của Thuộc tính được viết vào sau dấu hai chấm.
- Các Thuộc tính thì Ánh xạ tới các biến thành viên trong code.
### 3. Phương thức:
- Các phương thức của Class nằm ở phần thứ 3 của ô.
- Kiểu dữ liệu trả về của Phương thức thì được viết sau dấu hai chấm ở cuối.
- Kiểu dữ liệu trả về của các Giá trị truyền vào Phương thức được viết sau dấu hai chấm ngay sau nó.

![Anh](https://raw.githubusercontent.com/nickken253/ProPTIT-OOP/main/OOP%20-%20UML%20-%20ImageTest.png)
### 4. Nhãn Modifier:
- Nhãn Modifer được viết ở đầu mỗi Thuộc tính hoặc Phương thức.
- Nhãn "$+$" là ký hiệu cho $Public$.
- Nhãn "#" là ký hiệu cho $Protected$.
- Nhãn "$-$" là ký hiệu cho $Private$.

### 4. Mối liên hệ giữa các Class:
> Sơ đồ UML cần được làm một cách chính xác để người đọc có thể chuyển ý tưởng của người thiết kế thành code một cách chính xác.

![Anh](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/07-relationships-between-classes.png)
#### a. Association: 
- Là một đường mảnh thể hiện sự liên kết giữa các đối tượng, lớp,...
#### b. Inheritance: 
- Mối liên hệ cha - con.

![anh](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/09-inheritance-hierarchy-example.png)

#### c. Cardinality: 
- Số phần tử của một tập hợp hoặc một nhóm.
![Anh](https://cdn-images.visual-paradigm.com/guide/uml/uml-class-diagram-tutorial/11-associations-with-different-multiplicies.png)
  - one to one
  - one to many
  - many to many

#### d. Aggregation:
- Là một trường hợp đặc biệt của Association. Dùng cho các trường hợp mang nghĩa "Một phần của".
- Nhiều những Đối tượng của Class2 có thể được liên kết với Class1.
- Các Đối tượng của Class1 và Class2 thì có vòng đời riêng.
![Anh](https://raw.githubusercontent.com/nickken253/ProPTIT-OOP/main/OOP%20-%20UML%20-%20ImageTest2.png)

#### e. Composition:
- Là một trường hợp đặc biệt khác của Association. Khi mà một Class này bị xóa thì Class phụ thuộc sẽ bị xóa.
- Đối tượng của Class2 thì tồn tại và phá hủy cùng với Class1.
- Class2 không thể đứng một mình.