{\rtf1\ansi\ansicpg1251\deff0\deflang1049{\fonttbl{\f0\fnil\fcharset0 Calibri;}{\f1\fnil\fcharset204 Calibri;}}
{\*\generator Msftedit 5.41.21.2510;}\viewkind4\uc1\pard\sa200\sl276\slmult1\lang9\f0\fs22 /*\par
\lang1049\f1\'ce\'f7\'e5\'ed\'fc \'f7\'e0\'f1\'f2\'ee \'e4\'eb\'ff \'f0\'e0\'e1\'ee\'f2\'fb \'f1\'ee \'f1\'f2\'f0\'ee\'ea\'e0\'ec\'e8 \'ed\'e0\'ec \'ed\'f3\'e6\'ed\'ee \'f1\'ed\'e0\'f7\'e0\'eb\'e0 \'e2\'fb\'f7\'e8\'f1\'eb\'e8\'f2\'fc \'e4\'eb\'e8\'ed\'f3 \'f1\'f2\'f0\'ee\'ea\'e8. \'c4\'eb\'ff C-style \'f1\'f2\'f0\'ee\'ea \'e4\'eb\'e8\'ed\'e0 \'ed\'e8\'e3\'e4\'e5 \'ff\'e2\'ed\'ee \'ed\'e5 \'f5\'f0\'e0\'ed\'e8\'f2\'f1\'ff, \'ed\'ee \'e5\'b8 \'ec\'ee\'e6\'ed\'ee \'e2\'fb\'f7\'e8\'f1\'eb\'e8\'f2\'fc. \'cd\'e0\'ef\'e8\'f8\'e8\'f2\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'fe, \'ea\'ee\'f2\'ee\'f0\'e0\'ff \'e2\'fb\'f7\'e8\'f1\'eb\'ff\'e5\'f2 \'e4\'eb\'e8\'ed\'f3 C-style \'f1\'f2\'f0\'ee\'ea\'e8. \'d3\'f7\'f2\'e8\'f2\'e5, \'f7\'f2\'ee \'e7\'e0\'e2\'e5\'f0\'f8\'e0\'fe\'f9\'e8\'e9 \'ed\'f3\'eb\'e5\'e2\'ee\'e9 \'f1\'e8\'ec\'e2\'ee\'eb \'f1\'f7\'e8\'f2\'e0\'f2\'fc \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \par
\'d2\'f0\'e5\'e1\'ee\'e2\'e0\'ed\'e8\'ff \'ea \'f0\'e5\'e0\'eb\'e8\'e7\'e0\'f6\'e8\'e8: \'ef\'f0\'e8 \'e2\'fb\'ef\'ee\'eb\'ed\'e5\'ed\'e8\'e8 \'fd\'f2\'ee\'e3\'ee \'e7\'e0\'e4\'e0\'ed\'e8\'ff \'e2\'fb \'ec\'ee\'e6\'e5\'f2\'e5 \'f1\'ee\'e7\'e4\'e0\'e2\'e0\'f2\'fc \'eb\'fe\'e1\'fb\'e5 \'e2\'f1\'ef\'ee\'ec\'ee\'e3\'e0\'f2\'e5\'eb\'fc\'ed\'fb\'e5 \'f4\'f3\'ed\'ea\'f6\'e8\'e8. \'c2\'e2\'ee\'e4\'e8\'f2\'fc \'e8\'eb\'e8 \'e2\'fb\'e2\'ee\'e4\'e8\'f2\'fc \'f7\'f2\'ee-\'eb\'e8\'e1\'ee \'ed\'e5 \'ed\'f3\'e6\'ed\'ee. \'d0\'e5\'e0\'eb\'e8\'e7\'ee\'e2\'fb\'e2\'e0\'f2\'fc \'f4\'f3\'ed\'ea\'f6\'e8\'fe main \'ed\'e5 \'ed\'f3\'e6\'ed\'ee.\par
*/\par
\par
\pard\sl240\slmult1 unsigned strlen(const char *str)\par
\{\par
    return (*str) ? strlen(++str) + 1 : 0;\par
\}\par
}
 