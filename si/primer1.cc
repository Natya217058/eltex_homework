
#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct {
    char Name[50];          
    char Surname[50];       
    int Age;                
    float GPA;              
    int IsEmployed;         
} person;
int main(void) {
    person;
    person.Name="Nastya";
    person.Surname="Tozikova";
    person.Age=29;
    person.GTA=(3.55*100);
    person.IsEmployed=1
    printf("Name: %s\n", person.Name);
    printf("Surname: %s\n", person.Surname);
    printf("Age: %u\n", person.Age);
    printf("GPA: %.2f\n", person.GPA / 100.0);
    printf("Employed: %s\n", person.IsEmployed ? "Yes" : "No");
    return 0;
}
