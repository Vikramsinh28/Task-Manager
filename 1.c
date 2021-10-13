#include<stdio.h>
#include<conio.h>
struct book 
{
    int id;
    char title[3];
    float price;
};

void main(){
   struct book b1;
   b1.id = 2233;
//    printf("Enter a string\n");
//    scanf("%s", b1.title);
   b1.title[] = {"c","d","e","d"};
   b1.price = 23.4;
   printf("%d %s %f",b1.id,b1.title,b1.price);
}
