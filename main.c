#include <stdio.h>

void task1(){
    printf("%20s \n", "Это текст");
    printf("%s \n \t%s \n \t\t%s\n","Это текст","Это текст","Это текст");
    printf("%5.5f\n", 12.234657);
    printf ("Остаток от деления %d на %d равен %d\n",5, 2, 5%2);
    printf ("Деления %d на %d равно %d\n",7, 5, 5/2);
    printf ("Умножение %d на %d равно %d\n",2000, 4, 2000*4);
    printf ("%g разделить %e равно %f\n",5., 2., 5./2);
    printf ("g-целое число, e- цисло в виде x.xx e+xx, f-дробные\n");
}

void task2(){
    int N = 11;
    int K = 8;
    printf("Сейчас %i часов %i минут 00 секунд\n",N,K);
    printf("Идет %i минута суток\n",K);
    printf("До полуночи осталось %i часов и %i минут\n",23-N,60-K);
    printf("С 8.00 прошло %i секунд\n",(N-8)*60+K);
    float M=N;
    float T=K;
    printf("Текущий час = %2.2f суток и текущая минута = %2.2f часа\n",M/24,T/60);
    
}

void task3(){
    float N = 333;
    float T = 3;
    printf("%20.0f \n%20.0f \n----------------------------\n+/%18.0f\n",N,T,N+T);

}

int main(void)
{
//    task1();
//    task2();
    task3();
}
