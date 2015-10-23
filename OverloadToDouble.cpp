/*
Добавьте в класс Rational оператор приведения к double. Все операторы из предыдущих заданий отсутствуют и реализовывать их не нужно. Метод to_double можно использовать в этом задании. 

Важное замечание: добавлять оператор преобразования к double в класс Rational не самая удачная идея, например, потому, что при таком преобразовании может происходить потеря точности. Эта задача дана исключительно с целью ознакомления с правильным порядком перегрузки таких операторов.

Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно.
*/

struct Rational
{
    Rational(int numerator = 0, int denominator = 1);

    void add(Rational rational);
    void sub(Rational rational);
    void mul(Rational rational);
    void div(Rational rational);

    void neg();
    void inv();
    double to_double() const;
    
     operator double() const{        
         return to_double();
    }

private:
    int numerator_;
    unsigned denominator_;
};
