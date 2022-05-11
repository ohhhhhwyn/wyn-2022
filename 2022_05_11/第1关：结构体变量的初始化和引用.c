#include<stdio.h>
/*********Begin*********/
struct Student
{
    long number;
    char name[20];
    int score;
};
int main()
{
    struct Student s1;
    struct Student s2;
    scanf("%ld %s %d", &s1.number, &s1.name, &s1.score);
    scanf("%ld %s %d", &s2.number, &s2.name, &s2.score);
    if(s1.score > s2.score)
    {
        printf("%ld %s %d", s1.number, s1.name, s1.score);
    }
    else
    {
        printf("%ld %s %d", s2.number, s2.name, s2.score);
    }
    return 0;
}
/*********End*********/