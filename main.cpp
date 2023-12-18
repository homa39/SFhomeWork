#include <iostream>
#include "integerarray.h"

int main() {
    try {
        IntegerArray arr(5);

        // Примеры использования контейнера
        arr.set(0, 10);
        arr.set(1, 20);
        arr.set(2, 30);
        arr.set(3, 40);
        arr.set(4, 50);

        std::cout << "Array size: " << arr.size() << std::endl;

        std::cout << "Element at index 2: " << arr.get(2) << std::endl;
        std::cout << "Element at index 5: " << arr.get(5) << std::endl; // Выход за пределы массива

        arr.set(5, 60); // Выход за пределы массива

    }
    catch (const std::out_of_range& ex) {
        std::cout << "Exception caught: " << ex.what() << std::endl;
    }

    return 0;
}

/*
В данном примере мы создаем контейнер IntegerArray с начальной длиной 5. Затем мы устанавливаем и получаем значения по индексу, а также проверяем размер массива. В случае, если мы пытаемся получить или установить значение за пределами массива, генерируется исключение std::out_of_range. В функции main мы ловим это исключение и выводим сообщение об ошибке.

Мы также используем std::vector для хранения данных, чтобы не беспокоиться о выделении и освобождении памяти.
*/