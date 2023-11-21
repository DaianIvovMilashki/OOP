#include <iostream>

//Напишете шаблонна функция, която приема масив и два елемента и която променя всички срещания на първия елемент с втория.
template <typename T>
void changeTwoElements(T arr[], size_t size , T element , T element2)
{
    for(int i = 0 ; i < size ; i++)
    {
        if(arr[i] == element)
        {
            arr[i] = element2;
        }
    }
    
}

template <typename T>
void printArray(T arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}


int main()
{
    size_t size = 10;
    int arr[size] = {1 ,2 ,1 ,5 ,1 , 1 ,2 ,4 ,5 ,8};
    char arr2[size] ={'a' , 'r' , 'a' ,'t' , 'a' , 'a' , 'r' , 'v' ,'t' , 'y'};

    changeTwoElements(arr2 , size , 'a' , 'b');
    printArray(arr2, size);
    changeTwoElements(arr2 , size , 'r' , 'v');
    printArray(arr2, size);
    changeTwoElements(arr , size , 1 , 5);
    printArray(arr, size);
    changeTwoElements(arr , size , 2 , 4);
    printArray(arr, size);


   



    return 0;
}