#include <iostream>
#include <stdlib.h>  
using namespace std;

//Pointer (con trỏ) là một khái niệm quan trọng trong lập trình, 
//đặc biệt trong các ngôn ngữ như C, C++, Rust, hoặc Assembly. 
//Con trỏ là một biến dùng để lưu trữ địa chỉ của một vùng nhớ, thường là địa chỉ của một biến khác hoặc một mảng.


// Thay vì lưu trữ một giá trị cụ thể (như số nguyên hay chuỗi), con trỏ lưu trữ địa chỉ của vùng nhớ mà giá trị đó được lưu trữ.
// Con trỏ cho phép chương trình truy cập hoặc thay đổi dữ liệu thông qua địa chỉ mà nó trỏ đến.
// int main(){
//     // string food = "Pizza";  // A food variable of type string
//     // string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

//     // // Output the value of food (Pizza)
//     // cout << food << "\n";

//     // // Output the memory address of food (0x6dfed4)
//     // cout << &food << "\n";

//     // // Output the memory address of food with the pointer (0x6dfed4)
//     // cout << ptr << "\n";

//     // // Gán địa chỉ con trỏ
//     int *p;
//     int a = 10;
//     p = &a;
//     // truy cập giá trị thông qua con trỏ
//     int value = *p;  // Truy cập giá trị của biến a thông qua con trỏ p
//     *p = 20;         // Thay đổi giá trị của a thành 20
//     return 0;
// }

// cách truy địa chỉ trong 1 mảng
// int main() {
//     int arr[] = {10, 20, 30};
//     int length = sizeof(arr) / sizeof(arr[0]);
//     int *ptr = arr; // Con trỏ trỏ tới phần tử đầu tiên của mảng
    
//     for (int i = 0; i < length; i++) {
//         printf("Giá trị: %d, Địa chỉ: %p\n", *(ptr + i), (ptr + i));
//     }
//     return 0;
// }

// cấp phát bộ nhớ cho 1 mảng 
// int main(){
//     int *ptr = (int *)malloc(5*sizeof(int)); // Cấp phát bộ nhớ cho 5 số nguyên

//     for (int i=0; i<5; i++){
//         ptr[i] = i + 1; 
//     }
//     for (int i = 0; i < 5; i++) {
//         printf("%d ", ptr[i]);
//     }
    
//     cout<< ptr <<endl;
//     free(ptr); // Giải phóng bộ nhớ
//     return 0;
// }


void update_a_b(int *a, int *b){
    int sum = *a + *b;
    int diff = abs(*a - *b);

    *a = sum;
    *b = diff;
}

int main(){
    int a,b;
    cin>>a>>b;
    // scanf("%d %d", &a, &b);
    update_a_b(&a, &b);
    printf("%d\n%d\n", a, b);   // In kết quả
    return 0;
}