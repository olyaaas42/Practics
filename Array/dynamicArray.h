#ifndef dynamicArray_H
#define dynaicArray_H

class Array
{
public:
    Array(int number);  //конструктор
    ~Array(); // деструктор

    friend std::ostream& operator<<(std::ostream &os, const Array &array); //перегрузка cout

    int& operator[] (int index); //перегрузка оператора индексации

    void insertSort(); //сортировка

private:
    int number;
    int* dynamicArray;
};

#endif