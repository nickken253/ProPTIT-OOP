# SFML TRONG C++
Câu hỏi kì này:
- Cài đặt thư viện SFML, tạo một cửa sổ và in một hình ảnh lên cửa sổ.
- Lý thuyết game cơ bản:
  - Game 2D, các thể loại game
  - Gameloop
  - Deltatime
  - Sprite, Texture
  - Animation
  - ...........
- SFML:
  - Dùng thư viện tương tác với bàn phím, chuột
  - Viết animation
  - Chuẩn bị ý tưởng game

## **1. TÌM HIỂU VỀ SFML**
> Tải file tại: [CÀI ĐẶT SFML](https://www.sfml-dev.org/download.php)
- SFML là Simple and Fast Multimedia Library. Là thư viện cho các ứng dụng đa phương tiện, cung cấp các thành phần: system, window, graphics, audio và network.
  - System: gồm vector và các lớp xâu unicode, các bộ phân luồng và bộ đếm thời gian.
  - Windows: quản lý các luồng đầu vào, thiết bị điều khiển và cửa sổ.
  - Graphics: Tăng tốc phần cứng của đồ họa 2D về hình khối, đa giác và hiện văn bản.
  - Audio: Phát và ghi âm thanh, các tác vụ về âm thanh.
  - Network: Liên quan tới đóng gói dữ liệu, HTTP và FTP.
## **2. LÝ THUYẾT GAME CƠ BẢN**
- Game 2D được hiểu là thể loại game không rõ rệt ba chiều sự ấn tượng và không thể xoay góc quay. Game 2D cuộc bản đồ theo hai chiều đó là chiều thẳng và chiều ngang. Ngoài ra thì tiền cảnh, nhân vật, hậu cảnh khá giống và tương tự như phi hoạt hình vì mọi thứ vẽ trên giất cắt ra trong game 2D.
## **2.1. Các thể loại game**
- **Game nhập vai (RPG Role-Playing Game).**
  - Action RPG (Thể loại nhập vai hành động).
  - MMORPG (Thể loại nhập vai trực tuyến).
  - Roguelikes (Thể loại game nhập vai dạng lưới): Don't starve.
  - Tactical RPG (Thể loại game nhâp vai chiến lược).
  - Sandbox RPG (Thể loại game nhập vai thế giới mở).
- **Game thể thao (Sports).**
  - Racing (Thể loại game đua xe).
  - Sports game (Thể loại game thể thao).
  - Competitive (Thể loại game thể thao thi đấu).
  - Sports-based fighting (Thể loại game đấu võ).
- **Game hành động (Action).**
  - Platform games (Thể loại game đi cảnh).
  - Shooter games (Thể loại game bắn súng).
  - Fighting games (Thể loại game đối kháng).
  - Stealth game (Thể loại game hành động lén lút).
  - Survival games (Thể loại game sinh tồn).
  - Rhythm games (Thể loại game âm nhạc giai điệu).
  - Battle Royale games (Thể loại game bắn súng sinh tồn).
- **Action - adventure (Thể loại game phiêu lưu hành động).**
  - Survival horror (Thể loại game kinh dị sinh tồn).
  - Metroidvania (Thể loại game hành động phiêu lưu).
- **Adventure (Thể loại game phiêu lưu).**
  - Text adventures (Thể loại game phiêu lưu văn bản).
  - Visual novels (Thể loại game tiểu thuyết tương tác).
  - Interactive movie (Thể loại game điện ảnh tương tác).
  - Real-time 3D adventures (Thể loại game phiêu lưu 3D thời gian thực).
- **Simulation (Thể loại game mô phỏng).**
- **Strategy (Thể loại game điện tử chiến thuật).**
  - 4X game.
  - Artillery game (Thể loại game pháo binh).
  - Auto battler (Auto chess).
  - MOBA
  - Real-time strategy (Thể loại game chiến thuật thời gian thực).
  - Tower defense (Thể loại game tháp phòng thủ).
  - Turn-based strategy (Thể loại game chiến thuật theo lượt).
  - Wargame (Thể loại game chiến tranh).
  - Grand strategy wargame (Thể loại game đại chiến lược).
- **Casual games (Thể loại game thông thường).**
- **Digital collectible card game (Thể loại game sưu tầm thẻ bài).**
- **Gacha game (Thể loại game rút thăm trúng thưởng).**
- **Idle game (Thể loại game điện tử gia tăng).**
- **Logic game (Thể loại game câu đố logic).**
- **Party game (Thể loại game tiệc tùng).**
## **2.2. Game loops**
### 2.2.1. Khái niệm.
- Game loops là phần cốt lõi của hầu hết các game chính là vòng lặp được dùng để cập nhật và hiển thị trạng thái của game một cách liên tục.

![ẢNH](https://yinyangit.files.wordpress.com/2012/03/basic-game-loop.png?w=640)
- Gần như hầu hết tất cả các trò chơi đều có nó, và gần như ít có cái nào giống hẳn cái nào, thêm vào đó cũng có một vài phần mềm ứng dụng không phải là game cũng dùng nó.
### 2.2.2. Phân biệt Game loops và Event loops.
> Event loops:
``` CPP
while(true){
	SuKien* su_kien = choSuKien();
	xuLySuKien(su_kien);
}
```

- Chương trình sẽ đợi điều kiện của sự kiện để điều hướng vòng lặp. Như vậy trong khi sự kiện đang diễn ra và chưa kết thúc, ta sẽ không thể khiến cho các sự kiện kế tiếp xảy ra được.
- Khi chơi game, game phải hành động liên tục và thay đổi theo hướng của người chơi điều khiển. Nếu xảy ra tình trạng này, bạn sẽ không thể làm gì nhân vật cho tới khi nhân vật đó hoàn thành xong yêu cầu mà bạn vừa đưa ra.

> Game loops
``` CPP
while(true){
	xuLyDauVao();
	capNhat();
	xuatDoHoa();
}
```

- Ở game loops, ta sẽ cập nhật liên tục từ đầu vào để có thể hiện thi liên tục ra ngoài màn hình.

## 2.3. Time & Delta Time
- Để tính toán việc một vòng lặp game quay nhanh thế nào so với thời gian thực người ta đã cho ra đời định nghĩa về "frames per second - khung hình trên giây".
- FPS càng cao thì hình ảnh hiển thị càng mượt, tuy nhiên sẽ càng tốn tài nguyên, một khung hình càng cần nhiều công việc thì càng ảnh hưởng tới FPS (độ phức tạp vật lý, đa dạng đối tượng, chi tiết đồ họa, ...).
- Ngoài ra delta time còn phụ thuộc vào cấu hình phần cứng, tùy vào độ mạnh yếu, mà game sẽ chạy nhanh hay chậm, tốc độ xử lí sẽ lag hay mượt, ... Và hiện nay có vô cùng đa dạng các loại cấu hình cho nên, một câu hỏi luôn được đặt ra cho các lập trình viên: trò chơi phải chạy ở một tốc độ ổn định trên những phần cứng khác nhau.
- Delta Time: thời gian cần để hiện thị khung hình. 60 FPS thì delta time là 1/60 (s).

## 2.4. Sprite & Texture
- Texture là một hình ảnh, nhưng được gọi như thế là bởi nó được ánh xạ tới một thực thể 2D.
- Sprite là một hình chữ nhật của texture. Là khái niệm để chỉ 1 ảnh nhỏ trong 1 ảnh lớn, ảnh lớn này có thể chứa nhiều sprite. Khi vẽ có thể vẽ 1 sprite lên màn hình.

![Ảnh](https://resources.stdio.vn/content/article/5ef61d66a37a5e67beb441f0/resources/res-1600943142-1600943142629.jpg)

```CPP
sf::Texture texture;
if (!texture.loadFromFile("image.png"))
{
    // error...
}
```

- Texture như đưa ra ngoài cửa sổ thì cần phải điều chỉnh kích thước. Còn sprite thì đưa ra kích thước gốc.

> texture.setSmooth(true);
> texture.setRepeated(true);

> Tạo 1 sprite:
```CPP
sf::Sprite sprite;
sprite.setTexture(texture);
window.draw(sprite);
sprite.setColor(sf::Color(0, 255, 0)); // green
sprite.setColor(sf::Color(255, 255, 255, 128)); // half transparent
```

- Sprite sheet: là tập hợp của nhiều sprite bên trong nó, bao gồm các thông tin hỗ trợ định vị được các sprite trong sprite sheet, muốn vẽ được sprite trong sprite sheet cần các thông tin như: X, Y, WIDTH, HEIGHT để định vị sprite.
- Ta vẽ lần lượt hình ảnh của đối tượng có trong Sprite Sheet theo thời gian lên các Frame.

## 2.5. Animation
- Là một chuỗi hình ảnh 2D được chồng lên nhau theo thời gian. Mỗi một hình ảnh là 1 khung hình.
    
![Ảnh](https://www.cs.cornell.edu/courses/cs3152/2021sp/labs/design3/walk.png)