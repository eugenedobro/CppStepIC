{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sl276\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'f0\'e5\'ea\'f3\'f0\'f1\'e8\'e2\'ed\'f3\'fe \'f4\'f3\'ed\'ea\'f6\'e8\'fe \'e2\'fb\'f7\'e8\'f1\'eb\'e5\'ed\'e8\'ff \'ed\'e0\'e8\'e1\'ee\'eb\'fc\'f8\'e5\'e3\'ee \'ee\'e1\'f9\'e5\'e3\'ee \'e4\'e5\'eb\'e8\'f2\'e5\'eb\'ff \'e4\'e2\'f3\'f5 \'ef\'ee\'eb\'ee\'e6\'e8\'f2\'e5\'eb\'fc\'ed\'fb\'f5 \'f6\'e5\'eb\'fb\'f5 \'f7\'e8\'f1\'e5\'eb (Greatest Common Divisor, GCD). \'c4\'eb\'ff \'fd\'f2\'ee\'e3\'ee \'e2\'ee\'f1\'ef\'ee\'eb\'fc\'e7\'f3\'e9\'f2\'e5\'f1\'fc \'f1\'eb\'e5\'e4\'f3\'fe\'f9\'e8\'ec\'e8 \'f1\'e2\'ee\'e9\'f1\'f2\'e2\'e0\'ec\'e8:\par
\par
GCD(a,b)=GCD(b,amodb) \par
GCD(0,a)=a \par
GCD(a,b)=GCD(b,a) \par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'e2 \'e4\'e0\'ed\'ed\'ee\'ec \'e7\'e0\'e4\'e0\'ed\'e8\'e8 \'e7\'e0\'ef\'f0\'e5\'f9\'e5\'ed\'ee \'ef\'ee\'eb\'fc\'e7\'ee\'e2\'e0\'f2\'fc\'f1\'ff \'f6\'e8\'ea\'eb\'e0\'ec\'e8. \'c2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'e7\'e0\'e2\'ee\'e4\'e8\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8, \'e5\'f1\'eb\'e8 \'ee\'ed\'e8 \'e2\'e0\'ec \'ed\'f3\'e6\'ed\'fb. \'d4\'f3\'ed\'ea\'f6\'e8\'fe main \'ee\'ef\'f0\'e5\'e4\'e5\'eb\'ff\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
\pard\sl240\slmult1 unsigned gcd(unsigned a, unsigned b)\par
\{\par
    if (b == 0) \{\par
        return a;\par
    \}\par
    return gcd(b, a % b);\par
\}\par
}
 