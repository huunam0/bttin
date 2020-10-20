SỞ GIÁO DỤC VÀ ĐÀO TẠO HẢI DƯƠNG

ĐỀ THI CHÍNH THỨC

 KỲ THI CHỌN HỌC SINH GIỎI CẤP TỈNH LỚP 12 THPT
 
 NĂM HỌC 2017-2018 
 
 MÔN: TIN HỌC
 
 Thời gian làm bài: **180** phút (không kể thời gian giao đề)
 
 (Đề thi gồm **04** trang)


**Tổng quan về các bài thi trong đề:**

| **TT** | **Tên bài** | **Tên file chương trình** | **Dữ liệu vào** | **Dữ liệu ra** | **Thời gian chạy 1 test** | **Điểm** |
| --- | --- | --- | --- | --- | --- | --- |
| **1** | Trả tiền nước | BAI1.\* | bàn phím | màn hình | 1s | 2,5 |
| **2** | Đếm sách | BAI2.\* | bàn phím | màn hình | 1s | 2,5 |
| **3** | Bạn bè | BAI3.\* | bàn phím | màn hình | 1s | 2,0 |
| **4** | Dãy dài nhất | BAI4.\* | BAI4.INP | BAI4.OUT | 1s | 1,5 |
| **5** | Chia phần | BAI5.\* | BAI5.INP | BAI5.OUT | 1s | 1,5 |

**Yêu cầu các thí sinh đọc kỹ phần hướng dẫn dưới đây:**

- _Dấu (\*) trong tên file chương trình được thay thế bằng PAS, C hoặc CPP tuỳ theo thí sinh viết chương trình bằng ngôn ngữ Pascal, C hoặc C++_
- _Chương trình chỉ in kết quả theo yêu cầu của đề bài, không in bất kỳ thông tin nào khác_
- _Đối với các bài tập đọc và in dữ liệu từ file văn bản, tên các file này phải đặt đúng theo yêu cầu đề bài,_ ***không có đường dẫn phía trước***.


**Viết chương trình giải các bài toán sau:**

**Bài 1: Trả tiền nước**

Công ty TNHH MTV kinh doanh nước sạch trên địa bàn một tỉnh quy định giá bán nước sạch sinh hoạt cho các hộ dân cư trong địa bàn tỉnh như sau:

| **Lượng nước sạch sử dụng (hộ/tháng)** | **Giá bán (đ/m3)** |
| --- | --- |
| Từ m3 thứ 1 đến m3 thứ 5 | 6500 |
| Từ m3 thứ 6 đến m3 thứ 15 | 7800 |
| Từ m3 thứ 16 đến m3 thứ 25 | 9200 |
| Từ m3 thứ 26 trở lên | 10300 |

_(Giá bán trên chưa bao gồm thuế VAT và phí nước thải)_

Tính số tiền phải trả cho công ty nước sạch của một hộ gia đình trong một tháng, biết rằng thuế VAT và phí nước thải là 12%.

**Dữ liệu:** Nhập từ bàn phím số nguyên dương là số m3 nước sạch mà một hộ gia đình dùng trong một tháng.

**Kết quả:** In ra màn hình ba giá trị tương ứng trên ba dòng, mỗi số gồm hai chữ số thập phân.

- _Dòng 1_: Số tiền tương ứng với giá bán nước của công ty.
- _Dòng 2_: Số tiền tương ứng với thuế VAT và phí nước thải.
- _Dòng 3_:Tổng số tiền nước mà hộ gia đình đó phải trả trong tháng đó.

**Ví dụ:**

| **Dữ liệu vào** | **Dữ liệu ra** |
| --- | --- |
| 5 | 32500.00<br/>3900.00<br/>36400.00 |

_Ghi chú:_ Bài được chấm qua 10 test, mỗi test đúng được 0,25 điểm.

**Bài 2. Đếm sách**

Trong một cửa hiệu bán sách. Để dễ quản lý các loại sách có trong hiệu sách, người bán hàng đã gán tương ứng mỗi loại sách với một số nguyên dương, hai loại sách khác nhau có số được gán là hai số nguyên khác nhau. Em hãy viết chương trình giúp chủ cửa hiệu tìm loại sách còn nhiều nhất và số lượng còn là bao nhiêu.

**Dữ liệu:** Nhập từ bàn phím số N là số lượng sách còn lại trong cửa hiệu, tiếp theo là N số nguyên mô tả loại sách của quyển sách này, hai số nguyên liên tiếp cách nhau một dấu trống. Giá trị các số nguyên không vượt quá 10^9.

**Kết quả:** In ra màn hình trên một dòng số xuất hiện nhiều nhất và số lần xuất hiện của nó, hai giá trị này in cách nhau một dấu trống. Nếu như có nhiều số có số lần xuất hiện nhiều nhất thì in số có giá trị bé nhất.

**Ví dụ:**

| **Dữ liệu nhập** | **Dữ liệu xuất** |
| --- | --- |
| 11<br/>1 2 2 3 2 4 5 2 6 7 6 | 2 4 <br/> |

_Ghi chú_: Bài được chấm qua 10 test, mỗi test đúng được 0,25 điểm trong đó:

