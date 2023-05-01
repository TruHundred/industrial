#include <iostream>
#include <string>
#include "sort.h"

int main() {
    // sorting array of integers
    int intArray[] = { 5, 3, 8, 1, 9, 2 };
    int intArraySize = sizeof(intArray) / sizeof(int);
    sortArray(intArray, intArraySize);
    for (int i = 0; i < intArraySize; ++i) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // sorting array of doubles
    double doubleArray[] = { 5.2, 3.7, 8.1, 1.3, 9.6, 2.8 };
    int doubleArraySize = sizeof(doubleArray) / sizeof(double);
    sortArray(doubleArray, doubleArraySize);
    for (int i = 0; i < doubleArraySize; ++i) {
        std::cout << doubleArray[i] << " ";
    }
    std::cout << std::endl;

    // sorting array of floats
    float floatArray[] = { 5.2f, 3.7f, 8.1f, 1.3f, 9.6f, 2.8f };
    int floatArraySize = sizeof(floatArray) / sizeof(float);
    sortArray(floatArray, floatArraySize);
    for (int i = 0; i < floatArraySize; ++i) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    // sorting array of strings
    std::string stringArray[] = { "Doe, John", "Doe, Jane", "Smith, John", "Smith, Jane", "Brown, John", "Brown, Jane" };
    int stringArraySize = sizeof(stringArray) / sizeof(std::string);
    sortArray(stringArray, stringArraySize);
    for (int i = 0; i < stringArraySize; ++i) {
        std::cout << stringArray[i] << std::endl;
    }
    return 0;
}
