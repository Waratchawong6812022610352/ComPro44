#include <stdio.h>

int main() {
    char nameInitial = 'K';       // ตัวอักษรแรกของชื่อ
    int age = 18;                 // อายุ
    float weight = 47.9;          // น้ำหนัก
    char gender[] = "Female";     // เพศ

    printf("nameInitial = %c\n", nameInitial);
    printf("age = %d\n", age);
    printf("weight = %.2f\n", weight);
    printf("gender = %s\n", gender);

    return 0;
}