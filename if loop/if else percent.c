#include <stdio.h>

int main()
{
    int passing = 35, student_percentile ;
    printf("Enter student percentile :\n");
    scanf("%d",&student_percentile);
    
    {
        if (student_percentile >= passing)
        {
            printf("student pass the exam\n");
        }
        else
        {
            printf("Student Failed the exam\n");
        }

    }
} 