#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string S;
    std::getline(std::cin, S);//Вводим наш текстб при этом пробел не является символом-терминатором
    int t = 0;
    for (int i=65;i<=90;++i)
    {
        long a = count(S.begin(),S.end(), static_cast<char>(i));
        std::cout << "The part of " << static_cast<char> (i) << " is " << a << std::endl;//Находим количество каждой буквы в тексте 
        t = t + a;//Переменная t необходима для вычисление количества всех букв, не вулючая иные символы
    }
    std::cout << "The number of articles is " << t << std::endl;//Выводим количество букв на экран, это необходимо для подсчёта частоты букв
    for (char i: S)//Цикл, который меняет зашифрованные буквы на необходимые
    if (i=='E') std::cout << 'O'; else
    if (i=='T') std::cout << 'B'; else
    if (i=='R') std::cout << 'U'; else
    if (i=='G') std::cout << 'R'; else
    if (i=='F') std::cout << 'E'; else
    if (i=='I') std::cout << 'C'; else
    if (i=='C') std::cout << 'D'; else
    if (i=='D') std::cout << 'H'; else 
    if (i=='N') std::cout << 'S'; else 
    if (i=='L') std::cout << 'G'; else
    if (i=='J') std::cout << 'P'; else
    if (i=='X') std::cout << 'N'; else
    if (i=='P') std::cout << 'A'; else
    if (i=='O') std::cout << 'F'; else
    if (i=='Y') std::cout << 'L'; else
    if (i=='H') std::cout << 'I'; else 
    if (i=='A') std::cout << 'T'; else 
    if (i=='Z') std::cout << 'M'; else 
    if (i=='W') std::cout << 'Y'; else
    if (i=='B') std::cout << 'W'; else 
    if (i=='U') std::cout << 'V'; else
    if (i=='S') std::cout << 'K'; else
    if (i=='V') std::cout << 'J'; else
    if (i=='M') std::cout << 'X'; else
    std::cout << i;//Выводим расшифрованный текст на экран
    std::cout << S << std::endl;
    return 0;
}
