{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl240\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'f3 \'e4\'eb\'ff \'f0\'e5\'f8\'e5\'ed\'e8\'ff \'ea\'e2\'e0\'e4\'f0\'e0\'f2\'ed\'fb\'f5 \'f3\'f0\'e0\'e2\'ed\'e5\'ed\'e8\'e9 \'e2\'e8\'e4\'e0 ax2+bx+c=0 (\'ee\'f2\'ed\'ee\'f1\'e8\'f2\'e5\'eb\'fc\'ed\'ee x). \'cd\'e0 \'e2\'f5\'ee\'e4 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e0 \'ef\'ee\'eb\'f3\'f7\'e0\'e5\'f2 \'f2\'f0\'e8 \'f6\'e5\'eb\'fb\'f5 \'f7\'e8\'f1\'eb\'e0: a , b \'e8 c, \'f1\'ee\'ee\'f2\'e2\'e5\'f2\'f1\'f2\'e2\'e5\'ed\'ed\'ee. \'cf\'f0\'e8 \'fd\'f2\'ee\'ec \'e3\'e0\'f0\'e0\'ed\'f2\'e8\'f0\'f3\'e5\'f2\'f1\'ff, \'f7\'f2\'ee a\u8800?0. \'cd\'e0 \'e2\'fb\'e2\'ee\'e4 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e0 \'e4\'ee\'eb\'e6\'ed\'e0 \'e2\'fb\'e2\'e5\'f1\'f2\'e8 \'e4\'e2\'e0 \'e2\'e5\'f9\'e5\'f1\'f2\'e2\'e5\'ed\'ed\'fb\'f5 \'ea\'ee\'f0\'ed\'ff \'f3\'f0\'e0\'e2\'ed\'e5\'ed\'e8\'ff, \'f0\'e0\'e7\'e4\'e5\'eb\'b8\'ed\'ed\'fb\'e5 \'ef\'f0\'ee\'e1\'e5\'eb\'ee\'ec. \'c5\'f1\'eb\'e8 \'e2\'e5\'f9\'e5\'f1\'f2\'e2\'e5\'ed\'ed\'fb\'f5 \'ea\'ee\'f0\'ed\'e5\'e9 \'ed\'e5\'f2, \'f2\'ee \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e0 \'e4\'ee\'eb\'e6\'ed\'e0 \'e2\'fb\'e2\'e5\'f1\'f2\'e8 \'f1\'f2\'f0\'ee\'ea\'f3 "No real roots". \'c5\'f1\'eb\'e8 \'f3 \'f3\'f0\'e0\'e2\'ed\'e5\'ed\'e8\'ff \'e8\'ec\'e5\'e5\'f2\'f1\'ff \'f2\'ee\'eb\'fc\'ea\'ee \'ee\'e4\'e8\'ed \'ea\'ee\'f0\'e5\'ed\'fc (\'ea\'f0\'e0\'f2\'ed\'fb\'e9 \'ea\'ee\'f0\'e5\'ed\'fc), \'f2\'ee \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e0 \'e4\'ee\'eb\'e6\'ed\'e0 \'e2\'fb\'e2\'e5\'f1\'f2\'e8 \'e5\'e3\'ee \'e4\'e2\'e0\'e6\'e4\'fb. \'cf\'ee\'f0\'ff\'e4\'ee\'ea \'e2\'fb\'e2\'ee\'e4\'e0 \'ea\'ee\'f0\'ed\'e5\'e9 \'ed\'e5 \'e2\'e0\'e6\'e5\'ed. \'cd\'e8\'f7\'e5\'e3\'ee, \'ea\'f0\'ee\'ec\'e5 \'fd\'f2\'ee\'e3\'ee, \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'c4\'eb\'ff \'e2\'fb\'f7\'e8\'f1\'eb\'e5\'ed\'e8\'e9 \'f1 \'ef\'eb\'e0\'e2\'e0\'fe\'f9\'e5\'e9 \'f2\'ee\'f7\'ea\'ee\'e9 \'e8\'f1\'ef\'ee\'eb\'fc\'e7\'f3\'e9\'f2\'e5 \'f2\'e8\'ef double. \'cf\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'e0\'ec \'ec\'ee\'e6\'e5\'f2 \'ee\'ea\'e0\'e7\'e0\'f2\'fc\'f1\'ff \'ef\'ee\'eb\'e5\'e7\'ed\'ee\'e9 \'f4\'f3\'ed\'ea\'f6\'e8\'ff sqrt \'e8\'e7 \'e7\'e0\'e3\'ee\'eb\'ee\'e2\'ee\'f7\'ed\'ee\'e3\'ee \'f4\'e0\'e9\'eb\'e0 cmath.\par
\par
\'c7\'e0\'ec\'e5\'f7\'e0\'ed\'e8\'e5: \'ef\'ee\'f1\'eb\'e5 \'f2\'ee\'e3\'ee, \'ea\'e0\'ea \'e2\'fb \'f1\'e4\'e0\'e4\'e8\'f2\'e5 \'fd\'f2\'ee \'e7\'e0\'e4\'e0\'ed\'e8\'e5, \'ef\'ee\'ef\'f0\'ee\'e1\'f3\'e9\'f2\'e5 \'ef\'ee\'e4\'f3\'ec\'e0\'f2\'fc, \'ea\'e0\'ea \'e8\'e7\'ec\'e5\'ed\'e8\'eb\'e0\'f1\'fc \'e1\'fb \'e2\'e0\'f8\'e0 \'ef\'f0\'ee\'e3\'f0\'e0\'ec\'ec\'e0, \'e5\'f1\'eb\'e8 \'e1\'fb \'ec\'fb \'ed\'e5 \'e3\'e0\'f0\'e0\'ed\'f2\'e8\'f0\'ee\'e2\'e0\'eb\'e8, \'f7\'f2\'ee a\u8800?0. \par
*/\par
\par
#include <iostream>\par
using namespace std;\par
\par
int main()\par
\{\par
    int a, b, c;\par
    double D, x1, x2;\par
\par
    cin >> a >> b >> c;\par
    \par
    D = (b * b - 4 * a * c);\par
    \par
    if (D >= 0) \par
    \{\par
        x1 = (-b + sqrt(D)) / (2*a);\par
        x2 = (-b - sqrt(D)) / (2*a);\par
        cout << x1 << endl;\par
        cout << x2 << endl;\par
    \}\par
    \par
    else \{\par
        cout << "No real roots"  << endl;\par
    \}\par
 \par
    return 0;\par
\}\par
}
 