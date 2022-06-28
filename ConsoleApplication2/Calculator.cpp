#include <windows.h>
#include <iostream>
#include <math.h>
 
using namespace std;

int main()
{
    Sleep(200);
    cout << "     $$$$   $$$$  $$      $$$$" << endl;
    cout << "    $$  $$ $$  $$ $$     $$  $$" << endl;
    cout << "    $$     $$$$$$ $$     $$    " << endl;
    cout << "    $$  $$ $$  $$ $$     $$  $$" << endl;
    cout << "     $$$$  $$  $$ $$$$$$  $$$$ " << endl;
    cout << "" << endl;

    while (true)
    {
        setlocale(LC_ALL, "RUS");
        SetConsoleTitle(L"Калькулятор v4.0");

        int a, b;
        char c;

        double firstValue, secondValue, result;

        cout << "Что вы хотите сделать?" << endl;
        cout << "" << endl;
        cout << "Выберите действие:" << endl;
        cout << "1)Стандарт" << endl;
        cout << "2)Возвести в степень" << endl;
        cout << "3)Извлечь корень" << endl;
        cout << "4)Найти синус" << endl;
        cout << "5)Найти косинус" << endl;
        cout << "6)Найти тангенс" << endl;
        cout << "7)Найти котангенс" << endl;
        cout << "8)Выйти" << endl;
        cout << endl;
        cin >> b;
        cout << endl;

        if (b == 1)
        {


            cout << "Введите два оператора:" << endl;
            cout << "" << endl;
            cin >> firstValue >> secondValue;
            cout << "" << endl;
            cout << "Выберите действие:" << endl;
            cout << "1)Сложение" << endl;
            cout << "2)Вычитание" << endl;
            cout << "3)Умножение" << endl;
            cout << "4)Деление" << endl;
            cout << endl;
            cin >> a;
            cout << "" << endl;

            if (a == 1)
            {
                result = firstValue + secondValue;
                cout << "Сложение";
                cout << ".";
                cout << ".";
                cout << ".";
                cout << endl;
                cout << "Ваш результат: " << result << endl;
            }

            else if (a == 2)
            {
                result = firstValue - secondValue;
                cout << "Вычитание...";
                cout << endl;
                cout << "Ваш результат: " << result << endl;
            }

            else if (a == 3)
            {
                result = firstValue * secondValue;
                cout << "Умножение...";
                cout << endl;
                cout << "Ваш результат: " << result << endl;
            }

            else if (a == 4)
            {
                result = firstValue / secondValue;
                cout << "Деление...";
                cout << endl;
                cout << "Ваш результат: " << result << endl;
            }

            else if (a <= 0 or a > 4)
            {
                cout << "Технические шоколадки..." << endl;
                cout << "Выбери правильное действие!" << endl;
            }
        }

        else if (b == 2)
        {
            cout << "Введите число для возведения в степень: " << endl;
            cin >> firstValue;
            cout << "Введите значение степени:" << endl;
            cin >> secondValue;
            cout << "" << endl;
            cout << "Возведение в степень...";
            cout << endl;
            result = pow(firstValue, secondValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;

        }

        else if (b == 3)
        {
            cout << "Введите число для излечения корня:" << endl;
            cin >> firstValue;
            cout << "" << endl;
            cout << "Извлечение...";
            cout << endl;
            result = sqrt(firstValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;
        }

        else if (b == 4)
        {
            cout << "Введите число для извлечения синуса:" << endl;
            cin >> firstValue;
            cout << "" << endl;
            cout << "Извлечение...";
            cout << endl;
            result = sin(firstValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;
        }

        else if (b == 5)
        {
            cout << "Введите число для извлечения косинуса:" << endl;
            cin >> firstValue;
            cout << "" << endl;
            cout << "Извлечение...";
            cout << endl;
            result = cos(firstValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;
        }

        else if (b == 6)
        {
            cout << "Введите число для извлечения тангенса:" << endl;
            cin >> firstValue;
            cout << "" << endl;
            cout << "Извлечение...";
            cout << endl;
            result = tan(firstValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;
        }

        else if (b == 7)
        {
            cout << "Введите число для извлечения котангенса:" << endl;
            cin >> firstValue;
            cout << "" << endl;
            cout << "Извлечение...";
            cout << endl;
            result = cos(firstValue) / sin(firstValue);
            cout << "" << endl;
            cout << "Ваш результат: " << result << endl;
        }

        else if (b == 8)
        {
            break;
        }

        else if (b <= 0 or b > 8)
        {
            cout << "Технические шоколадки..." << endl;
            cout << "Выбери правильное действие!" << endl;
        }

        else
        {
            break;
        }

        cout << "" << endl;
        cout << "Хотите продолжить? (y/n)" << endl;
        cin >> c;
        cout << "" << endl;

        if (c == 'y')
        {
            Sleep(1250);
            continue;
        }

        if (c == 'n')
        {
            break;
        }

        else
        {
            break;
        }
        system("pause");
    }
}
