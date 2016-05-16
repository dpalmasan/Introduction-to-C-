#include <iostream>

using namespace std;

int main(void) {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Printing array's elements" << endl;
    for (int i = 0; i < 10; i++) {
        cout << array[i] << endl;
    }
    return 0;
}
