#include <iostream>

using namespace std;

int main(void)
{
    // Because we have not seen functions yet...
    int base = 2, exp = 8, result = 1;

    for (int i = 0; i < 8; i++)
    {
        result *= base;
    }

    // Outputs the result, in this case 256
    cout << result << endl;
    return 0;
}
