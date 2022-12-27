#include <stdio.h>
 
int main(void)
{
   int n;
   printf("Число:") ;
   scanf ("%i", &n);
 
   switch (n/100) {
   case 1:
       printf("сто ");
       break;
   case 2:
       printf("двести ");
       break;
   case 3:
       printf("триста ");
       break;
   case 4:
       printf("четыреста ");
       break;
   case 5:
       printf("пятьсот ");
       break;
   case 6:
       printf("шестьсот ");
       break;
   case 7:
       printf("семьсот ");
       break;
   case 8:
       printf("восемьсот  ");
       break;
   case 9:
       printf("девятьсот  ");
       break;
   }
 
   if ((n%100)/10==1)
        switch (n%100) {
        case 10:
                printf("десять\n");
                break;
            case 11:
                printf("одинадцать\n");
                break;
        case 12:
                printf("двенадцать\n");
                break;
        case 13:
                printf("тринадцать\n");
                break;
        case 14:
                printf("четырнадцать\n");
                break;
        case 15:
                printf("пятнадцать\n");
                break;
        case 16:
                printf("шестнадцать\n");
                break;
        case 17:
                printf("семнадцать\n");
                break;
        case 18:
                printf("восемнадцать\n");
                break;
        case 19:
                printf("девятнадцать\n");
                break;
        }
    else {
        switch ((n%100)/10) {
            case 2:
                printf("двадцать ");
                break;
            case 3:
                printf("тридцать ");
                break;
            case 4:
                printf("сорок ");
                break;
            case 5:
                printf("пятьдесят ");
                break;
            case 6:
                printf("шестьдесят ");
                break;
            case 7:
                printf("семьдесят ");
                break;
            case 8:
                printf("восемьдесят ");
                break;
            case 9:
                printf("девяносто ");
                break;
        }
 
        switch (n%10) {
        case 1:
            printf("один\n");
            break;
        case 2:
            printf("два\n");
            break;
        case 3:
            printf("три\n");
            break;
        case 4:
            printf("четыре\n");
            break;
        case 5:
            printf("пять\n");
            break;
        case 6:
            printf("шесть\n");
            break;
        case 7:
            printf("семь\n");
            break;
        case 8:
            printf("восемь\n");
            break;
        case 9:
            printf("девять\n");
            break;
        }
  }
   return 0;
}