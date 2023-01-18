#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char **argv) {

    int number = 42;
    int *number_ptr = &number;
    int **number_ptr_ptr = &number_ptr;

    cout << "number: " << number << endl;
    cout << "&number: " << &number << endl << endl;

    cout << "number_ptr: " << number_ptr << endl;
    cout << "&number_ptr: " << &number_ptr << endl;
    cout << "*number_ptr: " << *number_ptr << endl << endl;

    cout << "number_ptr_ptr: " << number_ptr_ptr << endl;
    cout << "&number_ptr_ptr: " << &number_ptr_ptr << endl;
    cout << "*number_ptr_ptr: " << *number_ptr_ptr << endl;
    cout << "**number_ptr_ptr: " << **number_ptr_ptr << endl;

    return 0;
}