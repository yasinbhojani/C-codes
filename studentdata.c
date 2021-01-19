//Write a program which create student structure which accept stud rollno ,student name, address ,subject marks ,percentage and display same on screen.
#include<stdio.h>
void printdata();
struct student
{
    int rollno;
    char name[30];
    char address[50];
    struct marks
    {
        int sub[5];
    }mrk;
    float totalmarks;
    float percentage;
}stu[5];

int main()
{
    int i;
    stu[0].totalmarks=0;
    printf("Enter student details : \n");
    printf("Enter student roll number  : ");
    scanf("%d", &stu[0].rollno);
    getchar();
    printf("Enter student name         : ");
    fgets(stu[0].name, sizeof(stu[0].name), stdin);
    printf("Enter student adress       : ");
    fgets(stu[0].address, sizeof(stu[0].address), stdin);
    
    for(i=0; i<5; i++)
    {    
        printf("  Enter subject %d marks    : ", i+1);
        scanf("%d", &stu[0].mrk.sub[i]);
    }
    for(i=0;i<5;i++)
    {
        stu[0].totalmarks=stu[0].totalmarks+stu[0].mrk.sub[i];
    }
    
    stu[0].percentage=(stu[0].totalmarks*100)/500;
    
    printdata();
    
    return 0;
}
void printdata()
{
    printf("\n\t\t~~~STUDENT INFO~~~\n\n");
    printf("Roll no. : %d\t\t", stu[0].rollno);
    printf("Name : %s\n", stu[0].name);
    printf("Address  : %s\n", stu[0].address);
    printf("Total marks : %.0f\t", stu[0].totalmarks);
    printf("Percentage  : %.2f\n", stu[0].percentage);
}