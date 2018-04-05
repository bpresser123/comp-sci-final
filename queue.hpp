
#ifndef queue_hpp
#define queue_hpp
#include "debug.hpp"
#include "LinearContainer.hpp"

template<typename T>
class Queue : public LinearContainer<T> {
public:
    
    Queue() : LinearContainer<T>() {}
    
    Queue(int arg) : LinearContainer<T>(arg) {}
    
    virtual bool is_empty() {
        if(this->top == -1 && this->bottom == -1)
            return 1;
        else
            return 0;
    }
    
    virtual bool is_full() {
        if(this->bottom == this->size - 1)
            return 1;
        else
            return 0;
    }
    
    virtual void push(T num) {
        if(is_full()){
            log("Queue is full")
            
            this->size *= 2;
            T *oldData = this->data;
            this->data = new T[this->size];
            
            int i;
            
            for (i = 0; i <= this->bottom; i++)
                this->data[i] = oldData[i];
            
            delete[]oldData;
            return;
        }
        
        if(this->top == -1)
          this->top = -1;
          this->bottom++;
          this->data[this->bottom] = num;
    }
    
    virtual T pop() {
        T temp;
        
        if(is_empty()) {
            log("Queue is empty")
        }
        
        if(this->top == this->bottom) {
            this->top = this->bottom = -1;
            temp = this->data[this->top];
            return temp;
        }
        
        else
          this->top++;
          temp = this->data[this->top];
          return temp;
    }
    
};

#endif
