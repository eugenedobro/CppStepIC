{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'f3, \'ea\'ee\'f2\'ee\'f0\'e0\'ff \'ef\'ee\'f1\'e8\'ec\'e2\'ee\'eb\'fc\'ed\'ee \'f7\'e8\'f2\'e0\'e5\'f2 \'e8\'e7 std::cin, \'ef\'ee\'ea\'e0 \'ed\'e5 \'e4\'ee\'f1\'f2\'e8\'e3\'ed\'e5\'f2 \'ea\'ee\'ed\'f6\'e0 \'ef\'ee\'f2\'ee\'ea\'e0 \'e2\'e2\'ee\'e4\'e0, \'e8 \'e7\'e0\'ec\'e5\'ed\'ff\'e5\'f2 \'ed\'e5\'f1\'ea\'ee\'eb\'fc\'ea\'ee \'ef\'ee\'e4\'f0\'ff\'e4 \'e8\'e4\'f3\'f9\'e8\'f5 \'ef\'f0\'ee\'e1\'e5\'eb\'ee\'e2 \'ee\'e4\'ed\'e8\'ec \'e8 \'e2\'fb\'e2\'ee\'e4\'e8\'f2 \'ef\'ee\'eb\'f3\'f7\'e5\'ed\'ed\'fb\'e9 \'f0\'e5\'e7\'f3\'eb\'fc\'f2\'e0\'f2 \'e2 std::cout. \'cd\'e8\'ea\'e0\'ea\'e8\'f5 \'e4\'f0\'f3\'e3\'e8\'f5 \'f1\'e8\'ec\'e2\'ee\'eb\'ee\'e2, \'ea\'f0\'ee\'ec\'e5 \'ef\'f0\'ee\'e1\'e5\'eb\'ee\'e2 \'f3\'e4\'e0\'eb\'ff\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'cf\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'e0\'ec \'ed\'e5 \'f0\'e0\'e7\'f0\'e5\'f8\'e0\'e5\'f2\'f1\'ff \'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'f2\'fc\'f1\'ff \'e4\'ee\'ef\'ee\'eb\'ed\'e8\'f2\'e5\'eb\'fc\'ed\'ee\'e9 \'ef\'e0\'ec\'ff\'f2\'fc\'fe, \'e0 \'e8\'ec\'e5\'ed\'ed\'ee: \'ec\'e0\'f1\'f1\'e8\'e2\'e0\'ec\'e8, \'f1\'f2\'e0\'ed\'e4\'e0\'f0\'f2\'ed\'fb\'ec\'e8 \'ea\'ee\'ed\'f2\'e5\'e9\'ed\'e5\'f0\'e0\'ec\'e8 \'e8 \'f1\'f2\'f0\'ee\'ea\'e0\'ec\'e8, \'e4\'e0\'e6\'e5 \'e5\'f1\'eb\'e8 \'e2\'fb \'f3\'e6\'e5 \'f1 \'ed\'e8\'ec\'e8 \'e7\'ed\'e0\'ea\'ee\'ec\'fb. \'c2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb.\par
\par
Sample Input:\par
There are    a     lot  of    spaces  here\par
Sample Output:\par
There are a lot of spaces here\par
*/\par
\par
#include <iostream>\par
using namespace std;\par
#include <string>\par
\par
int main()\par
\{\par
    bool is_ws = false;\par
\par
    char c = '\\0';\par
    while (cin.get(c)) \{\par
        if (c == ' ' && !is_ws) \{\par
            c = ' ';\par
            is_ws = true;\par
        \}\par
        else if (c == ' ' && is_ws) continue;\par
        else is_ws = false;\par
        //cout << ' ' << c;\par
        cout.put(c);                   \par
    \}\par
\par
\tab return 0;\par
\}\par
}
 