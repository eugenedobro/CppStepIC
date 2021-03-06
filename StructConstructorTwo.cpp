/*
������������� � ��������� ����� ���� ���������. ��� ������ ����� ��������� �������� ����������� ����������� (��������, ����� ������� ������ ��������). ����������� ����������� ��������� ����� � ������, � ������� ������ � �������� ����������� ���������� ����������� �������. ������� ���������� �� ���������� ������������ �� �� ����� (� ���� size ������ ��� ����� ������������ 0 �������, � ���� str C-style ������, �.�. � ����������� 0 ��������). ����� ������������ � ���� ������ ��� ����� ����� ����������� � ����������, ������� ��������� ���������� ������. 

���������� � �������: � ���� ������� �� ����� ������� ��� �������� ���-����, �� ����� ������������� ������� main. ��� ������ � ������� �� ����������� ������� �� cstdlib (malloc, calloc, realloc � free).
*/

#include <cstddef> // size_t
#include <cstring> // strlen, strcpy

struct String {

    /* ���������� ���� ����������� */
    String(size_t n, char c) {
        this->size = n;
        this->str = new char[n+1];
        for (size_t i = 0; i != n; ++i) {
            this->str[i] = c;
        }
        this->str[n+1] = '\0';
        
    }

    /* � ���������� */
    ~String() {
        delete [] str;
    }


	size_t size;
	char *str;
};