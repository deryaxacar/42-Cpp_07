#include "iter.hpp"

int main()
{
    int iArr[5] = {1, 2, 3, 4, 5};
    ::iter(iArr, 5, squareOfN);
    ::iter(iArr, 5, printArr);

    string sArr[5] = {"foo", "bar", "baz", "foobar", "foobazz"};
    ::iter(sArr, 5, printArr);
}
