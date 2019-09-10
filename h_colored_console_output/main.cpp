#include "iostream"
#include "cPrint.h"
using namespace std;
using namespace colorPrint;


int main(){
    cout << "Color text example" << endl;
    cPrintln(FG_GREEN , BG_CYAN, TS_BOLD, "   -=[TS_BOLD GREEN on CYAN]=-   ");
    cout << "Color text example" << endl;   cout << FGBLUE << BGYELLOW << TSUNDERLINE <<" -=[underlined blue on yellow]=- "<< NOCOLOR << endl;
    cout << "Done" << endl;
    return 0;
}

