#include<stdio.h>
int main()
{

    int mark;
    printf("Enter the Mark of the student:\n");
    scanf("%d",&mark);
    printf("%s",((mark<=100 && mark>=85)?"Grade A":((mark<85 && mark>=70)?"Grade B":
                ((mark<70 && mark>=55)?"Grade C":((mark<55 && mark>=40)?"Grade D":"Grade F")))));
    return 0;
}
