#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string S;
    bool ccc;
    std::cout << "Enter your text:\n";
    std::getline(std::cin, S);//������ ��� ������ ��� ���� ������ �� �������� ��������-������������
    int t = 0;
    for (int i=65;i<=90;++i)
    {
        long a = count(S.begin(),S.end(), static_cast<char>(i));
        std::cout << "The part of " << static_cast<char> (i) << " is " << a << std::endl;//������� ���������� ������ ����� � ������
        t = t + a;//���������� t ���������� ��� ���������� ���������� ���� ����, �� ������� ���� �������
    }
    std::cout << "The number of articles is " << t << std::endl;//������� ���������� ���� �� �����, ��� ���������� ��� �������� ������� ����
    do {
        std::cout << "Enter a letter: ";
        char x;
        std::cin >> x;
        std:: cout << "Enter a needed letter: ";
        char y;
        std::cin >> y;
        for (int i=0; i< S.size(); ++i)
        {
            if (S[i]==x){
                S[i]=y;
            }
        }
        std::cout << S << std::endl;
        std::cout << "Do you want to continue your work?\nYes - press 1;\nNo - press 0\n";
        std::cin >> ccc;
    }
    while (ccc==1);
    std::cout << S << std::endl;
    return 0;
}
