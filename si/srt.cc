#include <stdio.h>
#include <string.h>

 struct person
{
    char Name[50];
    char Surname[50];
    int Age;
    float GPA;
    int IsEmployed;
};
int main(void)
{
        struct person nastya={"Nastya","Tozikova",29,3.55,1};
        printf("Name:%s\t Surname:%s\t Age:%d\n", nastya.Name,nastya.Surname,nastya.Age);
return 0;
}

