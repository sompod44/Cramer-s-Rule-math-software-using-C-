//Bismilahir Rahmanir Rahim
/*
	Creator : Sompod :)
	Date    : 01/05/2017
*/
#include<stdio.h>

int main()
{

    int a1,b1,c1,d1;
    int a2,b2,c2,d2;
    int a3,b3,c3,d3;
    int sompod;
    long int n,s1,s2,s3;
    double x,y,z;
    bdboss:
    printf("\n\t\t:::::::::::::WELCOME:::::::::::::\n");
    printf("\n\t\t<<<Cramer's rule(linear Equation) Math Software.>>>\n");
    printf("\n\t\t\t\t\t\tCopyright SOMPOD. Created Date:15/05/2017\n\n");

    printf("\nInput 1st Equation value : ");
    scanf("%d %d %d %d", &a1,&b1,&c1,&d1);
    printf("\nInput 2st Equation value : ");
    scanf("%d %d %d %d", &a2,&b2,&c2,&d2);
    printf("\nInput 3st Equation value : ");
    scanf("%d %d %d %d", &a3,&b3,&c3,&d3);

    n = ((a1*((b2*c3)-(b3*c2)))-(b1*((a2*c3)-(a3*c2)))+(c1*((a2*b3)-(a3*b2))));
    s1 = ((d1*((c3*b2)-(b3*c2)))-(b1*((c3*d2)-(d3*c2)))+(c1*((d2*b3)-(d3*b2))));
    s2 = ((a1*((c3*d2)-(d3*c2)))-(d1*((c3*a2)-(a3*c2)))+(c1*((d3*a2)-(a3*d2))));
    s3 = ((a1*((d3*b2)-(b3*d2)))-(b1*((d3*a2)-(a3*d2)))+(d1*((b3*a2)-(a3*b2))));
    x = (float)s1/n;
    y = (float)s2/n;
    z = (float)s3/n;

    printf("\n\nThe Result of X,Y,Z is : X=%0.2lf , Y=%0.2lf , Z=%0.2lf", x,y,z);

    printf("\n\n\t\t::.....THANK YOU USER FOR USING MY SOFTWARE.....::");

    printf("\n\nIF YOU WANT TO AGAIN RUN THIS PROGRAM ......");
    printf("\n\n\nThen press 1\n");
    scanf("%d" , &sompod);
    if(sompod==1)
    {
        system ("cls");
        goto bdboss;
    }


    return 0;
}

