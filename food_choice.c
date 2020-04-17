#include<stdio.h>
int main()
{
    int choice;
    printf("Enter a number from 1 to 5:\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("Food item - Veg Malpoa\nPrice - Rs 239");
        break;
        case 2: printf("Food item - Khichdi\nPrice - Rs 129");
        break;
        case 3: printf("Food item - Pav Bhaji\nPrice - Rs 79");
        break;
        case 4: printf("Food item - Chilli Cheese Toast\nPrice - Rs 99");
        break;
        case 5: printf("Food item - Ice Cream Sandwich\nPrice - Rs 149");
        break;
        default: printf("Please Enter a valid number...");
    }
    return 0;
}
