/*this program takes biodata from the user. thier full name, gender, and date of birth. it uses the nested structure type embedded into first structure is the second structure.*/
#include <stdio.h>

struct info //first structure
{
    char name[30];
    char gender[7];
    struct dob //second structure
    {
        int date;
        int month;
        int year;
    } stu[5];
} student[5];

int main()
{
    int i;

    printf("Enter the bio data : \n");
    //this loop takes all the data of the user to display later on.
    for (i = 0; i < 1; i++)
    {
        printf("Enter Name : ");
        fgets(student[i].name, 30, stdin); //using fgets for strings and words
        printf("Enter Gender : ");
        fgets(student[i].gender, 30, stdin);

        printf("Enter Date of Birth : \n");
        printf("Enter date : ");
        scanf("%d", &student[i].stu[i].date); //using scanf for integers
        printf("Enter month : ");
        scanf("%d", &student[i].stu[i].month);
        printf("Enter year : ");
        scanf("%d", &student[i].stu[i].year);
    }
    printf("\nDisplaying data : \n");
    //this loop displayes the data taken before.
    for (i = 0; i < 1; i++)
    {
        printf("Name :");
        puts(student[i].name); //using puts for strings and words
        printf("Gender :");
        puts(student[i].gender);
        printf("Date of Birth : %d/%d/%d", student[i].stu[i].date, student[i].stu[i].month, student[i].stu[i].year); //using printf for integers
    }
    return 0;
}