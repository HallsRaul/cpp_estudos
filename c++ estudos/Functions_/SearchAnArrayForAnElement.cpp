#include <iostream>

int searchArray(std::string array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter a number to search for: " << "\n";
    std::cin >> myNum;

    index = searchArray(numbers, size, myNum);

    if(index != -1){
        std::cout << "The number " << myNum << " was found at index " << index << "\n";
    }else{
        std::cout << "The number " << myNum << " was not found in the array." << "\n";
    }

    return 0;
}
int searchArray(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; // if you see it that means that something wasn't found.
}

/*
    std::string foods[] = {"pizza", "hamburger", "hotdog"}
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;
    std::string myFood;

    std::cout << "Enter a element to search for: " << "\n";
    std::getline(std::cin, myFood);

    index = searchArray(foods, size, myFood);

    if(index != -1){
        std::cout << "The element " << myFood << " was found at index " << index << "\n";
    }else{
        std::cout << "The element " << myFood << " was not found in the array." << "\n";
    }

    return 0;
}
int searchArray(std::string array[], int size, std::string element){

    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        }
    }
    return -1; // if you see it that means that something wasn't found.
}*/