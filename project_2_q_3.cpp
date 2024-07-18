#include <stdio.h>

 main() 
 
{
    int score;
    char grade;

   
    printf("Enter the score out of 100: ");
    scanf("%d", &score);

    
    grade = (score >= 90) ? 'A'
           : (score >= 80) ? 'B'
           : (score >= 70) ? 'C'
           : (score >= 60) ? 'D'
           : (score >= 50) ? 'E'
           : 'F';

    
    printf("The corresponding grade for %d is: %c\n", score, grade);

  
    switch (grade) 
	{
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done.\n");
            break;
        case 'C':
            printf("Good job.\n");
            break;
        case 'D':
            printf("You passed, but you could do better.\n");
            break;
        case 'F':
            printf("Sorry, you failed.\n");
            break;
        default:
            printf("Invalid grade.\n");
    }

   
    if (grade >= 'A' && grade <= 'D') 
	{
        printf("Congratulations! You are eligible for the next level.\n");
    }
	else if (grade == 'F') 
	{
        printf("Please try again next time.\n");
    }

   
}
