//1C++ позволяет определять многомерные массивы

int m2d [2][3] = { {1 , 2 , 3} , {4 , 5 , 6} };

    for ( size_t i = 0; i != 2; ++ i ) {
        for ( size_t j = 0; j != 3; ++ j ) {
            cout << m2d [ i ][ j ] << ’ ’;
        }
        cout << endl ;
}

//Давайте рассмотрим создание массива 5 ? 4
int ** m = new int * [5];
for ( size_t i = 0; i != 5; ++ i )
    m [ i ] = new int [4];

//Выделение и освобождение двумерного массива размера a ? b.
int ** create_array2d ( size_t a , size_t b ) {
    int ** m = new int *[ a ];
    for ( size_t i = 0; i != a ; ++ i )
        m [ i ] = new int[ b ];
    return m ;
}

void free_array2d (int ** m , size_t a , size_t b ) {
    for ( size_t i = 0; i != a ; ++ i )
    delete [] m [ i ];
    delete [] m ;
}

//Рассмотрим эффективное создание массива 5 ? 4.
int ** m = new int * [5];
m [0] = new int [5 * 4];
for ( size_t i = 1; i != 5; ++ i )
    m [ i ] = m[ i - 1] + 4;

//Эффективное выделение и освобождение двумерного массива
//размера a ? b.
int ** create_array2d ( size_t a , size_t b ) {
    int ** m = new int *[ a ];
    m [0] = new int[ a * b ];
    for ( size_t i = 1; i != a ; ++ i )
        m [ i ] = m[ i - 1] + b ;
    return m ;
}

void free_array2d (int ** m , size_t a , size_t b ) {
    delete [] m [0];
    delete [] m ;
}
