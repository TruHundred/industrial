#include "sort.h"

template <typename T>
void sortArray(T* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[i]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

template <>
void sortArray<std::string>(std::string* array, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[i]) {
                std::string temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

template void sortArray<int>(int*, int);
template void sortArray<double>(double*, int);
template void sortArray<float>(float*, int);
