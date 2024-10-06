#include <stdio.h>

int main() {
    int tamil, english, maths, science, social;

    int total;
    printf("Enter marks for Tamil: ");
    scanf("%d", &tamil);
    
    printf("Enter marks for English: ");
    scanf("%d", &english);
    
    printf("Enter marks for Maths: ");
    scanf("%d", &maths);
    
    printf("Enter marks for Science: ");
    scanf("%d", &science);
    
    printf("Enter marks for Social: ");
    scanf("%d", &social);
     total=tamil+english +maths+science +social ;
    printf("Total marks:%d\n",total);

    
    if (tamil >= 50 && english >= 50 && maths >= 50 && science >= 50 && social >= 50) {
        printf("cleared\n");
    } else {
        printf("fail\n");
    }

    return 0;
}
