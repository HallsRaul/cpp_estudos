#include <iostream>

// Esse documento foi criado apenas para estudar, então a ordem de idioma diferente é aleatória e existe pois estou tentando melhorar meu inglês mas as vezes da preguiça.
int main(){

    int x; //declaration - declaração
    x = 5; //assignment - atribuição

    //Of course we can mix the two things like:

    int y = 4; //declaration and assignment together..

    //Now I will start doing operations with these variables..

    int sum = x + y;
    double media = sum / 2;

    //It's on the notes but this is double, a variable used to decimal numbers.

    double test_result = 7.5;

    //If we set variables x and y in the double type we can have the right result for the media.

    double t = 5;
    double f = 4;

    double real_sum = t + f;

    double real_media = real_sum / 2;

    //Testing another ways to do this..

    int test_sum = t + f;

    double test_int_media = sum /2;

    std::cout << "This is our first number:" << '\n' << x << '\n';
    std::cout << "and this is our last number" << '\n' << y << '\n';
    std::cout << "The result is:" << '\n' << sum << '\n';
    std::cout << "Peter has made tests in his school \nThis is the result of each test he made:" << '\n' << test_result << '\n';
    std::cout << "Oi, em portugês tô dizendo que farei uma média dos valores das variáveis X e Y." << '\n' << media << '\n'; 
    std::cout << "Como deu para notar, não funcionou, vamos refazer de outra forma." << '\n';
    std::cout << "Vamos ver..." << '\n' << real_media << '\n';
    std::cout << "Eba! Funcionou! Agora, vamos ver se, se usassemos a variável int sum, o resultado daria certo igualmente.." << '\n' << test_int_media << '\n' << '\n'; 

    /*
        Desta forma, pode-se perceber que fazer a divisão de uma variável int,
        mesmo que a operação do calculo esteja definida como decimal,
        causará erro de cálculo.
    */

   //Single character

    char grade = 'A';
    char initial = 'B';

    std::cout << initial << '\n' << '\n';

    //Boolean 
    bool student = false;
    bool power = true;
    bool forSale = true;

    //String
    std::string name = "Isabela";
    std::string day = "Thursday";
    std::string feelling = "love";

    std::cout << "Hi, today is " << day << " and I have something to say: " << name << " you're my girlfriend and I " << feelling << " you!" <<  '\n';

    return 0;
}