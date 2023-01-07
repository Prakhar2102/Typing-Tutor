#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
// Strucutre 1
struct final
{
    char name[30];
    float acc;
    int count;
    int wrong;
    int time;
    float wpm;
};

// Function1

int page()
{
    printf("----------------------------------------------------- \n");
    printf("\t Welcome To The Typing Tutor  \n");
    printf("\t     Made by Prakhar Jaiswal   \n \n");
    printf("----------------------------------------------------- \n");
    printf("\t 1. Start \n \t 2. Results \n \t 3. Exit \n");
    int a;
label1:
    printf("\tEnter Your Choice -> ");
    scanf("%d", &a);
    switch (a)
    {
    case (1):
        return a;
        break;
    case (2):
        return a;
        break;
    case (3):
        return a;
        break;
    default:
        printf("\tYou have Entered an invalid choice. \n");
        goto label1;
    }
}

// Function2

int page2()
{
    system("cls");
    int a;
    printf("----------------------------------------------------- \n");
    printf("\t Welcome To The Typing Tutor  \n");
    printf("\t     Made by Group - 4   \n \n");
    printf("----------------------------------------------------- \n");
    printf("\t Select a Level  \n");
    printf("\t 1. Easy \n \t 2. Medium \n \t 3. Hard \n");
label2:
    printf("\tEnter Your Choice -> ");
    scanf("%d", &a);
    switch (a)
    {
    case (1):
        return a;
        break;
    case (2):
        return a;
        break;
    case (3):
        return a;
        break;
    default:
        printf("\tYou have Entered an invalid choice. \n");
        goto label2;
    }
}

// Tutor

