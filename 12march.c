#include<stdio.h>
#include<conio.h>
void main()
{

    struct student
    {
        int rollno;
        char name[80];
        char section[80];
        char department[80];
        int totalmarks;
        float fees;

    };
    struct student stud1;

    printf("\nEnter the roll number of first student");
    scanf("%d",&stud1.rollno);
    printf("\nEnter the name of first student");
    scanf("%s",stud1.name);
    printf("\nEnter the section of first student");
    scanf("%s",stud1.section);
    printf("\nEnter the department of first student");
    scanf("%s",stud1.department);
    printf("\nEnter the fees of first student");
    scanf("%f",&stud1.fees);
    printf("\nEnter the total marks of first student");
    scanf("%d",&stud1.totalmarks);


     struct student stud2;

    printf("\nEnter the roll number of second student");
    scanf("%d",&stud2.rollno);
    printf("\nEnter the name of second student");
    scanf("%s",stud2.name);
    printf("\nEnter the section of second student");
    scanf("%s",stud2.section);
    printf("\nEnter the department of second student");
    scanf("%s",stud2.department);
    printf("\nEnter the fees of second student");
    scanf("%f",&stud2.fees);
    printf("\nEnter the total marks of second student");
    scanf("%d",&stud2.totalmarks);

     printf("\n********FIRST STUDENT DETAILS*********");
    printf("\nROLL NO=%d",stud1.rollno);
    printf("\nName=%s",stud1.name);
    printf("\nSection=%s",stud1.section);
    printf("\nDepartment=%s",stud1.department);
    printf("\nFees=%0.2f",stud1.fees);
    printf("\nTotal Marks=%d",stud1.totalmarks);

    printf("\n********SECOND STUDENT DETAILS*********");
    printf("\nROLL NO=%d",stud2.rollno);
    printf("\nName=%s",stud2.name);
    printf("\nSection=%s",stud2.section);
    printf("\nDepartment=%s",stud2.department);
    printf("\nFees=%0.2f",stud2.fees);
    printf("\nTotal Marks=%d",stud2.totalmarks);

    if(stud1.totalmarks>stud2.totalmarks)
    {


        printf("\nFirst Student got highest marks which is %d",stud1.totalmarks);
    }
    else
         {


        printf("\nSecond Student got highest marks which is %d",stud2.totalmarks);
    }
}
