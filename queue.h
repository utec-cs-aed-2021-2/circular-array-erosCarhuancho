#include "circulararray.h"

template <typename T>
class QueueArray : public CircularArray<T> { 
    public:
    QueueArray(){QueueArray(0);}
    QueueArray(int _capacity){
    this->array = new T[_capacity];
    this->capacity = _capacity;
    this->front = this->back = -1;
    }
    void push(T data){
        this->push_back(data);
    }
    T pop(){
        T a=this->pop_front();
        return a;
    }
};