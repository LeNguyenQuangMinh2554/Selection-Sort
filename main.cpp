#include <iostream>
using namespace std;

// Sắp xếp chọn là một thuật toán cơ bản và dễ hiểu, thích hợp cho việc học tập và các mảng nhỏ.
// Tuy nhiên, với hiệu suất kém cho các mảng lớn và tính không ổn định,
// nó không phải là lựa chọn tốt cho các ứng dụng thực tế yêu cầu sắp xếp hiệu quả và ổn định.
// Trong những trường hợp đó, các thuật toán sắp xếp phức tạp hơn như quicksort, mergesort,
// hoặc heapsort nên được xem xét.
int main() {
    int n;
    cout << "Nhap vao so luong phan tu mang: "; // Nhập số lượng phần tử của mảng
    cin >> n;
    int arr[n]; // Khởi tạo mảng với n phần tử

    cout << "Nhap vao lan luot tung phan tu vao mang: ";
    // Vòng lặp nhập các phần tử vào mảng
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Bắt đầu thuật toán sắp xếp chọn
    for (int i = 0; i < n - 1; i++) {
        int i_min = i; // Giả sử phần tử hiện tại là nhỏ nhất
        int v_min = arr[i]; // Giá trị nhỏ nhất hiện tại
        // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < v_min) { // Nếu tìm thấy phần tử nhỏ hơn
                v_min = arr[j];
                i_min = j;
            }
        }
        // Hoán đổi phần tử nhỏ nhất với phần tử hiện tại
        int temp = arr[i];
        arr[i] = arr[i_min];
        arr[i_min] = temp;
    }

    // In mảng sau khi đã sắp xếp
    cout << "Mang sau khi sap xep la: [";
    for (int i = 0; i < n; ++i) {
        cout << " " << arr[i] << " ";
    }
    cout << "]";
    return 0;
}
