#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    int *g = new int[50];

    cout << "address "<< *g << endl;
    cout <<" value " <<g << endl;
    return 0;
}
