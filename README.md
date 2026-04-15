## 👤 Author

**Nguyen Quang Bao Huy**  
- 🌐 Personal Website: [https://hui-2304.github.io/hui-230405/](https://hui-2304.github.io/hui-230405/)
- 💻 GitHub: [https://github.com/Hui-2304](https://github.com/Hui-2304)
# Arduino LM35 Temperature Monitoring System

##  1. Mô tả

Dự án xây dựng hệ thống đo nhiệt độ sử dụng cảm biến LM35 kết hợp với Arduino. Hệ thống có khả năng đọc dữ liệu từ nhiều cảm biến (A0, A1, A2) và xuất dữ liệu dưới dạng JSON để dễ dàng tích hợp với các hệ thống IoT hoặc phần mềm phân tích dữ liệu.

---

##  2. Tính năng

* Đọc nhiệt độ từ **3 cảm biến LM35**
* Chuyển đổi ADC → °C chính xác
* Xuất dữ liệu dạng **JSON**
* Dễ mở rộng thêm cảm biến
* Phù hợp cho IoT và giám sát môi trường

---

##  3. Phần cứng

| Thành phần  | Số lượng | Ghi chú           |
| ----------- | -------- | ----------------- |
| Arduino Uno | 1        | Vi điều khiển     |
| LM35        | 3        | Cảm biến nhiệt độ |
| Dây nối     | Nhiều    | Kết nối           |
| Breadboard  | 1        | Lắp mạch          |

---

## ⚙️ 4. Hướng dẫn sử dụng

### 🔧 Kết nối phần cứng

* LM35 #1 → A0
* LM35 #2 → A1
* LM35 #3 → A2
* VCC → 5V
* GND → GND

---

###  Chạy chương trình

1. Mở Arduino IDE
2. Mở file:

```
firmware/LM35_TempReader/LM35_TempReader.ino
```

3. Upload code lên Arduino
4. Mở Serial Monitor (9600 baud)

---

### Output (JSON)

```json
{"temp1":25.3,"temp2":26.1,"temp3":24.8}
```

---

##  5. Nguyên lý hoạt động

* LM35 xuất điện áp: **10mV / °C**
* Arduino đọc ADC (0–1023)
* Công thức:

```
Temperature = (ADC * 500.0) / 1023.0
```

---

##  6. Cấu trúc thư mục

```
Arduino_LM35_TempMonitor/
│
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino
│
├── pc_app/        # Ứng dụng PC (future)
├── docs/          # Tài liệu
├── libs/          # Thư viện
├── simulation/    # Mô phỏng Proteus
```

---

##  7. Thành viên nhóm

| Tên  | Vai trò                                  |
| ---- | ---------------------------------------- |
| SV A | Phát triển đọc cảm biến (A0, A1, A2)     |
| SV B | Cải tiến định dạng JSON & xử lý conflict |

---

## 8. Git Workflow

* Tạo branch feature
* Commit theo chuẩn:

  * `feat:` thêm tính năng
  * `fix:` sửa lỗi
* Tạo Pull Request
* Review & Merge

---

## 🏁 9. Kết luận

Dự án giúp hiểu rõ:

* Arduino + cảm biến
* Xử lý dữ liệu
* Git/GitHub workflow
* Làm việc nhóm

---

 Nếu thấy hữu ích, hãy star repo nhé!
