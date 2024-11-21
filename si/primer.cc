#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct {
    char Name[20];          
    char Surname[20];       
    uint8_t Age;            
    uint16_t GPA;          
    uint8_t IsEmployed;     
} CompressedPerson;

int main() {
  
    CompressedPerson person;
    strncpy(person.Name, "Nastya", sizeof(person.Name) - 1);
    person.Name[sizeof(person.Name) - 1] = '\0';
    strncpy(person.Surname, "Tozikova", sizeof(person.Surname) - 1);
    person.Surname[sizeof(person.Surname) - 1] = '\0';
    person.Age = 29;
    person.GPA = (uint16_t)(3.55 * 100);
    person.IsEmployed = 1;
    printf("Name: %s\n", person.Name);
    printf("Surname: %s\n", person.Surname);
    printf("Age: %u\n", person.Age);
    printf("GPA: %.2f\n", person.GPA / 100.0);
    printf("Employed: %s\n", person.IsEmployed ? "Yes" : "No");

    return 0;
}
