#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}

int main()
{

    // trick 1
    // to check if odd or even
    // if last bit = 1 -> odd, 0 -> even

    int n = 7;
    if (n & 1)
        cout << "Odd" << endl;
    else
        cout << "Even" << endl;
    // trick 2
    // to check if power of 2 or not, handle 0 seperately doesnt work for it
    int m = 64;

    if (isPowerOfTwo(m))
        cout << "Power of 2" << endl;
    else
        cout << "Not Power of 2" << endl;

        // trick 3
        // to check if ith bit is set or not

    return 0;
}