- 6 test có giá trị các mã số trong phạm vị từ 1 đến 1000
- 4 test có giá trị các mã số trong phạm vi từ 1 đến 109.

**Bài 3. Bạn bè**

Hai từ gọi là bạn bè nếu chúng được tạo nên bởi cùng một tập hợp kí tự giống nhau: Ví dụ **S1=&#39;aabbbccccb&#39;** và **S2=&#39;aabccccaaaaa&#39;** là bạn bè vì nó cùng được tạo bởi tập ký tự **{&#39;a&#39;,&#39;b&#39;,&#39;c&#39;}**. Cho ba cặp hai từ; với mỗi cặp in &#39;YES&#39; nếu hai từ trong cặp là bạn bè và in &#39;NO&#39; nếu chúng không phải là bạn bè.

**Dữ liệu:** Nhập từ bàn phím 6 xâu ký tự (mô tả 6 từ) lần lượt là S1, S2, S3, S4, S5, S6; mỗi xâu trên một dòng chỉ gồm chữ cái tiếng Anh in thường có độ dài không vượt quá 1000

**Kết quả:** In ra ba dòng:

- Dòng 1: In &#39;YES&#39; nếu S1 và S2 là bạn bè, ngược lại in &#39;NO&#39;
- Dòng 2: In &#39;YES&#39; nếu S3 và S4 là bạn bè, ngược lại in &#39;NO&#39;
- Dòng 3: In &#39;YES&#39; nếu S5 và S6 là bạn bè, ngược lại in &#39;NO&#39;

**Ví dụ:**

| **Dữ liệu vào** | **Dữ liệu ra** |
| --- | --- |
| aabbbccccb<br/>aabccccaaaaa<br/>aabbbccccbcc<br/>aadddccccaaa<br/>xyzabc<br/>aaaaxxyxxzcccb | YES<br/>NO<br/>YES <br/> <br/> <br/> |

_Ghi chú_: Bài được chấm qua 8 test, mỗi test đúng được 0,25 điểm:

- 6 test có độ dài của mỗi xâu ký tự không vượt quá 255
- 2 test có độ dài của mỗi xâu ký tự không vượt quá 1000

**Bài 4. Dãy dài nhất**

Cho dãy số nguyên dương A = (a1, a2, ..., an) và số nguyên dương K. Hãy tìm dãy con dài nhất (là dãy có nhiều số nhất) gồm các số liên tiếp của A mà tổng tất cả các số của dãy con này chia hết cho K.

**Dữ liệu:** Nhập từ file văn bản BAI4.INP

- Dòng đầu tiên ghi hai số nguyên dương N, K (N ≤ 10^5, K ≤ 10^5) ghi cách nhau một dấu trống
- Dòng thứ hai ghi N số nguyên dương a1, a2, ..., an mô tả dãy A, hai số nguyên liên tiếp ghi cách nhau một dấu trống. Giá trị các số nguyên không vượt quá 10^9

**Kết quả:** Ghi ra file văn bản BAI4.OUT độ dài của dãy con dài nhất tìm được

**Ví dụ:**

| **BAI4.INP** | **BAI4.OUT** |
| --- | --- |
| 6 3<br/>3 2 4 6 3 7 | 5 <br/> |

_Ghi chú_: Kết quả được chấm qua 6 test, mỗi test đúng được 0,25 điểm, trong đó:

- 2 test có N ≤ 500
- 2 test có N ≤ 5000
- 2 test có N ≤ 10^5

**Bài 5. Chia phần**

Cho dãy số nguyên A = (a1, a2, ..., an); Hãy đếm số cách chia dãy trên thành 4 dãy con liên tiếp sao cho tổng các số trong mỗi dãy con đều bằng nhau. Chính xác hơn, mỗi cách chia được mô tả bằng bộ 3 chỉ số (i, j, k): 1 ≤ i < j < k < n. Trong đó A[1..i] là dãy 1; A[i+1..j] là dãy 2; A[j+1..k] là dãy 3 và A[k+1..n] là dãy 4. Hai cách chia khác nhau ứng với hai bộ 3 chỉ số khác nhau.

**Dữ liệu:** Vào từ file văn bản BAI5.INP

- Dòng đầu tiên ghi số nguyên dương n (n ≤ 10^6)
- Dòng thứ hai ghi N số nguyên a1, a2,...,an (|ai| ≤ 10^9, i=1..n); hai số liên tiếp cách nhau bằng một dấu trống

**Kết quả:** Ghi ra file văn bản BAI5.OUT một số nguyên là số lượng cách chia tìm được

**Ví dụ:**

| BAI5.INP | BAI5.OUT |
| --- | --- |
| 8<br/>1 1 1 1 1 1 1 1 | 1 |

_Chú ý_: Kết quả được chấm qua 6 test, mỗi test đúng được 0,25 điểm, trong đó:

- 2 test có n ≤ 50
- 2 test có n ≤ 500
- 1 test có n ≤ 5000
- 1 test có n ≤ 10^6

.............................. **HẾT**..................................

- _Thí sinh không được sử dụng tài liệu_
- _Giám thị không giải thích gì thêm_

Họ và tên thí sinh:............................................................ Số báo danh:............................................

Chữ ký của giám thị 1:......................................Chữ ký của giám thị 2:............................................

