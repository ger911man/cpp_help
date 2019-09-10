#include "iostream"
#include "../h_colored_console_output/cPrint.h"
#include "classFoo.cpp"
using namespace std;
using namespace colorPrint;

int main(){
    cout << FGCYAN << "-=[Class test]=-" << endl;

    cout << FGGREEN;
    classFoo cf = classFoo("foo1");
    cf.printId();
    return 0;
}
