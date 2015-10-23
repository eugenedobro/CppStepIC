/*
Реализуйте функцию копирования элементов copy_n из массива источника типа U* в целевой массив типа T*, где T и U произвольные типы, для которых определено преобразование из U в T. На вход функция принимает два указателя и количество элементов, которые необходимо скопировать.

 Пример вызова функции copy_n:

int ints[] = {1, 2, 3, 4};
double doubles[4] = {};
copy_n(doubles, ints, 4); // теперь в массиве doubles содержатся элементы 1.0, 2.0, 3.0 и 4.0
Sample Input:
There are no tests for this task
Sample Output:
OK
*/

#include <cstddef>

// Параметры функции copy_n идут в следующем
// порядке:
//   1. целевой массив
//   2. массив источник
//   3. количество элементов, которые нужно
//      скопировать
//
// Вам нужно реализовать только функцию copy_n,
// чтобы ее можно было вызвать так, как показано
// в примере.

template <typename T, typename U>
void copy_n(T * dest, U * source, size_t size){
    for (size_t i=0; i != size; ++i){
        dest[i] = (T) source[i];
    }
}

int main(){

    int ints[] = {1, 2, 3, 4};
    double doubles[4] = {};
    copy_n(doubles, ints, 4);
    return 0;
}