#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cout << "number of coins" << endl;
    cin >> n;

    int k=(sqrt(1+8*n)-1)/2;

    cout << k;


    return 0;
}