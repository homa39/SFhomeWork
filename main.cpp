#include <iostream>
#include "integerarray.h"

int main() {
    try {
        IntegerArray arr(5);

        // ������� ������������� ����������
        arr.set(0, 10);
        arr.set(1, 20);
        arr.set(2, 30);
        arr.set(3, 40);
        arr.set(4, 50);

        std::cout << "Array size: " << arr.size() << std::endl;

        std::cout << "Element at index 2: " << arr.get(2) << std::endl;
        std::cout << "Element at index 5: " << arr.get(5) << std::endl; // ����� �� ������� �������

        arr.set(5, 60); // ����� �� ������� �������

    }
    catch (const std::out_of_range& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}

/*
� ������ ������� �� ������� ��������� IntegerArray � ��������� ������ 5. ����� �� ������������� � �������� �������� �� �������, � ����� ��������� ������ �������. � ������, ���� �� �������� �������� ��� ���������� �������� �� ��������� �������, ������������ ���������� std::out_of_range. � ������� main �� ����� ��� ���������� � ������� ��������� �� ������.

�� ����� ���������� std::vector ��� �������� ������, ����� �� ������������ � ��������� � ������������ ������.
*/