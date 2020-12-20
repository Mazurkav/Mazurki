#include <iostream>
using namespace std;

int main() {
    float  val = 987321;
    long ipart = (long)val;
    unsigned long fpart = 0;
    long lvalue = 0;
    val = val - ipart;
    while (val)
    {
        val *= 10;
        lvalue = (long)val;
        fpart *= 10;
        fpart = fpart + lvalue;
        val = val - lvalue;
    }
    while (fpart)
    {
        cout << fpart % 10;
        fpart /= 10;
    }
    cout << ".";
    while (ipart)
    {
        cout << ipart % 10;
        ipart /= 10;
    }
    return 0;
}