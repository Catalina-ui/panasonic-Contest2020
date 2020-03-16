#include <iostream>
#include <math.h>
using namespace std;

typedef long double ld;

int main(){
    ld a, b, c, A, B, C;
    cin >> a >> b >> c;
    A = sqrtl(a), B = sqrtl(b), C = sqrtl(c);
    if(A + B  + 1e-14 < C)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
