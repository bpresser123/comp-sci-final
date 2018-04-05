#ifndef LinearContainer_hpp
#define LinearContainer_hpp

template <typename T>
class LinearContainer {
    
public:
    
    int size, top, bottom;
    T *data;
    
    LinearContainer (int arg) {
        size = arg;
        init();
    }
    
    LinearContainer () {
        size = 10;
        init();
    }
    
    void init() {
        data = new T[size];
        top = -1;
        bottom = -1;
    }
    
    virtual ~LinearContainer() {
        
    }
    
    virtual void push(T e) = 0;
    
    virtual T pop() = 0;
    
    virtual bool is_empty() = 0;
    
    virtual bool is_full() = 0;
    
};

#endif
