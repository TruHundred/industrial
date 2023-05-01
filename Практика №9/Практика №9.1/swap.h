#ifndef SWAP_H 
#define SWAP_H

template<typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

#endif
