#ifndef SORT_H
#define SORT_H

#include <iostream>
#include <string>
#include <vector>

template <typename T>
void sortArray(T* array, int size);

template <>
void sortArray<std::string>(std::string* array, int size);

#endif
