#include <stdio.h> 

int main() {
    char fio[100]; 

 
    printf("Введите ваше ФИО: ");

 
    fgets(fio, sizeof(fio), stdin);

    
    printf("Hello, World!\n");
    printf("Ваше ФИО: %s", fio);

    return 0;  
}
