#include <iostream>

#define my_array_size 20

using std::cout;
using std::endl;

int dublin(int number);
void array_sizer(int *arr);

int main(int argc, char **argv) {

    int number = 42;
    int *number_ptr = &number;
    int **number_ptr_ptr = &number_ptr;

    // cout << "number: " << number << endl;
    // cout << "&number: " << &number << endl << endl;

    // cout << "number_ptr: " << number_ptr << endl;
    // cout << "&number_ptr: " << &number_ptr << endl;
    // cout << "*number_ptr: " << *number_ptr << endl << endl;

    // cout << "number_ptr_ptr: " << number_ptr_ptr << endl;
    // cout << "&number_ptr_ptr: " << &number_ptr_ptr << endl;
    // cout << "*number_ptr_ptr: " << *number_ptr_ptr << endl;
    // cout << "**number_ptr_ptr: " << **number_ptr_ptr << endl;

    // if(number > 0) {
    //     cout << "number > 0 (" << number << ")" << endl;
    // } else if(number < 0) {
    //     cout << "number < 0 (" << number << ")" << endl;
    // } else {
    //     cout << "number must be " << number << "!" << endl;
    // }

    // switch (number) {
    //     case 1:
    //     case 5:
    //     case 7:
    //     case 12:
    //     case 42:
    //         cout << "number == 42 (" << number << ")" << endl;
    //         break;
    //     case 25:
    //         cout << "number == 25? (" << number << ")" << endl;
    //         break;
    //     default:
    //         cout << "default case number == (" << number << ")" << endl;
    //         break;
    // }

    // int i = 0;
    // for(i = 0; i < 10; ++i) {
    //     cout << "i: " << i << endl;
    // }
    // cout << "i (after loop): " << i << endl;

    // cout << "++number: " << ++number << endl;
    // cout << "number++: " << number++ << endl;

    // cout << "dublin(5): " << dublin(5) << endl;

    //arrays
    //const int my_array_size = 20;
    // int my_array[my_array_size]; // unintialized data can result in getting garbage values or sometimes a crash...
    //int my_array_len = sizeof(my_array)/sizeof(my_array[0]);

    // for(int i = 0; i < my_array_size; ++i) {
    //     cout << "my_array[" << i << "]: " << my_array[i] << endl;
    // }
    // cout << "sizeof(int): " << sizeof(int) << endl;
    // cout << "sizeof(number): " << sizeof(number) << endl;
    // cout << "sizeof(int*): " << sizeof(int*) << endl;
    // cout << "sizeof(my_array): " << sizeof(my_array) << endl;

    // array_sizer(my_array);

    // will it crash!?
    // int pos = 999999;
    // cout << "my_array[" << pos << "]: " << my_array[pos] << endl;
    

    cout << "end of program?" << endl;

    return 0;
}

int dublin(int number) {
    return number * 2;
}

void array_sizer(int *arr) {
    cout << "sizeof(arr): " << sizeof(arr) << endl;
}
