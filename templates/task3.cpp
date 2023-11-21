#include <iostream>

//Напишете шаблонна функция, която приема масив и елемент и проверява дали този елемент принадлежи на масива.
template <typename T>
bool checkForElement(T arr[], size_t size , T element)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(element == arr[i])
        {
            return true;
        }
    }
    return false;
}

int main()
{
    size_t size;
    std::cin >> size;

    int arr[size] = {1 ,2 ,4 ,5 ,8};
    char arr2[size] ={'a' , 'r' , 'v' , 't' , 'y'};

    std::cout << std::boolalpha << checkForElement(arr , size , 6) << std::endl;
    std::cout << std::boolalpha << checkForElement(arr , size , 6) << std::endl;
    std::cout << std::boolalpha << checkForElement(arr , size , 2) << std::endl;
    std::cout << std::boolalpha << checkForElement(arr , size , 15) << std::endl;
    std::cout << std::boolalpha << checkForElement(arr , size , 8) << std::endl;
    std::cout << std::boolalpha << checkForElement(arr2 , size , 'd') << std::endl;
    std::cout << std::boolalpha << checkForElement(arr2 , size , 'a') << std::endl;
    std::cout << std::boolalpha << checkForElement(arr2 , size , 'y') << std::endl ;
    std::cout << std::boolalpha << checkForElement(arr2 , size , 'b') << std::endl;



    return 0;
}