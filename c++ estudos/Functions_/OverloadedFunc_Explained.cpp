#include <iostream>

void toCookCuzCuz();
void toCookCuzCuz(std::string comlinguiça);
void toCookCuzCuz(std::string comlinguiça, std::string eovo);

int main()
{

    toCookCuzCuz(" com linguiça", " e ovo");

    return 0;

}
void toCookCuzCuz()
{
    std::cout << "Cooking Cuzcuz!\n";
}
void toCookCuzCuz(std::string comlinguiça)
{
    std::cout << "Cuzcuz" << comlinguiça << "!\n";
}
void toCookCuzCuz(std::string comlinguiça, std::string eovo)
{
    std::cout << "Cuzcuz" << comlinguiça << eovo << "!\n";
}