#include <stdio.h>

// Define the structure to store student information
struct student {
    char name[50];
    int id;
    float grade;
};

int main() {
    int num_students;

    // Prompt the user to enter the number of students in the class
    printf("Enter the number of students in the class: ");
    scanf("%d", &num_students);

    // Define an array of structures to store the student information
    struct student students[num_students];

    // Loop through each student and prompt the user to enter their information
    for (int i = 0; i < num_students; i++) {
        printf("Enter information for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Grade: ");
        scanf("%f", &students[i].grade);
    }

    // Display the information of all the students
    printf("\nInformation for all students:\n");
    for (int i = 0; i < num_students; i++) {
        printf("Student %d:\n", i+1);
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Grade: %.2f\n", students[i].grade);
    }

    return 0;
}
