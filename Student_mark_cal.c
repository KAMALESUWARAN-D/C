#include <stdio.h>
void main()
{
    int s = 0, n = 0, i, j;
    printf("\nEnter the no of students:");
    scanf("%d", &n);
    struct student
    {
        int id[20], subject[50];
        char name[10];
    } student[20];
    for (i = 0; i < n; i++)
    {
        printf("\nEnter the student id:");
        scanf("%d", &student[i].id[i]);
        printf("\nEnter the student name:");
        scanf("%s", student[i].name);
        printf("\nEnter the no of subjects:");
        scanf("%d", &s);
        printf("\n**mark details**");
        for (j = 0; j < s; j++)
        {
            printf("\nEnter the subject %d mark:", j+1);
            scanf("%d", &student[i].subject[j]);
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("\nStudent %s Mark Details", student[i].name);
        for (j = 0; j < s; j++)
        {
            printf("\nsubject[%d] mark %d", j+1, student[i].subject[j]);
        }
    }
}
