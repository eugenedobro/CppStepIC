/*
Задание повышенной сложности. 

Реализуйте класс SharedPtr как описано ранее. Задание немного сложнее, чем кажется на первый взгляд. Уделите особое внимание "граничным случаям" — нулевой указатель, присваивание самому себе, вызов reset на нулевом SharedPtr и прочее. 

Подсказка: возможно, вам понадобится завести вспомогательную структуру.

Требования к реализации: ваш код не должен вводить или вводить что-либо, реализовывать функцию main не нужно.
*/

struct Expression;
struct Number;
struct BinaryOperation;

struct SharedPtr
{
    explicit SharedPtr(Expression *ptr = 0){
		ptr_ = ptr;
        if (ptr_) {
            counter_ = new int(1);
        } else {
            counter_ = 0;
        }
	}
	SharedPtr(const SharedPtr & obj) {
//        if (this != &obj) {
            ptr_ = obj.ptr_;
            counter_ = obj.counter_;
            if (ptr_){
                ++(*counter_);
            }
//		}
	}
    void decrement_counter(){
        if (counter_ && ptr_ /*&& *counter_*/ && !--(*counter_)) {
            delete ptr_;
            delete counter_;
//            ptr_ = 0;
            counter_ = 0;
        }
    }
	void reset(Expression *ptr = 0){
        if (ptr_ != ptr){
            decrement_counter();
            ptr_ = ptr;
            if (ptr) {
                counter_ = new int(0);
                if (ptr_) {
                    ++(*counter_);
                }
            }
        }
	}
	SharedPtr& operator=(const SharedPtr & obj) {
        if (this != &obj){
            decrement_counter();
            ptr_ = obj.ptr_;
            counter_ = obj.counter_;
            if (obj.ptr_) {
                ++(*counter_);
            }
        }
		return *this;
	}
	Expression& operator*() const {
		return *ptr_;
	}
	Expression* operator->() const {
	    return ptr_;
	}
    Expression* get() const {
        return ptr_;
    }
	int count() const{
        if (counter_) return *counter_;
        return 0;
	}
	~SharedPtr(){
        decrement_counter();
	}

private:
    Expression *ptr_;
    int *counter_;
};