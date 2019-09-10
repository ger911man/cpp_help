#include "iostream"
using namespace std;



int main(){
    cout << "-=[Data types]=-" << endl;

    bool boolv = true;
    cout << "bool:           " << sizeof(boolv) * 8 << " bit" << endl;

    char charv = 0;
    cout << "char:           " << sizeof(charv) * 8 << " bit" << endl;

    char16_t char16v = 0;
    cout << "char16_t:       " << sizeof(char16v) * 8 << " bit" << endl;

    char32_t char32v = 0;
    cout << "char32_t:       " << sizeof(char32v) * 8 << " bit" << endl;

    short shortv = 0;
    cout << "short:          " << sizeof(shortv) * 8 << " bit" << endl;

    unsigned short ushortv = 0;
    cout << "unsigned short: " << sizeof(ushortv) * 8 << " bit" << endl;

    int intv = 0;
    cout << "int:            " << sizeof(intv) * 8 << " bit" << endl;

    unsigned int uintv = 0;
    cout << "unsigned int:   " << sizeof(uintv) * 8 << " bit" << endl;

    long longv = 0;
    cout << "long:           " << sizeof(longv) * 8 << " bit" << endl;

    unsigned long ulongv = 0;
    cout << "unsigned long:  " << sizeof(ulongv) * 8 << " bit" << endl;

    float floatv = 0;
    cout << "float:          " << sizeof(floatv)*8 << " bit" << endl;

    double doublev = 0;
    cout << "double:         " << sizeof(doublev)*8 << " bit" << endl;

    //**********************************
    cout << "**********************************" << endl;

    charv = 10;
    charv *=-1;
    cout << "char = 10*(-1): " << char(charv) << endl;
    cout << "char = (int)10*(-1): " << int(charv) << endl;

    uintv = 10;
    uintv *=-1;
    cout << "uintv = 10*(-1): " << unsigned (int(uintv)) << endl;
    cout << "uintv = (int)10*(-1): " << int(uintv) << endl;

    return 0;
}
