#include <iostream>

using namespace std;

int main(void)
{
    char opt;

    cin >> opt;

    switch (opt)
    {
        case 'y':
        case 'Y':
            cout << "You chose y or Y" << endl;
            break;
        case 'n':
        case 'N':
            cout << "You chose n or N" << endl;
            break;
        default:
            cout << "You didn't choose a valid option" << endl;
    }

    return 0;
}
