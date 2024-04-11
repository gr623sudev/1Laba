#include <iostream>

// Функция для сложения
double add(double x, double y) {
    return x + y;
}

// Функция для вычитания
double subtract(double x, double y) {
    return x - y;
}

// Функция для умножения
double multiply(double x, double y) {
    return x * y;
}

// Функция для деления
double divide(double x, double y) {
    if (y != 0) {
        return x / y;
        
    } else {
        std::cout << "Ошибка: деление на ноль \n";
        return 0; // Возвращаем 0 в случае деления на 0
    }
}

int main() {
    char operation;
    double number1, number2;

    std::cout << "Введите оператор (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Введите два числа: ";
    std::cin >> number1 >> number2;

    switch (operation) {
        case '+':
            std::cout << "Результат: " << add(number1, number2);
            break;
        case '-':
            std::cout << "Результат: " << subtract(number1, number2);
            break;
        case '*':
            std::cout << "Результат: " << multiply(number1, number2);
            break;
        case '/':
            std::cout << "Результат: " << divide(number1, number2);
            break;
        default:
            // Если оператор некорректен
            std::cout << "Ошибка! Некорректный оператор";
            break;
    }

    return 0;
}