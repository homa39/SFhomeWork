#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

#include <exception>
#include <stdexcept>
#include <vector>

class IntegerArray {
public:
    // Конструктор с заданием начальной длины массива
    IntegerArray(int length) : length(length), data(length) {}

    // Получение значения по индексу
    int get(int index) const {
        if (index < 0 || index >= length) {
            throw std::out_of_range("bad_range");
        }
        return data[index];
    }

    // Установка значения по индексу
    void set(int index, int value) {
        if (index < 0 || index >= length) {
            throw std::out_of_range("bad_range");
        }
        data[index] = value;
    }

    // Получение размера массива
    int size() const {
        return length;
    }

private:
    int length;
    std::vector<int> data;
};

#endif