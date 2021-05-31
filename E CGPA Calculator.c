#include<stdio.h>


float cal(int x){
    float A = 5;
    float B = 4;
    float C = 3;
    float D = 2;
    float F = 0;
   
  //This does the calculation
    if (x>=70&&x<=100)
    {
        return A;
    }
    else if (x>=60&&x<=69)
    {
        return B;
    }
    else if (x>=50&&x<= 59)
    {
        return C;
    }
    else if (x>=40&&x<=49)
    {
        return D;
    }
    else
    {
        return F;
    }
}


int main (){
    char name[10000];
    printf("Hi\nWhat is your first name? ");
    scanf("%s", name);
    printf("Hi %s\n", name);
    printf("This program helps you to calculate your G.P.\nThis is the first semester G.P. Calculator\nYou are offering six courses this semester and their course unit load\nThey are: \n1. GSP 101    2 unit load\n2. Gsp 111    2 unit load\n3. Mth 111    3 unit load\n4. Mth 121    3 unit load\n5. Chem 101   2 unit load\n6. Phy 121    3 unit load\n");
    //Defining the parameters that are used 
    unsigned int z;
    unsigned int y;
    unsigned int x;
    unsigned int w;
    unsigned int v;
    unsigned int u;
    
    //This is the section for math111 calculation.
    {
    do
    {
    printf("What was your score in Mth 111? ");
    scanf("%d", &z);
        }
    while (z>=100);
        z = cal(z);
        z = z * 3;
    }
    
    
    //This is the section for math121 calculation.
    
    
    {
    do
    {
    printf("What was your score in Mth 121? ");
    scanf("%d", &y);
        }
    while (y>=100);
        y = cal(y);
        y = y * 3;
    }
    
    
    //This is the section for chem121 calculation.
    
    {
    do
    {
    printf("What was your score in Chem 101? ");
    scanf("%d", &x);
        }
    while (x>=100);
        x = cal(x);
        x = x * 2;
    }
    
    
    //This is the section for phy124 calculation.
    
    {
    do
    {
    printf("What was your score in Phy 121? ");
    scanf("%d", &w);
        }
    while (w>=100);
        w = cal(w);
        w = w * 3;
    }
    
    
    
    //This is the section for gsp101 calculation.
    
    {
    do
    {
    printf("What was your score in Gsp 101? ");
    scanf("%d", &v);
        }
    while (v>=100);
        v = cal(v);
        v = v * 2;
    }
    
    
    
    //This is the section for gsp111 calculation.
    
    {
    do
    {
    printf("What was your score in Gsp 111? ");
    scanf("%d", &u);
        }
    while (u>=100);
        u = cal(u);
        u = u * 2;
    }
    //This is the calculation.
    float divisor = 15;
    float first = (u+v+w+x+y+z)/divisor;
    float firstsemester = first;
    printf("%s, your CGPA for the first semester is %.2f\n", name, firstsemester);
    
    
    //This is the section for the secound semester calculation.
    
    unsigned int zz;
    unsigned int yy;
    unsigned int xx;
    unsigned int ww;
    unsigned int vv;
    unsigned int uu;
    
    printf("  \nThis is the second semester G.P. Calculator\nYou are offering six courses this semester and their course unit load\nThey are: \n1. GSP 102    2 unit load\n2. Chem 112   2 unit load\n3. Mth 122    3 unit load\n4. Phy 116    2 unit load\n5. Chem 122   2 unit load\n6. Phy 124    3 unit load\n");
    
    //This is the section for chem112 calculation.
    {
    do
    {
    printf("What was your score in Chem 112? ");
    scanf("%d", &zz);
        }
    while (zz>=100);
        zz = cal(zz);
        zz = zz * 2;
    }
    
    
    //This is the section for math122 calculation.
    
    
    {
    do
    {
    printf("What was your score in Mth 122? ");
    scanf("%d", &yy);
        }
    while (yy>=100);
        yy = cal(yy);
        yy = yy * 3;
    }
    
    
    //This is the section for chem122 calculation.
    
    {
    do
    {
    printf("What was your score in Chem 122? ");
    scanf("%d", &xx);
        }
    while (xx>=100);
        xx = cal(xx);
        xx = xx * 2;
    }
    
    
    //This is the section for phy116 calculation.
    
    {
    do
    {
    printf("What was your score in Phy 116? ");
    scanf("%d", &ww);
        }
    while (ww>=100);
        ww = cal(ww);
        ww = ww * 2;
    }
    
    
    
    //This is the section for Phy124 calculation.
    
    {
    do
    {
    printf("What was your score in Phy 124? ");
    scanf("%d", &vv);
        }
    while (vv>=100);
        vv = cal(vv);
        vv = vv * 3;
    }
    
    
    
    //This is the section for gsp102 calculation.
    
    {
    do
    {
    printf("What was your score in Gsp 102? ");
    scanf("%d", &uu);
        }
    while (uu>=100);
        uu = cal(uu);
        uu = uu * 2;
    }
    //This is the calculation.
    float divide = 14;
    float secondsemester = (uu+vv+ww+xx+yy+zz)/divide;
    printf("%s, your CGPA for the second semester is %.2f", name, secondsemester);
    
    
    
    //This is the calcjlation for the total CGPA.
    float total = (u+v+w+x+y+z+uu+vv+ww+xx+yy+zz)/(divide + divisor);
    printf("\n\nThe total calculation of your CGPA is %.2f\n", total);
    if(total>=4.50&&total <= 5.00){
        printf("Congratulations, You got \"1ST CLASS\". ");
    }
    else if (total>=3.50&&total<=4.49){
        printf("Wow, You got \"2ND CLASS UPPER\". ");
    }
    else if (total>=3.00&&total<=3.49){
        printf("You tried\nYou got \"2ND CLASS LOWER\".");
    }
    else if (total>=2.00&&total<=2.99){
        printf("OMO, Your case na ON GOD.\nYou got \"3RD CLASS\".");
    }
    else{
        printf("If you are here, your case is critical\nWhat you got is either pass or fail\nAbeg comot my phone.");
    }
  } 
