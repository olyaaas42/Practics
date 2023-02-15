#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "dynamicArray.h"

Array funTest()
{
    Array array1{2, 5, 7, 8, 3};
    std::cout << "Dynamic array1: " << array1 << std::endl;
    array1.insertSort();
    std::cout << "Dynamic array1: " << array1 << std::endl;
    return array1;
}

TEST_CASE("testing the programm") 
{
    Array array1 = funTest();
    int number = 5;

    SUBCASE("testing the insert sort function")
    {
        CHECK(array1[0] == 2);  
        CHECK(array1[1] == 3);
        CHECK(array1[2] == 5);
        CHECK(array1[3] == 7);
        CHECK(array1[4] == 8);
    }

    SUBCASE("testing the copy constructor function")
    {
        Array array2 = array1;

        CHECK(array2[0] == array1[0]);  
        CHECK(array2[1] == array1[1]);
        CHECK(array2[2] == array1[2]);
        CHECK(array2[3] == array1[3]);
        CHECK(array2[4] == array1[4]);
    }

    SUBCASE("testing the move constructor function")
    {
        Array array3 = Array(std::move(array1));

        CHECK(array3[0] == 2);  
        CHECK(array3[1] == 3);
        CHECK(array3[2] == 5);
        CHECK(array3[3] == 7);
        CHECK(array3[4] == 8);
    }

    SUBCASE("indexing operator testing")
    {
        Array array2 = array1;
        int index = 4;
        WARN(index > -1);
        WARN(index < number);
        CHECK(array2[index] == array1[index]);
    }
}