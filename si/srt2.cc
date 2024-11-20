#include <stdio.h>
#include <string.h>

 struct person
{
    char Name[20];
    char Surname[20];
    uint8_t Age;
    uint16_t GPA;
    uint8_t IsEmployed;
};
int main(void)
{
        struct person nastya={"Nastya","Tozikova",29,3.55,1};
        printf("Name:%s\t Surname:%s\t Age:%d\n", nastya.Name,nastya.Surname,nastya.Age);
return 0;
}

