
#include <iostream>
using namespace std;

void test()
{

    static int var = 5;
    ++var;

    cout << var << endl;
}

int main()
{

    test();
    test();

    return 0;
}
