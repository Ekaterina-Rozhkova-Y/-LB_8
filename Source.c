#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int z1() {

    setlocale(LC_CTYPE, "RUS");
    int count = 10;
   
    for (int start = 1; start <= count+2; start++) putchar('*');
    putchar('\n');
    putchar('+');
    for (int start = 1; start <= count; start++) putchar('*');
    putchar('+');
    putchar('\n');
    
 
    for (int start = 1; start <= count/2+1; start++) putchar('+');
    for (int start = 1; start <= count/2+1; start++) putchar('*');
    putchar('\n');

    return 0;
}

int z2() {
    
    setlocale(LC_CTYPE, "RUS");
    printf("Вариант: % d\n\n", 22 % 12 + 1);

    int n, m;
    int c = 0;//четные числа
    int o = 0;//нечетные 
    int k = 0;//счетчик
    int s = 0;//сумма
    double a = 0;//среднее арифм
   

    printf("Ввести n : ");
    scanf("%d", &n);
    printf("Ввести m : ");
    scanf("%d", &m);

    for (int i = m; i >= n; i--) {
        s += i;
        k++;
        printf("Число: %d\n", i);
    }

    for (int i = m; i >= n; i--) {
        if ((i % 10) % 2 == 0) {
            c++;
        }
        else {
            o++;
        }
    }

    if (k > 0) {
        a = (double)s / k;
    }

    printf("Количество: %d\n", k);
    printf("Сумма: %d\n", s);
    printf("Среднее арифметическое: %.1f\n", a);
    printf("Количество чисел с чётной последней цифрой: %d\n", c);
    printf("Количество чисел с нечётной последней цифрой: %d\n", o);
  
    return 0;
}

int z3() {
    setlocale(LC_CTYPE, "RUS");
    int n;

    printf("Введите степень n: ");
    if (scanf("%d", &n) != 1);

    printf("\nВывод степеней 2 (тип int):\n");
    for (int i = 0; i <= n; i++) {
        printf("2^%d = %8d\n", i, 1 << i);
    }
    return 0;
}


int z3_1() {
    setlocale(LC_CTYPE, "RUS");

    printf("\nЭксперимент 1: тип int\n");
    for (int i = 0; i <= 32; i++) {
        int r = 1 << i;
        printf("2^%d = %d\n", i, r);
        if (r < 0) {
            printf("Переполнение - число стало отрицательным \n");
           
        }
    }
    return 0;
}


int z3_2() {
    setlocale(LC_CTYPE, "RUS");

    printf("\nЭксперимент 2: тип unsigned int\n");
    for (int i = 0; i <= 31; i++) {
        unsigned int r = 1u << i;
        printf("2^%d = %u\n", i, r);
    }  
       printf("Переполнение - при 2^32 число начинает зацикливаться\n");
   
    return 0;
}


int z3_3() {
    setlocale(LC_CTYPE, "RUS");

    printf("\nЭксперимент 3: тип long long\n");
    for (int i = 0; i <= 70; i++) {
        long long r = 1LL << i;
        printf("2^%d = %lld\n", i, r);
        if (r < 0) {
            printf("Переполнение - число стало отрицательным\n");
            break;
        }
    }
    return 0;
}

int main() {

    z3_2();
}