int main()
{
    system("cls");
    struct final p;
    p.count = 0;
    p.wrong = 0;
    FILE *fp1;
    FILE *fp2;
    time_t s1, s2;
    char a1[1000];
    char b1[1000];
    char c1[1000];
    char d1[1000];
    char e1[1000];
    char f1[1000];
    char g1[1000];
    char h1[1000];
    char i1[1000];
    char j1[1000];
    int data;

    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL)
    {
        printf("file2.txt file failed to open.");
    }
    else
    {
        fgets(a1, sizeof(a1), fp2);
        fgets(b1, sizeof(b1), fp2);
        fgets(c1, sizeof(c1), fp2);
        fgets(d1, sizeof(d1), fp2);
        fgets(e1, sizeof(e1), fp2);
        fgets(f1, sizeof(f1), fp2);
        fgets(g1, sizeof(g1), fp2);
        fgets(h1, sizeof(h1), fp2);
        fgets(i1, sizeof(i1), fp2);
        fgets(j1, sizeof(j1), fp2);
        fclose(fp2);
    }

    int x1 = strlen(a1);
    int x2 = strlen(b1);
    int x3 = strlen(c1);
    int x4 = strlen(d1);
    int x5 = strlen(e1);
    int x6 = strlen(f1);
    int x7 = strlen(g1);
    int x8 = strlen(h1);
    int x9 = strlen(i1);
    int x10 = strlen(j1);

    char a2[x1];
    char b2[x2];
    char c2[x3];
    char d2[x4];
    char e2[x5];
    char f2[x6];
    char g2[x7];
    char h2[x8];
    char i2[x9];
    char j2[x10];

    int e = page();
    system("cls");
    switch (e)
    {
    case 2:
        fp1 = fopen("file1.txt", "r");
        printf("----------------------------------------------------- \n");
        printf("\t Welcome To The Typing Tutor  \n");
        printf("\t     Made by Group - 4   \n \n");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf(" \t Results of Previous User's are ->\n \n ");
        fflush(stdin);
        while (fread(&p, sizeof(p), 1, fp1))
        {
            printf(" \t Name is  %s.\n", p.name);
            printf("\t Acurracy is  %f.\n", p.acc);
            printf("\t Time Taken is  %d.\n", p.time);
            printf("\t Entered character right is %d,\n", p.count);
            printf("\t Entered Character wrong is %d,\n", p.wrong);
            printf("\t Word per minute is %f.\n", p.wpm);
            printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        }
        fclose(fp1);
        printf("Press Enter to Exit.\n");
        fflush(stdin);
        getch();
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf("\t Thanks for using our Typing Tutor. \n \n\t\t Have a nice day!\n ");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        return 0;
    case 3:
        printf("----------------------------------------------------- \n");
        printf("\t Welcome To The Typing Tutor  \n");
        printf("\t     Made by Group - 4   \n \n");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf("\t Thanks for visitng our Typing Tutor. \n \n\t\t Have a Good day!\n ");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");

        printf("Press Enter to Terminate.\n");
        fflush(stdin);
        getch();
        return 0;
    }
    int q = page2();
    system("cls");
    switch (q)
    {
    case 1:
        printf("----------------------------------------------------- \n");
        printf("\t Welcome To The Typing Tutor  \n");
        printf("\t     Made by Group - 4   \n \n");
        printf("---------------------------------------------------------------------------------------------------- \n\n");
        printf("\tPlease Enter Your Name -> ");
        fflush(stdin);
        gets(p.name);
        printf("\tYou have entered your name as -> ");
        puts(p.name);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts("---------------------------------------------------------------------------------------------------- \n\n");
        puts("So, Now Lets Begin -> \n");
        s1 = time(NULL);
        puts(a1);
        gets(a2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(b1);
        gets(b2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(c1);
        gets(c2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        s2 = time(NULL);
        for (int i = 0; i < x1 - 1; i++)
        {
            if (a1[i] == a2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x2 - 1; i++)
        {
            if (b1[i] == b2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x3 - 1; i++)
        {
            if (c1[i] == c2[i])
                p.count++;
            else
                p.wrong++;
        }
        p.time = s2 - s1;
        p.acc = (p.count*1.0 / (x1 + x2 + x3)*1.0) * 100.00;
        p.wpm = p.count * 60.0 / (p.time * 46.0);
        printf(" \t Results: \n \n");
        printf(" \t Time Taken: %d \n", p.time);
        printf(" \t Accuracy : %f. \n", p.acc);
        printf(" \t Words per Minute is :  %f.\n", p.wpm);
        printf(" \t Chrarcter entered %d. \n", p.count);
        printf(" \t Worng Entery : %d. \n", p.wrong);
        printf(" \t Your Data have been Stored.\n");
        fp1 = fopen("file1.txt", "a+");
        fwrite(&p, sizeof(p), 1, fp1);
        fclose(fp1);
        printf("Press Enter to Exit.\n");
        fflush(stdin);
        getch();
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf("\t Thanks for using our Typing Tutor. \n \n\t\t Have a nice day!\n ");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        return 0;
    case 2:
        printf("----------------------------------------------------- \n");
        printf("\t Welcome To The Typing Tutor  \n");
        printf("\t     Made by Group - 4   \n \n");
        printf("---------------------------------------------------------------------------------------------------- \n\n");
        printf("\tPlease Enter Your Name -> ");
        fflush(stdin);
        gets(p.name);
        printf("\tYou have entered your name as -> ");
        puts(p.name);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts("---------------------------------------------------------------------------------------------------- \n\n");
        puts("So, Now Lets Begin -> \n");
        s1 = time(NULL);
        puts(d1);
        gets(d2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(e1);
        gets(e2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(f1);
        gets(f2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        s2 = time(NULL);
        for (int i = 0; i < x1 - 1; i++)
        {
            if (d1[i] == d2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x2 - 1; i++)
        {
            if (e1[i] == e2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x3 - 1; i++)
        {
            if (f1[i] == f2[i])
                p.count++;
            else
                p.wrong++;
        }
        p.acc = (p.count*1.0 / (x4 + x5 + x6)*1.0) * 100;
        p.wpm = p.count * 60.0 / (p.time * 55.0);
        p.time = s2 - s1;
        printf(" \t Results: \n \n");
        printf(" \t Time Taken: %d \n", p.time);
        printf(" \t Accuracy : %f. \n", p.acc);
        printf(" \t Words per Minute is :  %f.\n", p.wpm);
        printf(" \t Chrarcter entered %d. \n", p.count);
        printf(" \t Worng Entery : %d. \n", p.wrong);
        printf(" \t Your Data have been Stored.\n");
        fp1 = fopen("file1.txt", "a+");
        fwrite(&p, sizeof(p), 1, fp1);
        fclose(fp1);
        printf("Press Enter to Exit.\n");
        fflush(stdin);
        getch();
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf("\t Thanks for using our Typing Tutor. \n \n\t\t Have a nice day!\n ");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        return 0;
    case 3:
        printf("----------------------------------------------------- \n");
        printf("\t Welcome To The Typing Tutor  \n");
        printf("\t     Made by Group - 4   \n \n");
        printf("---------------------------------------------------------------------------------------------------- \n\n");
        printf("\tPlease Enter Your Name -> ");
        fflush(stdin);
        gets(p.name);
        printf("\tYou have entered your name as -> ");
        puts(p.name);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts("---------------------------------------------------------------------------------------------------- \n\n");
        puts("So, Now Lets Begin -> \n");
        s1 = time(NULL);
        puts(g1);
        gets(g2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(h1);
        gets(h2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(i1);
        gets(i2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        puts(j1);
        gets(j2);
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        s2 = time(NULL);
        for (int i = 0; i < x1 - 1; i++)
        {
            if (g1[i] == g2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x2 - 1; i++)
        {
            if (h1[i] == h2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x3 - 1; i++)
        {
            if (i1[i] == i2[i])
                p.count++;
            else
                p.wrong++;
        }
        for (int i = 0; i < x3 - 1; i++)
        {
            if (j1[i] == j2[i])
                p.count++;
            else
                p.wrong++;
        }
        p.acc = (p.count*1.0 / (x7 + x8 + x9 + x10)*1.0) * 100;
        p.wpm = p.count * 60.0 / (p.time * 95.0);
        p.time = s2 - s1;
        printf(" \t Results: \n \n");
        printf(" \t Time Taken: %d \n", p.time);
        printf(" \t Accuracy : %f. \n", p.acc);
        printf(" \t Words per Minute is :  %f.\n", p.wpm);
        printf(" \t Chrarcter entered %d. \n", p.count);
        printf(" \t Worng Entery : %d. \n", p.wrong);
        printf(" \t Your Data have been Stored.\n");
        fp1 = fopen("file1.txt", "a+");
        fwrite(&p, sizeof(p), 1, fp1);
        fclose(fp1);
        printf("Press Enter to Exit.\n");
        fflush(stdin);
        getch();
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        printf("\t Thanks for using our Typing Tutor. \n \n\t\t Have a nice day!\n ");
        printf("\n---------------------------------------------------------------------------------------------------- \n\n");
        return 0;
    }
    system("cls");
}