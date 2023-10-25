#include <stdio.h>

struct Person {
    char Name[20];
    int Age;
    int Sex;
    float Score;
};

int main() {
    Person A = {"Mai", 24, 'M', 99.99};
    Person B = {"Mon", 21, 'F', 87.60};

    printf("--| Person A Information |--\n");
    printf("Name : %s (%c)\n", A.Name, A.Sex);
    printf("Age : %d years old\n", A.Age);
    printf("Score : %.2f points\n", A.Score);

    printf("--| Person B Information |--\n");
    printf("Name : %s (%c)\n", B.Name, B.Sex);
    printf("Age : %d years old\n", B.Age);
    printf("Score : %.2f points\n", B.Score);

    return 0;
}