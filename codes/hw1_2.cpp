#include <iostream>

using namespace std;

int main(void) {
    enum Month { Jan = 1, Feb, Mar, Apr, May, Jun, Jul, Ago, Sep, Oct, Nov, Dic };

    // Testing the enum
    Month favoriteMonth = Sep;
    cout << favoriteMonth << endl;
    return 0;
}
