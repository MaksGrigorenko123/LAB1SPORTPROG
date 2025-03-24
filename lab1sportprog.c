#include <stdio.h>      
#include <stdlib.h>     
#include <locale.h>     

int main(void) {
    // Увімкнення підтримки українських символів
    system("chcp 65001");                  
    setlocale(LC_ALL, "uk_UA.UTF-8");     

    // 1. Ділення двох цілих чисел і виведення результату як float
    int a = 5, b = 2;
    float result = (float)a / b;
    printf("Результат ділення 5 на 2: %.2f\n", result);

    // 2. Оголошення константи типу float і виведення її значення
    const float PI = 3.14f;
    printf("Константа PI: %.2f\n", PI);

    // 3. Оголошення символу і виведення його ASCII-коду
    char ch = 'A';
    printf("Символ: %c, його ASCII-код: %d\n", ch, ch);

    // 4. Введення цілого і дробового числа та виведення їх суми
    int num;
    float decimal;

    printf("Введіть ціле число: ");
    if (scanf("%d", &num) != 1) {
        printf("Помилка введення цілого числа.\n");
        return 1;
    }

    printf("Введіть дробове число: ");
    if (scanf("%f", &decimal) != 1) {
        printf("Помилка введення дробового числа.\n");
        return 1;
    }

    float sum = num + decimal;
    printf("Сума: %.2f\n", sum);

    // 5. Зчитування символу і виведення наступного символу в ASCII
    char inputChar;
    printf("Введіть символ: ");
    if (scanf(" %c", &inputChar) != 1) {
        printf("Помилка введення символу.\n");
        return 1;
    }

    char nextChar = inputChar + 1;
    printf("Наступний символ: %c\n", nextChar);

    return 0;
}
