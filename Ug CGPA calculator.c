#include<stdio.h>

float cal(int x){
    float A = 5, B = 4, C = 3, D = 2, F = 0;
    if (x>=70&&x<=100)
        return A;
    else if (x>=60&&x<=69)
        return B;
    else if (x>=50&&x<= 59)
        return C;
    else if (x>=40&&x<=49)
        return D;
    else
        return F;
}

int main(){
    float firs, sec, firr = 0, secc = 0;
    unsigned int unit, unitl=0, unitb, unitbl;
    unsigned int num;
    int score, scorel=0, scoreb, scorebl = 0;
    printf("This is a CGPA Calculator\n\n");
    do{
    printf("How many courses do you offer in this semester? ");
    scanf("%d",&num);
        }
    while(num <0);
    char course[100];
    for(int tim =1; tim <= num; tim++)
    {
        printf("\nWhat is the names of the courses? ");
        scanf("%s", course);
        printf("What did you score in the %s? ", course);
        scanf("%d", &score);
        score = cal(score);
        printf("What is the unit load of the course? ");
        scanf("%d", &unit);
        unitl = unitl + unit;
        firs = score * unit;
        firr += firs;
    }
    printf("\n\nThis is second semester section\n");
    do{
    printf("How many courses do you offer this semester? ");
    scanf("%d",&num);
        }
    while(num <0);
    for(int tam =1; tam <= num; tam++)
    {
        printf("\nWhat is the name of the course? ");
        scanf("%s", course);
        printf("What did you score in the %s? ", course);
        scanf("%d", &scoreb);
        scoreb = cal(scoreb);
        printf("What is the unit load of the course? ");
        scanf("%d", &unitb);
        unitbl = unitbl + unitb;
        sec = scoreb * unitb;
        secc += sec;
    }
    float nin = secc + firr;
    float min = unitbl + unitl;
    float total = nin /min;
    printf("The unit load is %.2f\nThe total load is %.2f and %.2f\n", min, secc, firr);
    printf("\n\nThe total calculation of your CGPA is %.2f\n", total);
    if(total>=4.50&&total <= 5.00)
        printf("Congratulations, You got \"1ST CLASS\". ");
    else if (total>=3.50&&total<=4.49)
        printf("Wow, You got \"2ND CLASS UPPER\". ");
    else if (total>=3.00&&total<=3.49)
        printf("You tried\nYou got \"2ND CLASS LOWER\".");
    else if (total>=2.00&&total<=2.99)
        printf("OMO, Your case na ON GOD.\nYou got \"3RD CLASS\".");
    else
        printf("If you are here, your case is critical\nWhat you got is either pass or fail\nAbeg comot my phone.");
}
