#include <iostream>

int main()
{

    // um loop que percorre um array de inteiros
    //std::string students[] = {"Hallsz", "Leticia", "Lucas"};

    // para usar um for loop você precisa de 3 condições: um index, uma condição e então o incremento ou decremento
    
    /*exemplo de um for, que pode ser substituido por um foreach-
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        std::cout << students[i] << std::endl;
    }
    */

    int grades[] = {1, 2, 3, 4, 5};

    for(int grade : grades)
    {
        std::cout << grade << '\n';
    }
    return 0;
}