#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
}
// add more for bitwise

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

    int x = 13;
    int k = 2;
    if (x & (1 << k))
    {
        cout << "kth bit is set" << endl;
    }
    else
    {
        cout << "kth bit is not set" << endl;
    }
    // trick 3 part 2
    // to toggle kth bit (starting from 0)
    x = x ^ (1 << k);
    cout << x << endl;

    // trick part 3
    // to set the kth bit
    x = x | (1 << k);
    cout << x << endl;

    // trick 3 part 4
    // to unset kth bit
    x = x & ~(1 << k);
    cout << x << endl;

    // trick 4
    // multiply or divide a number by 2k

    // multiply :
    //  X / pow(2,K) - > X >> K
    // DIVIDE
    // X * pow(2,K) -> X << k

    // trick 6 swapping X and Y without a temporary variable
    int a = 3;
    int b = 2;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << a << " " << b << endl;

    // add more
    return 0;
    // bitwise
}