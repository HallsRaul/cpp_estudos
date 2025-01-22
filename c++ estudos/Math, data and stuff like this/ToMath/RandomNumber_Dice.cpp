#include <iostream>

int main(){

    srand(time(NULL));

    int num;

    for(int i = 1; i <=3; i++)
    {
        int num = (rand() % 6) + 1;
            std::cout << num << '\n';
    }
    
    return 0;
}