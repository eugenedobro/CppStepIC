/*
Добавьте в класс String реализацию конструктора копирования. Инвариант класса остается тем же (в size хранится размер строки без завершающего 0 символа, str указывает на C-style строку, т. е. с завершающим нулевым символом). 

Требования к реализации: вы можете заводить любые вспомогательные методы или функции, но не реализуйте заново методы из предыдущих заданий — они уже реализованы. При реализации не нужно вводить или выводить что-либо. Реализовывать main не нужно. Не используйте функции из cstdlib (malloc, calloc, realloc и free).
*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();


    /* Реализуйте конструктор копирования */
    //String(const String &other) 
    //     : size(other.size), str(strcpy(new char[other.size + 1], other.str)) //{}
    //{
        //size = other.size;
        //str = new char[ other.size + 1 ];
        //strcpy(str, other.str);
        
    //}
    
    String(const String &other): size(other.size)
    {
        str = new char[size+1]; 
 
        for(size_t i = 0; i < size+1; ++i)
        {
            str[i] = other.str[i];
        }
                
    }
 

	void append(const String &other);

	size_t size;
	char *str;
};