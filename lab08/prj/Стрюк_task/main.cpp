#include <iostream>
#include <clocale>
#include <iomanip>
#include <conio.h>
#include <cstring>

#include "ModulesStriuk.h"

using namespace std;

int x = 0, y = 0, z = 0;
char a = '0', b = '0';

string authorCopyright()
{
    return "� ����� ��������� ����������";
}

void inputVariables(int X, int Y, int Z, char A, char B)
{
    cout << "������ ����� X: ";    cin >> X;   x = X;
    cout << "������ ����� Y: ";    cin >> Y;   y = Y;
    cout << "������ ����� Z: ";    cin >> Z;   z = Z;
    cout << "������ ������ �1: ";  cin >> A;   a = A;
    cout << "������ ������ �2: ";  cin >> B;   b = B;
    cout << endl;
}

bool logicalExpression(int A, int B)
{
    return A + 10 >= B;
}

void decimalHexNumbersOutput(int X, int Y, int Z)
{
    cout << "'x' � ���������: " << dec << X << endl
         << "'y' � ���������: " << dec << Y << endl
         << "'z' � ���������: " << dec << Z << endl << endl;

    cout << "'x' � �������������: " << hex << X << endl
         << "'y' � �������������: " << hex << Y << endl
         << "'z' � �������������: " << hex << Z << endl;
}

int main()
{
    system("chcp 1251 & cls");
    cout << authorCopyright() << endl << endl;
    inputVariables(x, y, z, a, b);
    cout << boolalpha
         << "��������� " << a << " + 10 >= " << b << " : " << logicalExpression(a, b) << endl << endl;
    decimalHexNumbersOutput(x, y, z);
    cout << endl << "��������� ������: " << s_calculation(x, y, z);
    _getch(); return 0;
}
