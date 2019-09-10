#ifndef CPP_HELP_CPRINT_H
#define CPP_HELP_CPRINT_H

#include "iostream"
#include "string"

using namespace std;
///
/// a bunch of funcs which allows you to print colorful output to linux console
///
/// how to use (2 examples):
///   1. cPrintln(FG_GREEN , BG_CYAN, TS_BOLD, "-=[TS_BOLD GREEN on CYAN]=-");
///   2. cout << FGBLUE << BGYELLOW << TSUNDERLINE <<"-=[underlined blue on yellow]=-"<< NOCOLOR << endl;
///
//
//    example: RED "\033[0;31m"
//
//     foreground  background
//black        30         40
//red          31         41
//green        32         42
//yellow       33         43
//blue         34         44
//magenta      35         45
//cyan         36         46
//white        37         47
//
//
//reset             0  (everything back to normal)
//bold/bright       1  (often a brighter shade of the same colour)
//underline         4
//inverse           7  (swap foreground and background colours)
//bold/bright off  21
//underline off    24
//inverse off      27

/* FOREGROUND */
#define NOCOLOR "\033[0m"
#define FGBLACK  "\x1B[30m"
#define FGRED  "\x1B[31m"
#define FGGREEN  "\x1B[32m"
#define FGYELLOW  "\x1B[33m"
#define FGBLUE  "\x1B[34m"
#define FGMAGENTA  "\x1B[35m"
#define FGCYAN  "\x1B[36m"
#define FGWHITE "\x1B[37m"

/* BACKGROUND */
#define BGBLACK "\x1B[40m"
#define BGBLACK "\x1B[41m"
#define BGGREEN "\x1B[42m"
#define BGYELLOW "\x1B[43m"
#define BGBLUE "\x1B[44m"
#define BGMAGENTA "\x1B[45m"
#define BGCYAN "\x1B[46m"
#define BGWHITE "\x1B[47m"

/* TEXT STYLE */
#define TSBOLD "\x1B[1m"
#define TSUNDERLINE "\x1B[4m"
#define TSINVERSE = "\x1B[7m"


namespace colorPrint {

    enum ColorCode {
        FG = 38,
        FG_BLACK = 30,
        FG_RED = 31,
        FG_GREEN = 32,
        FG_YELLOW = 33,
        FG_BLUE = 34,
        FG_MAGENTA = 35,
        FG_CYAN = 36,
        FG_WHITE = 37,
        FG_DEFAULT = 39,
        BG_BLACK = 40,
        BG_RED = 41,
        BG_GREEN = 42,
        BG_YELLOW = 33,
        BG_BLUE = 44,
        BG_MAGENTA = 45,
        BG_CYAN = 46,
        BG_WHITE = 47,
        BG_DEFAULT = 49,
        TS_RESET = 0,
        TS_BOLD = 1,
        TS_UNDERLINE = 4,
        TS_INVERSE = 7
    } color;


    void cPrint(ColorCode foreground, ColorCode background, ColorCode textStyle, string s) {
        cout << "\033[" << foreground << ";" << background << ";" << textStyle << "m" << s << NOCOLOR;
    }

    void cPrint(ColorCode foreground, ColorCode background, string s) {
        cout << "\033[" << foreground << ";" << background << "m" << s << NOCOLOR;
    }

    void cPrint(ColorCode foreground, string s) {
        cout << "\033[" << foreground << "m" << s << NOCOLOR;
    }

    void cPrintln(ColorCode foreground, ColorCode background, ColorCode textStyle, string s) {
        cPrint(foreground, background, textStyle, s);
        cout << endl;
    }

    void cPrintln(ColorCode foreground, ColorCode background, string s) {
        cPrint(foreground, background, s);
        cout << endl;
    }

    void cPrintln(ColorCode foreground, string s) {
        cPrint(foreground, s);
        cout << endl;
    }
}

#endif //CPP_HELP_CPRINT_H
