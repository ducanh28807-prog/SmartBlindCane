# 🦯 Smart Blind Cane - Gậy thông minh cho người khiếm thị

## 📖 Giới thiệu
Dự án thiết kế và chế tạo gậy thông minh hỗ trợ người khiếm thị với 2 tính năng chính:
1. **Dẫn đường:** Phát hiện vật cản trong phạm vi 0-120cm, phản hồi bằng độ rung biến thiên (càng gần rung càng mạnh).
2. **SOS khẩn cấp:** Gửi tin nhắn SMS kèm tọa độ GPS chính xác tới người thân khi gặp nguy hiểm.

[Sơ đồ khối hệ thống](Images/SystemBlock_diagram.png) 

[Sơ đồ khối chức năng](Images/Block_diagram.png) 

[Sơ đồ khối thuật toán](Images/AlgorithmBlock_diagram.png) 

[Sơ đồ xử lí của app](Images/App_process.png) 

## 🛠️ Linh kiện sử dụng
- **Vi điều khiển:** Arduino Nano
- **Cảm biến:** Siêu âm HC-SR05
- **Kết nối:** Module Bluetooth JDY-33
- **Đầu ra:** Motor rung 3-5V, Còi chip
- **Nguồn:** Pin Li-po 7.4V + Mạch hạ áp LM2596

## 🔧 Hướng dẫn cài đặt

### 1. Phần cứng (Arduino)
1. Tải code trong thư mục [Arduino/](Arduino/).
2. Cài đặt các thư viện cần thiết (nếu có).
3. Kết nối linh kiện theo sơ đồ `schematic.png`.
4. Nạp code `SmartCane_V1.ino` vào Arduino Nano.

### 2. Phần mềm (Android)
1. Tải file cài đặt `.apk` từ thư mục [Mobile_App/apk/](Mobile_App/).
2. Cài đặt lên điện thoại Android.
3. Mở App, cấp quyền vị trí/tin nhắn và kết nối Bluetooth với thiết bị tên "JDY-33".

## 📱 Ứng dụng Android
Ứng dụng được phát triển bằng **MIT App Inventor**, hỗ trợ:
- Kết nối Bluetooth tự động.
- Nhận diện lệnh SOS từ phần cứng.
- Lấy tọa độ GPS thực.
- Gửi tin nhắn SMS ngầm (Direct Message).

## 📊 Kết quả thử nghiệm
- **Độ chính xác cảm biến:** ±2cm
- **Thời gian phản hồi SOS:** <5s
- **Thời lượng pin:** 2 - 3 ngày hoạt động liên tục

## 👥 Thành viên thực hiện
| STT | Họ và tên | MSSV | Nhiệm vụ |

| 1 | Hoàng Tuấn Đạt | 202514645 | Phần cứng - Báo cáo - Thuyết trình |

| 2 | Nguyễn Đức Anh | 202514629 | Lập trình Arduino - Ứng dụng Android - Báo cáo - Thuyết trình |

| 3 | Nguyễn Duy Hiếu | 202514629 | Báo cáo - Thuyết trình |

## 📄 Báo cáo chi tiết
Vui lòng xem file báo cáo đầy đủ tại: [Documentation/Final_Report.pdf](Documentation/Final_Project.docx)
