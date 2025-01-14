#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
    
    //pairlist_t pairlist;

    text_t firstName = "Raul";

    std::cout << firstName << '\n';

    number_t inteiro = 2;

    std::cout << "Aqui está um número inteiro" << '\n' << inteiro << '\n';

    return 0;
}