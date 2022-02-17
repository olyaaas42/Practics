#ifndef dynamicArray_H
#define dynamicArray_H

class Array
{
public:
    Array() = default;  
    
    Array(int number);  //конструктор
    ~Array(); // деструктор

    friend std::ostream& operator<<(std::ostream &os, const Array &array); //перегрузка cout

    int& operator[] (int index); //перегрузка оператора индексации

    void insertSort(); //сортировка

    void randz(int minz, int maxz); // заполнение случайными числами

	Array(std::initializer_list<int> list); // инициализация контейнера через std::initializer_list

    Array(const Array &other); //конструктор копирования

    Array(Array&& other); //конструктор перемещения

private:
    int number {};
    int* dynamicArray {};
};

#endif