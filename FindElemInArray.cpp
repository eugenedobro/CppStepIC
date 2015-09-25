//Функция для поиска элемента в массиве:
bool contains (int * m , int size , int value ) {
    for ( int i = 0; i != size ; ++ i )
        if ( m [ i ] == value )
            return true ;
    return false ;
}

bool contains (int * p , int * q , int value ) {
    for (; p != q ; ++ p )
        if (* p == value )
             return true ;
    return false ;
}

//Функция для поиска максимума в массиве: Возрат значения из функции
int max_element (int * p , int * q ) {
    int max = * p ;
    for (; p != q ; ++ p )
        if (* p > max )
            max = * p ;
    return max ;
}

//Функция для поиска максимума в массиве: Возрат указателя из функции
int * max_element ( int * p , int * q ) {
    int * pmax = p ;
    for (; p != q ; ++ p )
        if (* p > * pmax )
            pmax = p ;
    return pmax ;
}

//Функция для поиска максимума в массиве: Возрат значения через указатель
bool max_element ( int * p , int * q , int * res ) {
    if ( p == q )
        return false ;
    *res = *p ;
    for (; p != q ; ++ p )
        if (* p > * res )
            *res = *p ;
    return true ;
}

//Функция для поиска максимума в массиве: Возрат значения через указатель на //указатель
bool max_element ( int * p , int * q , int ** res ) {
    if ( p == q )
       return false ;
    *res = p;
    for (; p != q ; ++ p )
        if (* p > ** res )
            * res = p;
    return true ;
}