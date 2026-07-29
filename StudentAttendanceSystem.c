#include <stdio.h>
#include <string.h>

#define MAX 100

struct Student
{
    int id;
    char name[50];
    int presentDays;
    int totalDays;
};

struct Student queue[MAX];
int front = -1, rear = -1;

void addStudent()
{
    if(rear == MAX - 1)
    {
        printf("Queue Full!\n");
        return;
    }

    if(front == -1)
        front = 0;

    rear++;

    printf("Enter Student ID: ");
    scanf("%d", &queue[rear].id);

    printf("Enter Student Name: ");
    scanf(" %[^\n]", queue[rear].name);

    queue[rear].presentDays = 0;
    queue[rear].totalDays = 0;

    printf("Student added successfully!\n");
}

void markAttendance()
{
    int id, choice, found = 0, i;

    printf("Enter Student ID: ");
    scanf("%d", &id);

    for(i = front; i <= rear; i++)
    {
        if(queue[i].id == id)
        {
            found = 1;

            printf("1. Present\n2. Absent\n");
            printf("Enter choice: ");
            scanf("%d", &choice);

            queue[i].totalDays++;

            if(choice == 1)
                queue[i].presentDays++;

            printf("Attendance Marked!\n");
            break;
        }
    }

    if(!found)
        printf("Student not found!\n");
}

void displayStudents()
{
    int i;

    if(front == -1)
    {
        printf("No students available.\n");
        return;
    }

    printf("\nID\tName\t\tPresent\tTotal\n");

    for(i = front; i <= rear; i++)
    {
        printf("%d\t%s\t\t%d\t%d\n",
               queue[i].id,
               queue[i].name,
               queue[i].presentDays,
               queue[i].totalDays);
    }
}

void attendancePercentage()
{
    int id, found = 0, i;
    float percent;

    printf("Enter Student ID: ");
    scanf("%d", &id);

    for(i = front; i <= rear; i++)
    {
        if(queue[i].id == id)
        {
            found = 1;

            if(queue[i].totalDays == 0)
            {
                printf("No attendance data!\n");
                return;
            }

            percent = (float)queue[i].presentDays /
                      queue[i].totalDays * 100;

            printf("Attendance Percentage = %.2f%%\n", percent);
            break;
        }
    }

    if(!found)
        printf("Student not found!\n");
}

void removeStudent()
{
    if(front == -1 || front > rear)
    {
        printf("Queue Empty!\n");
        return;
    }

    printf("Removed Student: %s\n", queue[front].name);

    front++;

    if(front > rear)
        front = rear = -1;
}

int main()
{
    int choice;

    do
    {
        printf("\n--- Student Attendance System (Queue) ---\n");
        printf("1. Add Student\n");
        printf("2. Mark Attendance\n");
        printf("3. Display Students\n");
        printf("4. Attendance Percentage\n");
        printf("5. Remove Student\n");
        printf("6. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                markAttendance();
                break;

            case 3:
                displayStudents();
                break;

            case 4:
                attendancePercentage();
                break;

            case 5:
                removeStudent();
                break;

            case 6:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 6);

    return 0;
}
