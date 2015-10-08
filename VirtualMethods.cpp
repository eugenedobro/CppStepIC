/*
В этом задании вам предлагается разработать иерархию классов Expression для представления арифметических выражений. Конкретнее, вам нужно определить три класса: Expression — базовый класс иерархии, Number — для представления чисел и BinaryOperation — класс описывающий бинарную операцию (+, ­-, * или /).

Класс Number должен хранить значение типа double.

Класс BinaryOperation должен хранить указатель на левый и правый операнды, которые сами являются арифметическими выражениями, а также тип операции (+, ­-, * или /), которую нужно над ними произвести.

Во всех классах должен быть метод evaluate, который возвращает значение типа double — значение соответствующего арифметического выражения, например, значение экземпляра типа Number — это число, которое он хранит, а если у вас есть объект BinaryOperation с операцией +, то нужно вычислить значения левого и правого операнда и вернуть их сумму.

В данном задании вам нужно расставить ключевое слово virtual там, где это необходимо, определить метод evalute там, где его не хватает, а также реализовать деструкторы, там где они нужны.

При выполнении этого задания учтите, что при уничтожении объекта BinaryOperation он отвечает за уничтожение левого и правого операндов (гарантируется, что они выделены в динамической памяти).

Требования к реализации: при выполнении этого задания не нужно вводить или выводить что-либо. Вы можете заводить любые вспомогательные функции, методы или классы, но не нужно реализовывать функцию main.
*/

struct Expression
{
    
    virtual double evaluate() const = 0;
    virtual ~Expression() {};
};

struct Number : Expression
{
    
    Number(double value) : value(value) {}
    ~Number() {};
    double evaluate() {return value;}
    virtual double evaluate() const {return value;}
    

private:
    double value;
};

struct BinaryOperation : Expression
{
    /*
      Здесь op это один из 4 символов: '+', '-', '*' или '/', соответствующих операциям,
      которые вам нужно реализовать.
     */
    BinaryOperation(Expression const * left, char op, Expression const * right)
        : left(left), op(op), right(right)
    { }
    ~BinaryOperation() {
        delete left;
        delete right;   
    }

    virtual double evaluate() const {
        
        if (op == '+') {
            return (left->evaluate() + right->evaluate());
        } else if (op == '-') {
            return (left->evaluate() - right->evaluate());
        } else if (op == '*') {
            return (left->evaluate() * right->evaluate());
        } else if (op == '/') {
            return (left->evaluate() / right->evaluate());
        }
        
    }

private:
    Expression const * left;
    Expression const * right;
    char op;
};