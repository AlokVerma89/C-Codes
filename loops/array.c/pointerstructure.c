#include<stdio.h>
#include<string.h>
int main(){
    typedef struct person
    {
        int age;
        int weight;

    }person;
    person a;
    person*x=&a;
    (*x).age=4;
    (*x).weight=54;

    printf("%d\n",a.age);
    printf("%d",a.weight);

}