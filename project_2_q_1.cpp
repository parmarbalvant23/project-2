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

}
