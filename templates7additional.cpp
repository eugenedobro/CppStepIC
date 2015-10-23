*
* � �������� ���������� ������� ����� ��������� �� ������ ������ �� ����������� ����, �� � ������, ��������, �� �������. ��������� ������ �� ������ �� ���� �������� ���� int � ��������� ������� ����� ��������� �������:
* void foo(int (&a)[3]) {  ...  }
�������� ��������, ��� ������ ������ ��������� a � ������ ����������� ����������� - �� ����� �������� ������ �� ������, � �� ������ ������.
�������, ��� ����� ����������� �� ����� ������� ������, ���� ������� ��� �������� � ������� �� ����������.
������, ����� ����������� ��������� ����������� ������������ ������ �������.
��������, ��������� ��� �� ����� ���������������:
int a[1] = {};
foo(a);
���������� g++ �� ��� ������ ��������� ������:
        error: invalid initialization of reference of type �int (&)[3]� from expression of type �int [1]�
�. �. ���������� �� ����� �������� �� ������� �� ������ �������� ������ �� ������ �� ���� ���������, ��� � ���������.
//////////////////////////
*
* ���������� ������� array_size, ������� ���������� ������ �������,
* ����������� � �������� ���������.
* ������� ������ �������� ������ ��� ��������!
* �. �. ���� ������� �������� ���������, ������ ��������� ������ ����������.
*
* �������:
int ints[] = {1, 2, 3, 4};
int *iptr = ints;
double doubles[] = {3.14};
array_size(ints); // ������ 4
array_size(doubles); // ������ 1
array_size(iptr); // ��� ������ ��������� ������ ����������
Hint: � ����� �� ������ ������ �� ��� ���������� ���� � ��������� �������� ������ ��������� ������� � �������
(�������� ������� �� ������),
���������� ��� � ������ �������� � ��������.
* */

#include <cstddef> // size_t

// ���������� ��������� ������� array_size,
// ������� ���������� �������� ���� size_t.

template <typename A, size_t size>
size_t array_size(A (&array)[size]) {
    return size;
}

#include <iostream>
int main(){
    int ints[] = {1, 2, 3, 4};
    int *iptr = ints;
    double doubles[] = {3.14};
    std::cout << array_size(ints); // ������ 4
    std::cout << array_size(doubles); // ������ 1
    //std::cout << array_size(iptr); // ��� ������ ��������� ������ ����������

    return 0;
}