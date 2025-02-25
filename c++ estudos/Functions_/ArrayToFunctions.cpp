#include <iostream>

double getTotal(double prices[], int size);

int main()
{

    double prices[] = {5.50, 20.25, 650.90, 2000.50};
    int size = sizeof(prices) / sizeof(prices[0]);/*the reason why we put this here to is that the
    function cannot know the size of the array, so we need to pass it as a parameter. This is 'cause the array doesn't
    have any pointer showing wow much size in the memory this array fills.*/
    double total = getTotal(prices, size);

    std::cout << "R$ " << total << '\n';

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];
    }

    return total;
}

/*
    when you pass an array to a function, you only have to pass the array name. However when a funtion receivas an array
    it decays into a pointer and the funtion no longer knows what the size of the array is. so we could pass that as an argumento to let function know what 
    the size is; which we could then uso to iterato over he array.
*/