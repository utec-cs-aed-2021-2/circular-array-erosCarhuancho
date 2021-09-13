#include "circulararray.h"

template <typename T>
class StackArray : public CircularArray<T> { 
    public:
    StackArray(){StackArray(0);}
    StackArray(int _capacity){
    this->array = new T[_capacity];
    this->capacity = _capacity;
    this->front = this->back = -1;
    }

    void push(T data){
        this->push_back(data);
    }
    T pop(){
        T a=this->pop_back();
        return a;
    }
};