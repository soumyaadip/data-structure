//soumyadip
//WAP to ask 1-9 any no and output is alphabetically

#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number between 0 to 9\n");
    scanf("%d", &number);
    switch (number)
    {
    case 0:{
        printf("Zero");
        break;
    }
    case 1:{
        printf("One");
        break;
    }
    case 2:{
        printf("Two");
        break;
    }
    case 3:{
        printf("Three");
        break;
    }
    case 4:{
        printf("Four");
        break;
    }
    case 5:{
        printf("Five");
        break;
    }
    case 6:{
        printf("Six");
        break;
    }
    case 7:{
        printf("Seven");
        break;
    }
    case 8:{
        printf("eight");
        break;
    }
    case 9:{
        printf("Nine");
        break;
    }
    default:{
    printf("Please enter a valid input");
        break;
        }
    }
   return 0; 
}
