#include "library.h"

#include <iostream>

void hello() {
    std::cout << "Hello, World!" << std::endl;
}

int linear_search(const int array[], int size, int value) {
    int answer = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == size) {
            //std::cout << "size = " << size << std::endl;
            //std::cout << "array[i] == " << array[i] << std::endl;
            answer = array[i];
            //std::cout << "Answer = " << answer << std::endl;
            break;
        }
    }
    return answer;
}
