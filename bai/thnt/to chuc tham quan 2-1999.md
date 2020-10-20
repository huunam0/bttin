### Bài 2/1999 - Tổ chức tham quan

(_Dành cho học sinh THCS_)

Trong đợt tổ chức đi tham quan danh lam thắng cảnh của thành phố Hồ Chí Minh, Ban tổ chức hội thi Tin học trẻ tổ chức cho N đoàn (đánh từ số 1 đến N) mỗi đoàn đi thăm quan một địa điểm khác nhau. 
Đoàn thứ i đi thăm địa điểm ở cách Khách sạn Hoàng Đế $d_i$ km (i=1,2,...., N). 
Hội thi có M xe taxi đánh số từ 1 đến M (M ≥ N) để phục vụ việc đưa các đoàn đi thăm quan. Xe thứ j có mức tiêu thụ xăng là $v_j$ l/km.

**Yêu cầu**: Hãy chọn N xe để phục vụ việc đưa các đoàn đi thăm quan, mỗi xe chỉ phục vụ một đoàn, sao cho tổng chi phí xăng cần sử dụng là ít nhất.

**Dữ liệu:** File văn bản P2.INP:

- Dòng đầu tiên chứa hai số nguyên dương N, M (N ≤ M ≤ 200);
- Dòng thứ hai chứa các số nguyên dương $d_1, d_2, ..., d_N$;
- Dòng thứ ba chứa các số nguyên dương $v_1, v_2, ..., v_M$.
- Các số trên cùng một dòng được ghi khác nhau bởi dấu trắng.

**Kết quả:** Ghi ra file văn bản P2.OUT:

- Dòng đầu tiên chứa tổng lượng xăng dầu cần dùng cho việc đưa các đoàn đi thăm quan (không tính lượt về);
- Dòng thứ i trong số N dòng tiếp theo ghi chỉ số xe phục vụ đoàn i (i=1, 2, ..., N).

Ví dụ:

| P2.INP | P2.OUT |
|---|---|
| 3 4 <br/>7 5 9<br/>17 13 15 10<br/> | 256 <br/>2<br/> 3<br/>4 |
