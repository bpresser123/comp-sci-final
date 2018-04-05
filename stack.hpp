
#ifndef stack_hpp
#define stack_hpp
#include "debug.hpp"
#include "LinearContainer.hpp"

template<typename T>
class Stack : public LinearContainer<T> {
public:

    Stack() : LinearContainer<T>() {}

    Stack(int arg) : LinearContainer<T>(arg) {}
    
    virtual bool is_empty() {
        if(this->top == -1)
            return 1;
        else
            return 0;
    }
    
    virtual bool is_full() {
        if(this->top == this->size -1)
            return 1;
        else
            return 0;
    }
    
    virtual void push(T num) {
        if(is_full()){
            log("Stack is full")
            
            this->size *= 2;
            T *oldData = this->data;
            this->data = new T[this->size];
            
            int i;
            
            for (i = 0; i <= this->top; i++)
              this->data[i] = oldData[i];
            
            delete[]oldData;
            return;
        }
        this->top++;
        this->data[this->top] = num;
    }
    
    virtual T pop() {
        T temp;
        
        if(is_empty()) {
            log("Stack is empty")
        }
        
        temp = this->data[this->top];
        this->top--;
        return temp;
    }
    
};


#endif
