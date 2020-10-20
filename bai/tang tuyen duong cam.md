# Giao thông

Để giảm tải giao thông cho những thành phố lớn và điều tiết giao thông, nhà quản lý ra quy định cho các phương tiện xe gắn máy và ô tô như sau: 
Một số đường cấm ô tô và xe gắn máy, một số đường chỉ xe biển số chẵn được đi, một số đường chỉ xe biển số lẻ được đi và một số đường cả xe biển số chẵn và biển số lẻ đều được đi. 

Cho trước một hệ thống giao thông với các nút giao thông và các đường giữa hai nút giao thông. 
Mỗi đường gắn với một số từ 0 đến 3 với quy định như sau: đường số 0 là cấm xe ô tô và xe gắn máy; đường số 1 dành cho xe biển số lẻ; đường số 2 dành cho xe biển số chẵn; đường số 3 đành cho cả xe biển số chẵn và biển số lẻ. Biết răng các con đường đều là đường 2 chiều và hệ thống giao thông đảm bảo tất cả các xe đều đi được từ giữa các nút giao thông.

Hãy lập trình giúp nhà quản lý tăng tối đa số đường cấm các phương tiện ô tô và xe gắn máy nhưng vẫn đảm bảo tất cả các xe đều đi được giữa các nút giao thông.

**Dữ liệu vào** là file GiaoThong.inp có cấu trúc như sau:

+ Dòng đầu là hai số nguyên dương N,M(1<=N,M<=1000) với N là số nút giao thông, M là số con đường.
+ M dòng tiếp theo, mỗi dòng gồm 3 số nguyên xi,yi,wi. Trong đó 1<=xi,yi<=N là các nút giao thông, 0<=wi<=3 là loại đường cho các phương tiện di chuyển theo quy định như trên

**Dữ liệu ra** là file GiaoThong.out có cấu trúc như sau:

- Dòng đầu là số nguyên không âm K là số con đường cấm các phương tiện ô tô, xe gắn máy nhiều nhất bổ sung được (không tính những con đường đã cấm).
- K dòng tiếp theo, mỗi dòng gồm 3 số nguyên xi,yi,wi là thông tin con đường bổ sung vào danh sách cấm phương tiện ô tô và xe gắn máy.

**ví dụ:**

|GiaoThong.inp|GiaoThong.out|
|---|---|
|5 9<br/>1 2 2<br/>1 3 3<br/>1 4 3<br/>1 5 0<br/>2 3 1<br/>2 5 2<br/>3 4 3<br/>3 5 1<br/>4 5 3|3<br/>2 5 2<br/>3 4 3<br/>3 5 1|

Nguồn: Đề thi chọn đội tuyển HSG 12 tỉnh Bình Định năm 2019
