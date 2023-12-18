#ifndef INTEGERARRAY_H
#define INTEGERARRAY_H

#include <exception>
#include <stdexcept>
#include <vector>

class IntegerArray {
public:
    // ����������� � �������� ��������� ����� �������
    IntegerArray(int length) : length(length), data(length) {}

    // ��������� �������� �� �������
    int get(int index) const {
        if (index < 0 || index >= length) {
            throw std::out_of_range("bad_range");
        }
        return data[index];
    }

    // ��������� �������� �� �������
    void set(int index, int value) {
        if (index < 0 || index >= length) {
            throw std::out_of_range("bad_range");
        }
        data[index] = value;
    }

    // ��������� ������� �������
    int size() const {
        return length;
    }

private:
    int length;
    std::vector<int> data;
};

#endif