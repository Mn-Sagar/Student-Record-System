
/****************************************************************************
    Project: Student Record System
    Language Used: C
    Compiler: gcc
    IDE: Code::blocks
*****************************************************************************/
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include<time.h>
void time2();
void main_window();
int password();
int password2();
void editpassword();
void option_menu();
void welcome_menu ();
void window();
void drawRectangle();

void student_menu();
void help();
void about_project();

struct student
{
    char ID[40];
    char name[55];
    char gender[50];
    char birth_date[50];
    char nation[50];
    char religion[50];
    char father_name[50];
    char mother_name[50];
    char add1[200];
    char add2[200];
    char  class_session[50];
    char subject[50];
    char hall[100];
    char email[60];
    char  phone_no[50];
    /// SEMESTER SUBJECT INFO*/
    char exam[50];
    char held[50];
    char sub1[500];
    char sub2[500];
    char sub3[500];
    char sub4[500];
    char sub5[500];
    char sub6[500];
    char sub7[500];
    char sub8[500];
    char sub9[500];
    char sub10[500];
/// CREDITS INFO
    char offere[30];
    char earnee[30];
    char gpa[30];
    char letter[500];
    char gp[500];
    char total_point[10];
    char ygpa[10];
    char cgpa[10];
    char result[10];
};
///This will set the forground color for printing in a console window.
struct student stu;



COORD coord = {0,0}; ///set the cordinate to 0, 0 (top-left corner of window);
void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y; /// X and Y coordinates
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
///TIME MENU
void time2()
{

    gotoxy(5,10);
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");
    gotoxy(5,11);
    printf("*                                 *");
    gotoxy(5,12);

    printf("*   TODAY'S DATE:-                *");
    gotoxy(5,13);
    printf("*                                 *");
    gotoxy(5,14);
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");

    gotoxy(90,10);
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");
    gotoxy(90,11);
    printf("*                                 *");
    gotoxy(90,12);
    printf("*   CURRENT TIME:-                *");
    gotoxy(90,13);
    printf("*                                 *");
    gotoxy(90,14);
    printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");

    char buff[100];
    time_t now = time (0);
    gotoxy(25,12);
    strftime (buff, 100, " %Y-%m-%d  ", localtime (&now));
    printf ("%s\n", buff);
    gotoxy(110,12);
    strftime (buff, 100, " %H:%M:%S.000", localtime (&now));
    printf ("%s\n", buff);
}




void option_menu()
{
    system("cls");

    window();
    drawRectangle();

        time2();
        //SetColor(90);
    int choice;
    int x = 60;
    while(1)
    {

        gotoxy(25,18);
        printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");
        gotoxy(25,19);
        printf("*                                SELECT USER                                    *");
        gotoxy(25,20);
        printf("*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*");
        gotoxy(x,23);printf("1. ADMINISTRATOR ");
        gotoxy(x,25);printf("2. STUDENT  ");
        gotoxy(x,27);printf("3. ABOUT ");
        gotoxy(x,29);printf("4. EXIT  ");
        gotoxy(x,31);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            password2();
            break;
        case 2:
            student_menu();
            break;
        case 3:
            help();
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
        }
    }
}

void drawRectangle()
{
    int i, j;
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 132; i++)
    {
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(132,0);
    printf("%c",187);
    for(i = 1; i < 50; i++)
    {
        gotoxy(132, i);
        if(i == 7)
        {
            printf("%c",185);
        }
        else
        {
            printf("%c",186);
        }
    }
    gotoxy(132, 50);
    printf("%c",188);
    for(i = 131; i > 0; i--)
    {
        gotoxy(i,50);
        if(i == 0)
        {
            printf("%c",202);
        }
        else
        {
            printf("%c",205);
        }
    }
    gotoxy(0,50);
    printf("%c",200);
    for(i = 49; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 7)
        {
            printf("%c",204);
        }
        else
        {
            printf("%c",186);
        }
    }

    for(i = 1; i <132; i++)
    {
        gotoxy(i,7);
        if(i == 0)
        {
            printf("%c",203);
        }
        else
        {
            printf("%c",205);
        }
    }

}
/// rectangle two

void drawRectangle2()
{
    int i, j;
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 132; i++)
    {
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(132,0);
    printf("%c",187);
    for(i = 1; i < 50; i++)
    {
        gotoxy(132, i);
        if(i == 7)
        {
            printf("%c",185);
        }
        else
        {
            printf("%c",186);
        }
    }
    gotoxy(132, 50);
    printf("%c",188);
    for(i = 131; i > 0; i--)
    {
        gotoxy(i,50);
        if(i == 35)
        {
            printf("%c",202);
        }
        else
        {
            printf("%c",205);
        }
    }
    gotoxy(0,50);
    printf("%c",200);
    for(i = 49; i > 0; i--)
    {
        gotoxy(0,i);
        if(i == 7)
        {
            printf("%c",204);
        }
        else
        {
            printf("%c",186);
        }
    }

    for(i = 1; i < 132; i++)
    {
        gotoxy(i,7);
        if(i == 35)
        {
            printf("%c",203);
        }
        else
        {
            printf("%c",205);
        }
    }

    for(i = 8; i < 50; i++)
    {
        gotoxy(35,i);
        printf("%c",186);
    }

}
///

void clearWindow()
{
    int i,j;
    for(i = 37; i < 132; i++)
    {
        for(j = 8; j < 50; j++)
        {
            gotoxy(i,j);
            printf(" ");
        }
    }
    return;
}

void window()
{
    //clearWindow();
    gotoxy(45,2);printf("WELCOME TO STUDENT RECORD SYSTEM");
    gotoxy(42,3);printf("Department Of Computer Science & Engineering");
    gotoxy(40,4);printf("University Of Chittagong, Chittagong, Bangladesh");
    gotoxy(51,5);printf("Estd.: 1966 ");
    gotoxy(45,24);
}
/// FINISH
void print_heading(const char st[])
{
    gotoxy(75,8);printf("SRS : %s",st);
}


void add_student()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp;
    fp = fopen("record","wb");
    if(fp == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }
    else
    {
        fflush(stdin);

        gotoxy(print,11);printf("Student ID         :");gets(stu.ID);
        //here you can conpare the id //
        gotoxy(print,12);printf("Student Name       :");gets(stu.name);
        gotoxy(print,13);printf("Gender             :");gets(stu.gender);
        gotoxy(print,14);printf("Birth Date         :");gets(stu.birth_date);
        gotoxy(print,15);printf("Nationality        :");gets(stu.nation);
        gotoxy(print,16);printf("Religion           :");gets(stu.religion);
        gotoxy(print,17);printf("Father name        :");gets(stu.father_name);
        gotoxy(print,18);printf("Mother name        :");gets(stu.mother_name);
        gotoxy(print,19);printf("Permanent Address  :");gets(stu.add1);
        gotoxy(print,20);printf("Present Address    :");gets(stu.add2);
        gotoxy(print,21);printf("Session            :");gets(stu.class_session);
        gotoxy(print,22);printf("Subject            :");gets(stu.subject);
        gotoxy(print,23);printf("Hall               :");gets(stu.hall);
        gotoxy(print,24);printf("Email              :");gets(stu.email);
        gotoxy(print,25);printf("Phone Number       :");gets(stu.phone_no);
        fwrite(&stu, sizeof(stu), 1, fp);
        gotoxy(40,27);
        printf("The record is sucessfully added");
    }
    fclose(fp);
    return;
}
void search_student()
{
    clearWindow();
    //system("cls");

    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record", "rb");
    while(fread(&stu,sizeof(stu),1,fp) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);
        printf("The record is Found");
        gotoxy(37,14);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,15);printf("|ID                | %s",stu.ID);
        gotoxy(37,16);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,17);printf("|Name              | %s",stu.name);
        gotoxy(37,18);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,19);printf("|Gender            | %s",stu.gender);
        gotoxy(37,20);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,21);printf("|Birth Date        | %s",stu.birth_date);
        gotoxy(37,22);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,23);printf("|Nationality       | %s",stu.nation);
        gotoxy(37,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,25);printf("|Religion          | %s",stu.religion);
        gotoxy(37,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,27);printf("|Father Name       | %s",stu.father_name);
        gotoxy(37,28);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,29);printf("|Mother Name       | %s",stu.mother_name);
        gotoxy(37,30);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,31);printf("|Permanent Address | %s",stu.add1);
        gotoxy(37,32);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,33);printf("|Present Address   | %s",stu.add2);
        gotoxy(37,34);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,35);printf("|Session           | %s",stu.class_session);
        gotoxy(37,36);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,37);printf("|Subject           | %s",stu.subject);
        gotoxy(37,38);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,39);printf("|Hall              | %s",stu.hall);
        gotoxy(37,40);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,41);printf("|Email             | %s",stu.email);
        gotoxy(37,42);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,43);printf("|Phone Number      | %s",stu.phone_no);
        gotoxy(37,44);printf("-----------------------------------------------------------------------------------------------");

    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp);
    return;
}
void mod_student()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp;
    fp = fopen("record","rb+");
    while(fread(&stu, sizeof(stu),1,fp) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
        gotoxy(print,12);printf("Student ID         :");gets(stu.ID);
        gotoxy(print,13);printf("Student Name       :");gets(stu.name);
        gotoxy(print,14);printf("Gender             :");gets(stu.gender);
        gotoxy(print,15);printf("Birth Date         :");gets(stu.birth_date);
        gotoxy(print,16);printf("Nationality        :");gets(stu.nation);
        gotoxy(print,17);printf("Religion           :");gets(stu.religion);
        gotoxy(print,18);printf("Father name        :");gets(stu.father_name);
        gotoxy(print,19);printf("Mother name        :");gets(stu.mother_name);
        gotoxy(print,20);printf("Permanent Address  :");gets(stu.add1);
        gotoxy(print,21);printf("Present Address    :");gets(stu.add2);
        gotoxy(print,22);printf("Session            :");gets(stu.class_session);
        gotoxy(print,23);printf("Subject            :");gets(stu.subject);
        gotoxy(print,24);printf("Hall               :");gets(stu.hall);
        gotoxy(print,25);printf("Email              :");gets(stu.email);
        gotoxy(print,26);printf("Phone Number       :");gets(stu.phone_no);
            fseek(fp,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp);
    return;
}
void delete_student()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp, *temp;
    fp = fopen("record","rb");
    temp = fopen("temp", "wb");
    while(fread(&stu, sizeof(stu),1,fp) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp);
        }
    }
    fclose(fp);
    fclose(temp);
    remove("record");
    rename("temp","record");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}
void help()
{
    system("cls");
    //window();
    //drawRectangle();
    gotoxy(5,4);
    printf("*~*~*~*~*~*~*~*~*~*~*WELCOME TO STUDENT RECORD SYSTEM*~*~*~*~*~*~*~*~*~*~*");
    gotoxy(10,6);
    printf("=>THIS PROJECT IS ABOUT STUDENT RECORD SYSTEM");

    gotoxy(10,8);
    printf("=>IN THIS PROJECT ADMINISTRATOR  CAN ADD STUDENT BIO DATA ");
    gotoxy(10,10);
    printf("=>AND RESULT INFORMATION DETAILS");
    gotoxy(10,12);
    printf("=>ADMINISTRATOR CAN SEARCH ,MODIFY & DELETE EXISTING RECORD	");
    gotoxy(10,14);
    printf("=>IN THIS PROJECT STUDENT CAN ALSO SEARCH HIS BIO DATA ");
    gotoxy(10,16);
    printf("=>RESULT INFORMAITON & COURSE CODE DETIALS ");
    gotoxy(8,19);
    printf("\nPRESS ANY KEY TO GO BACK...\n");
    getch();
    system("cls");
    window();
    drawRectangle();
    time2();
    return ;
}

///

void bio_window()
{
    //clearWindow();
    system("cls");
    system("color 1F");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD STUDENT");
        gotoxy(x,14);printf("2. SEARCH STUDENT");
        gotoxy(x,16);printf("3. MODIFY STUDENT RECORD");
        gotoxy(x,18);printf("4. DELETE STUDENT RECORD");
        gotoxy(x,20);printf("5. MAIN MENU");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_student();
            break;
        case 2:
            search_student();
            break;
        case 3:
            mod_student();
            break;
        case 4:
            delete_student();
            break;
        case 5:
            gotoxy(3,26);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}

void studentbio_search()
{

    //clearWindow();
    system("cls");
    system("color 1F");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. SEARCH STUDENT BIO DATA");
        gotoxy(x,14);printf("2. BACK");
        gotoxy(x,16);printf("3. EXIT");
        gotoxy(x,18);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            search_student();

            break;

        case 2:
            gotoxy(3,20);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;


        case 3:
            exit(0);
            break;
        default:
            break;
        }
    }
}

///RESULT INFORMATION PART
///*FIRST SEMESTER RESULT*/
void add_semester1()
{
    //system("cls");
    clearWindow();
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;

    FILE *fp1;
    fp1 = fopen("result1","wb");
    if(fp1 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);

    }
    else
    {
        fflush(stdin);
         gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf(" GRADE SHEET");
        gotoxy(64,14);printf("1st Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In: ");gets(stu.held);
        gotoxy(print,17);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,18);printf("Student Name : ");gets(stu.name);
        gotoxy(print,19);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,20);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,22);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,23);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,24);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,25);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,26);printf("|CSE 111   |  Introduction tO Computer                    | ");gets(stu.sub1);
        gotoxy(print,27);printf("|CSE 112   |  Introduction to Computer Systems Lab        | ");gets(stu.sub2);
        gotoxy(print,28);printf("|CSE 113   |  Discrete Mathematics                        | ");gets(stu.sub3);
        gotoxy(print,29);printf("|EEE 121   |  Introduction to Electrical Engineering      | ");gets(stu.sub4);
        gotoxy(print,30);printf("|EEE 122   |  Introduction to Electrical Engineering Lab  | ");gets(stu.sub5);
        gotoxy(print,31);printf("|MATH 131  |  Matrices, Vector Analyses and Geometry      | ");gets(stu.sub6);
        gotoxy(print,32);printf("|PHY 141   |  Heat and Thermodynamics,Structure           | ");gets(stu.sub7);
        gotoxy(print,33);printf("|          |  of Matter,waves and Oscillations            |");
        gotoxy(print,34);printf("|PHY 142   |  Heat and Thermodynamics,Structure           | ");gets(stu.sub8);
        gotoxy(print,35);printf("|          |  of Matter,waves and Oscillations lab        |");
        gotoxy(print,36);printf("|CHEM 161  |  Chemistry                                   | ");gets(stu.sub9);
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,41);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        fwrite(&stu, sizeof(stu), 1, fp1);
        gotoxy(40,43);
        printf("The record is sucessfully added");
    }

    fclose(fp1);
    return;
}
/// FIRST SEMESTER RESULT SEARCH OPTION/////
void search_semester1()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp1;
    fp1 = fopen("result1", "rb");
    while(fread(&stu,sizeof(stu),1,fp1) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf("GRADE SHEET");
        gotoxy(64,18);printf("1st Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In: %s",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(37,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,27);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,28);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,30);printf("|CSE 111   |  Introduction to Computer                    | %s",stu.sub1);
        gotoxy(37,31);printf("|CSE 112   |  Introduction to Computer Systems Lab        | %s",stu.sub2);
        gotoxy(37,32);printf("|CSE 113   |  Discrete Mathematics                        | %s",stu.sub3);
        gotoxy(37,33);printf("|EEE 121   |  Introduction to Electrical Engineering      | %s",stu.sub4);
        gotoxy(37,34);printf("|EEE 122   |  Introduction to Electrical Engineering Lab  | %s",stu.sub5);
        gotoxy(37,35);printf("|MATH 131  |  Matrices, Vector Analyses and Geometry      | %s",stu.sub6);
        gotoxy(37,36);printf("|PHY 141   |  Heat and Thermodynamics,Structure           | %s",stu.sub7);
        gotoxy(37,37);printf("|          |  of Matter,waves and Oscillations            |");
        gotoxy(37,38);printf("|PHY 142   |  Heat and Thermodynamics,Structure           | %s",stu.sub8);
        gotoxy(37,39);printf("|          |  of Matter,waves and Oscillations lab        |");
        gotoxy(37,40);printf("|CHEM 161  |  Chemistry                                   | %s",stu.sub9);
        gotoxy(37,41);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,43);printf("TOTAL CREDITS OFFERE :   %s",stu.offere);
        gotoxy(37,44);printf("TOTAL CREDITS EARNEE :   %s",stu.earnee);
        gotoxy(37,45);printf("GRADE POINT AVERAGE  :   %s",stu.gpa);
    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp1);
    return;
}
void mod_semester1()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp1;
    fp1 = fopen("result1","rb+");
    while(fread(&stu, sizeof(stu),1,fp1) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
                    gotoxy(69,12);printf("University Of Chittagong");
        gotoxy(71,13);printf("Chittagong,Bangladesh");
        gotoxy(65,14);printf("Department Of Computer Science & Engineering");
        gotoxy(79,15);printf(" GRADE SHEET");
        gotoxy(64,16);printf("1st Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,17);printf("Held In: ");gets(stu.held);
        gotoxy(print,19);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name : ");gets(stu.name);
        gotoxy(print,21);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,26);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,27);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,28);printf("|CSE 111   |  Introduction tO Computer                    | ");gets(stu.sub1);
        gotoxy(print,29);printf("|CSE 112   |  Introduction to Computer Systems Lab        | ");gets(stu.sub2);
        gotoxy(print,30);printf("|CSE 113   |  Discrete Mathematics                        | ");gets(stu.sub3);
        gotoxy(print,31);printf("|EEE 121   |  Introduction to Electrical Engineering      | ");gets(stu.sub4);
        gotoxy(print,32);printf("|EEE 122   |  Introduction to Electrical Engineering Lab  | ");gets(stu.sub5);
        gotoxy(print,33);printf("|MATH 131  |  Matrices, Vector Analyses and Geometry      | ");gets(stu.sub6);
        gotoxy(print,34);printf("|PHY 141   |  Heat and Thermodynamics,Structure           | ");gets(stu.sub7);
        gotoxy(print,35);printf("|          |  of Matter,waves and Oscillations            | ");
        gotoxy(print,36);printf("|PHY 142   |  Heat and Thermodynamics,Structure           | ");gets(stu.sub8);
        gotoxy(print,37);printf("|          |  of Matter,waves and Oscillations lab        |");
        gotoxy(print,38);printf("|CHEM 161  |  Chemistry                                   | ");gets(stu.sub9);
        gotoxy(print,39);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,41);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,42);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,43);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
            fseek(fp1,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp1);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp1);
    return;
}
void delete_semester1()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp1, *temp1;
    fp1 = fopen("record","rb");
    temp1 = fopen("temp", "wb");
    while(fread(&stu, sizeof(stu),1,fp1) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp1);
        }
    }
    fclose(fp1);
    fclose(temp1);
    remove("result1");
    rename("temp1","result1");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window1()
{

    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 1st SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 1st SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  1st SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 1st SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester1();
            break;
        case 2:
            search_semester1();
            break;
        case 3:
            mod_semester1();
            break;
        case 4:
            delete_semester1();
            break;
        case 5:
            gotoxy(3,28);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*SECOND SEMESTER RESULT*/
void add_semester2()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp2;
    fp2 = fopen("result2","wb");
    if(fp2 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf(" GRADE SHEET");
        gotoxy(64,14);printf("2nd Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In: ");gets(stu.held);
        gotoxy(print,18);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,19);printf("Student Name : ");gets(stu.name);
        gotoxy(print,20);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,21);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,23);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,24);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,25);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|CSE 211   |Structured Programming Language               | ");gets(stu.sub1);
        gotoxy(print,28);printf("|CSE 212   |Structured Programming Language Lab           | ");gets(stu.sub2);
        gotoxy(print,29);printf("|EEE 221   |Basic Electronic Devices & Circuits           | ");gets(stu.sub3);
        gotoxy(print,30);printf("|EEE 222   |Basic Electronic Devices & Circuits Lab       | ");gets(stu.sub4);
        gotoxy(print,31);printf("|PHY 241   |Electromagnetism, Optics & Modern Physics     | ");gets(stu.sub5);

        gotoxy(print,32);printf("|PHY 242   |Electromagnetism, Optics & Modern Physics Lab | ");gets(stu.sub6);

        gotoxy(print,33);printf("|MATH 231  |Calculus & Differential Equations             | ");gets(stu.sub7);
        gotoxy(print,34);printf("|STAT 251  |Basic Statistics                              | ");gets(stu.sub8);
        gotoxy(print,35);printf("|STAT 252  |Basic Statistics Lab                          | ");gets(stu.sub9);
        gotoxy(print,36);printf("|ENG 271   |English                                       | ");gets(stu.sub10);
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,41);printf("TOTAL POINTS SECURED : ");gets(stu.total_point);
        gotoxy(print,42);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,43);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,44);printf("RESULT               : ");gets(stu.result);
        fwrite(&stu, sizeof(stu), 1, fp2);
        gotoxy(40,46);
        printf("The record is sucessfully added");
    }
    fclose(fp2);
    return;
}
/// SECOND SEMESTER RESULT SEARCH OPTION/////
void search_semester2()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp2;
    fp2 = fopen("result2", "rb");
    while(fread(&stu,sizeof(stu),1,fp2) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(74,14);printf("University Of Chittagong");
        gotoxy(76,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf("GRADE SHEET");
        gotoxy(64,18);printf("2nd Semester B.Sc. Engineering Examination  %s",stu.exam);
        gotoxy(73,19);printf("Held In:- %s",stu.held);
        gotoxy(37,22);printf("Student ID    : %s",stu.ID);
        gotoxy(37,23);printf("Student Name  : %s",stu.name);
        gotoxy(37,24);printf("Session       : %s",stu.class_session);
        gotoxy(37,25);printf("Hall          : %s",stu.hall);
        gotoxy(37,28);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,29);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,30);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(37,31);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,32);printf("|CSE 211   |Structured Programming Language               |%s",stu.sub1);
        gotoxy(37,33);printf("|CSE 212   |Structured Programming Language Lab           |%s",stu.sub2);
        gotoxy(37,34);printf("|EEE 221   |Basic Electronic Devices & Circuits           |%s",stu.sub3);
        gotoxy(37,35);printf("|EEE 222   |Basic Electronic Devices & Circuits Lab       |%s",stu.sub4);
        gotoxy(37,36);printf("|PHY 241   |Electromagnetism, Optics & Modern Physics     |%s",stu.sub5);
        gotoxy(37,37);printf("|PHY 242   |Electromagnetism, Optics & Modern Physics Lab |%s",stu.sub6);
        gotoxy(37,38);printf("|MATH 231  |Calculus & Differential Equations             |%s",stu.sub7);
        gotoxy(37,39);printf("|STAT 251  |Basic Statistics                              |%s",stu.sub8);
        gotoxy(37,40);printf("|STAT 252  |Basic Statistics Lab                          |%s",stu.sub9);
        gotoxy(37,41);printf("|ENG 271   |English                                       |%s",stu.sub10);
        gotoxy(37,42);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,44);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,45);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,46);printf("TOTAL POINTS SECURED : %s",stu.total_point);
        gotoxy(37,47);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
        gotoxy(37,48);printf("YGPA                 : %s",stu.ygpa);
        gotoxy(37,49);printf("RESULT               : %s",stu.result);
    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp2);
    return;
}
void mod_semester2()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp2;
    fp2 = fopen("result2","rb+");
    while(fread(&stu, sizeof(stu),1,fp2) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(49,12);printf("University Of Chittagong");
        gotoxy(71,13);printf("Chittagong,Bangladesh");
        gotoxy(65,14);printf("Department Of Computer Science & Engineering");
        gotoxy(79,15);printf(" GRADE SHEET");
        gotoxy(64,16);printf("2nd Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,17);printf("Held In: ");gets(stu.held);
        gotoxy(print,19);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name : ");gets(stu.name);
        gotoxy(print,21);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured|");
        gotoxy(print,26);printf("|          |                                              |      |Grade |Point |             |");
        gotoxy(print,27);printf("----------------------------------------------------------------------------------------------");
        gotoxy(print,28);printf("|CSE 211   | Structured Programming Language              | ");gets(stu.sub1);
        gotoxy(print,29);printf("|CSE 212   | Structured Programming Language Lab          | ");gets(stu.sub2);
        gotoxy(print,30);printf("|EEE 221   | Basic Electronic Devices & Circuits          | ");gets(stu.sub3);
        gotoxy(print,31);printf("|EEE 222   | Basic Electronic Devices & Circuits Lab      | ");gets(stu.sub4);
        gotoxy(print,32);printf("|PHY 241   | Electromagnetism, Optics & Modern Physics    | ");gets(stu.sub5);
        gotoxy(print,33);printf("|PHY 242   | Electromagnetism, Optics & Modern Physics Lab| ");gets(stu.sub6);
        gotoxy(print,34);printf("|MATH 231  | Calculus & Differential Equations            | ");gets(stu.sub7);
        gotoxy(print,35);printf("|STAT 251  | Basic Statistics                             | ");gets(stu.sub8);
        gotoxy(print,36);printf("|STAT 252  | Basic Statistics Lab                         | ");gets(stu.sub9);
        gotoxy(print,38);printf("|ENG 271   | English                                      | ");gets(stu.sub10);
        gotoxy(print,39);printf("----------------------------------------------------------------------------------------------");
        gotoxy(print,41);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,42);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,43);printf("TOTAL POINTS SECURED : ");gets(stu.total_point);
        gotoxy(print,44);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,45);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,46);printf("RESULT               : ");gets(stu.result);

            fseek(fp2,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp2);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp2);
    return;
}
void delete_semester2()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp2, *temp2;
    fp2 = fopen("result2","rb");
    temp2 = fopen("temp2", "wb");
    while(fread(&stu, sizeof(stu),1,fp2) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp2);
        }
    }
    fclose(fp2);
    fclose(temp2);
    remove("result2");
    rename("temp2","result2");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window2()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 2nd SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 2nd SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  2nd SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 2nd SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester2();
            break;
        case 2:
            search_semester2();
            break;
        case 3:
            mod_semester2();
            break;
        case 4:
            delete_semester2();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*THIRD SEMESTER RESULT*/
void add_semester3()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp3;
    fp3 = fopen("result3", "wb");
    if(fp3 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf("GRADE SHEET");
        gotoxy(64,14);printf("3rd Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,18);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,19);printf("Student Name : ");gets(stu.name);
        gotoxy(print,20);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,21);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,26);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,27);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,28);printf("|CSE 300   | Project Based on C language                  |");gets(stu.sub1);
        gotoxy(print,29);printf("|CSE 311   | Data Structure                               |");gets(stu.sub2);
        gotoxy(print,30);printf("|CSE 312   | Data Structure Lab                           |");gets(stu.sub3);
        gotoxy(print,31);printf("|CSE 313   | Object-Oriented Programming Language         |");gets(stu.sub4);
        gotoxy(print,32);printf("|CSE 314   | Object-Oriented Programming Language Lab     |");gets(stu.sub5);
        gotoxy(print,33);printf("|EEE 321   | Digital Logic Design                         |");gets(stu.sub6);
        gotoxy(print,34);printf("|EEE 322   | Digital Logic Design Lab                     |");gets(stu.sub7);
        gotoxy(print,35);printf("|MATH 331  | Complex Variables, Laplace                   |");gets(stu.sub8);
        gotoxy(print,36);printf("|          | and Fourier Transformations                  |");
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE: ");gets(stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE: ");gets(stu.earnee);
        gotoxy(print,41);printf("GRADE POINT AVERAGE : ");gets(stu.gpa);
        fwrite(&stu, sizeof(stu), 1, fp3);
        gotoxy(40,43);
        printf("The record is sucessfully added");
    }
    fclose(fp3);
    return;
}
/// THIRD SEMESTER RESULT SEARCH OPTION/////
void search_semester3()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp3;
    fp3 = fopen("result3", "rb");
    while(fread(&stu,sizeof(stu),1,fp3) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf(" GRADE SHEET");
        gotoxy(64,18);printf("3rd Semester B.Sc. Engineering Examination ",stu.exam);
        gotoxy(78,19);printf("Held In:- ",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(37,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,27);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,28);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,30);printf("|CSE 300   |   Project Based on C language                |%s",stu.sub1);
        gotoxy(37,31);printf("|CSE 311   |   Data Structure                             |%s",stu.sub2);
        gotoxy(37,32);printf("|CSE 312   |   Data Structure Lab                         |%s",stu.sub3);
        gotoxy(37,33);printf("|CSE 313   |   Object-Oriented Programming Language       |%s",stu.sub4);
        gotoxy(37,34);printf("|CSE 314   |   Object-Oriented Programming Language Lab   |%s",stu.sub5);
        gotoxy(37,35);printf("|EEE 321   |   Digital Logic Design                       |%s",stu.sub6);
        gotoxy(37,36);printf("|EEE 322   |   Digital Logic Design Lab                   |%s",stu.sub7);
        gotoxy(37,37);printf("|MATH 331  |   Complex Variables, Laplace                 |%s",stu.sub8);
        gotoxy(37,38);printf("|          |   and Fourier Transformations                |");
        gotoxy(37,39);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,41);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,42);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,43);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
    }
    else
    {
        gotoxy(37,12);
        printf("Sorry, No record found in the database");
    }
    fclose(fp3);
    return;
}
void mod_semester3()
{
    clearWindow();
    // system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp3;
    fp3 = fopen("result3","rb+");
    while(fread(&stu, sizeof(stu),1,fp3) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(69,13);printf("University Of Chittagong");
        gotoxy(71,14);printf("Chittagong,Bangladesh");
        gotoxy(65,15);printf("Department Of Computer Science & Engineering");
        gotoxy(79,16);printf(" GRADE SHEET");
        gotoxy(64,17);printf("3rd Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,18);printf("Held In:- ");gets(stu.held);
        gotoxy(print,21);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,22);printf("Student Name : ");gets(stu.name);
        gotoxy(print,23);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,24);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,28);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,29);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,30);printf("|CSE 300   |  Project Based on C language                 | ");gets(stu.sub1);
        gotoxy(print,31);printf("|CSE 311   |  Data Structure                              |");gets(stu.sub2);
        gotoxy(print,32);printf("|CSE 312   |  Data Structure Lab                          |");gets(stu.sub3);
        gotoxy(print,33);printf("|CSE 313   |  Object-Oriented Programming Language        |");gets(stu.sub4);
        gotoxy(print,34);printf("|CSE 314   |  Object-Oriented Programming Language Lab    |");gets(stu.sub5);
        gotoxy(print,35);printf("|EEE 321   |  Digital Logic Design                        |");gets(stu.sub6);
        gotoxy(print,36);printf("|EEE 322   |  Digital Logic Design Lab                    |");gets(stu.sub7);
        gotoxy(print,37);printf("|MATH 331  |  Complex Variables, Laplace                  |");gets(stu.sub8);
        gotoxy(print,38);printf("|          |  and Fourier Transformations                 |");
        gotoxy(print,39);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,41);printf("TOTAL CREDITS OFFERE: ");gets(stu.offere);
        gotoxy(print,42);printf("TOTAL CREDITS EARNEE: ");gets(stu.earnee);
        gotoxy(print,43);printf("GRADE POINT AVERAGE : ");gets(stu.gpa);
            fseek(fp3,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp3);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp3);
    return;
}
void delete_semester3()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp3, *temp3;
    fp3 = fopen("result3","rb");
    temp3 = fopen("temp3", "wb");
    while(fread(&stu, sizeof(stu),1,fp3) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp3);
        }
    }
    fclose(fp3);
    fclose(temp3);
    remove("result3");
    rename("temp3","result3");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");

    return;
}

void main_window3()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 3rd SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 3rd SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  3rd SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 3rd SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester3();
            break;
        case 2:
            search_semester3();
            break;
        case 3:
            mod_semester3();
            break;
        case 4:
            delete_semester3();
            break;

        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
/// fourth semester result information
void add_semester4()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;

    FILE *fp4;
    fp4 = fopen("result4","wb");
    if(fp4 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf("GRADE SHEET");
        gotoxy(64,14);printf("4th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,18);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,19);printf("Student Name : ");gets(stu.name);
        gotoxy(print,20);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,21);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,23);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,24);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,25);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|CSE 400   |  Project based on Object-Oriented            | ");gets(stu.sub1);
        gotoxy(print,28);printf("|          |  Programming Language                        | ");
        gotoxy(print,29);printf("|CSE 411   |  Computer Algorithms                         | ");gets(stu.sub2);
        gotoxy(print,30);printf("|CSE 412   |  Computer Algorithms Lab                     | ");gets(stu.sub3);
        gotoxy(print,31);printf("|CSE 413   |  Database Systems                            | ");gets(stu.sub4);
        gotoxy(print,32);printf("|CSE 414   |  Database Systems Lab                        | ");gets(stu.sub5);
        gotoxy(print,33);printf("|CSE 415   |  Microprocessor & Micro Controllers          | ");gets(stu.sub6);
        gotoxy(print,34);printf("|CSE 416   |  Microprocessor & Micro Controllers Lab      | ");gets(stu.sub7);
        gotoxy(print,35);printf("|MATH 431  |  Numerical Analyses                          | ");gets(stu.sub8);
        gotoxy(print,36);printf("|STAT 451  |  Applied Statistics & Probability            | ");gets(stu.sub9);
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,41);printf("TOTAL POINTS SECURED : ");gets(stu.total_point);
        gotoxy(print,42);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,43);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,44);printf("RESULT               : ");gets(stu.result);
        fwrite(&stu, sizeof(stu), 1, fp4);
        gotoxy(40,46);
        printf("The record is sucessfully added");
    }
    fclose(fp4);
    return;
}
/// FOURTH SEMESTER RESULT SEARCH OPTION/////
void search_semester4()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp4;
    fp4 = fopen("result4", "rb");
    while(fread(&stu,sizeof(stu),1,fp4) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");

        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf("GRADE SHEET");
        gotoxy(64,18);printf("4th Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In:- %s",stu.held);
        gotoxy(37,21);printf("Studen ID    : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(37,25);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,26);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,27);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(37,28);printf("-----------------------------------------------------------------------------------------------");

        gotoxy(37,29);printf("|CSE 400   |  Project based on Object-Oriented Language   |%s",stu.sub1);
        gotoxy(37,30);printf("|CSE 411   |  Computer Algorithms                         |%s",stu.sub2);
        gotoxy(37,31);printf("|CSE 412   |  Computer Algorithms Lab                     |%s",stu.sub3);
        gotoxy(37,32);printf("|CSE 413   |  Database Systems                            |%s",stu.sub4);
        gotoxy(37,33);printf("|CSE 414   |  Database Systems Lab                        |%s",stu.sub5);
        gotoxy(37,34);printf("|CSE 415   |  Microprocessor & Micro Controllers          |%s",stu.sub6);
        gotoxy(37,35);printf("|CSE 416   |  Microprocessor & Micro Controllers Lab      |%s",stu.sub7);
        gotoxy(37,36);printf("|MATH 431  |  Numerical Analyses                          |%s",stu.sub8);
        gotoxy(37,37);printf("|STAT 451  |  Applied Statistics & Probability            |%s",stu.sub9);
        gotoxy(37,38);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,40);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,41);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,42);printf("TOTAL POINTS SECURED : %s",stu.total_point);
        gotoxy(37,43);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
        gotoxy(37,44);printf("YGPA                 : %s",stu.ygpa);
        gotoxy(37,45);printf("RESULT               : %s",stu.result);

    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp4);
    return;
}
void mod_semester4()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp4;
    fp4 = fopen("result4","rb+");
    while(fread(&stu, sizeof(stu),1,fp4) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(69,12);printf("University Of Chittagong");
        gotoxy(71,13);printf("Chittagong,Bangladesh");
        gotoxy(65,14);printf("Department Of Computer Science & Engineering");
        gotoxy(79,15);printf("GRADE SHEET");
        gotoxy(64,16);printf("4th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,17);printf("Held In:- ");gets(stu.held);
        gotoxy(print,19);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name : ");gets(stu.name);
        gotoxy(print,21);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,26);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,27);printf("-----------------------------------------------------------------------------------------------");

        gotoxy(print,28);printf("|CSE 400   | Project based on Object-Oriented             | ");gets(stu.sub1);
        gotoxy(print,29);printf("|          | Programming Language                         |");
        gotoxy(print,30);printf("|CSE 411   | Computer Algorithms                          | ");gets(stu.sub2);
        gotoxy(print,31);printf("|CSE 412   | Computer Algorithms Lab                      | ");gets(stu.sub3);
        gotoxy(print,32);printf("|CSE 413   | Database Systems                             | ");gets(stu.sub4);
        gotoxy(print,33);printf("|CSE 414   | Database Systems Lab                         | ");gets(stu.sub5);
        gotoxy(print,34);printf("|CSE 415   | Microprocessor & Micro Controllers           | ");gets(stu.sub6);
        gotoxy(print,35);printf("|CSE 416   | Microprocessor & Micro Controllers Lab       | ");gets(stu.sub7);
        gotoxy(print,36);printf("|MATH 431  | Numerical Analyses                           | ");gets(stu.sub8);
        gotoxy(print,37);printf("|STAT 451  | Applied Statistics & Probability             | ");gets(stu.sub9);
        gotoxy(print,38);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,40);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,41);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,42);printf("TOTAL POINTS SECURED : ");gets(stu.total_point);
        gotoxy(print,43);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,44);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,45);printf("RESULT               : ");gets(stu.result);
            fseek(fp4,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp4);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp4);
    return;
}
void delete_semester4()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp4, *temp4;
    fp4 = fopen("result4","rb");
    temp4 = fopen("temp4", "wb");
    while(fread(&stu, sizeof(stu),1,fp4) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp4);
        }
    }
    fclose(fp4);
    fclose(temp4);
    remove("result4");
    rename("temp4","result4");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window4()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 4th SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 4th SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  4th SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 4th SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester4();
            break;
        case 2:
            search_semester4();
            break;
        case 3:
            mod_semester4();
            break;
        case 4:
            delete_semester4();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*FIFTH SEMESTER RESULT*/
void add_semester5()
{
    clearWindow();
    // system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp5;
    fp5 = fopen("result5","wb");
    if(fp5 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf("GRADE SHEET");
        gotoxy(64,14);printf("5th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,17);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,18);printf("Student Name : ");gets(stu.name);
        gotoxy(print,19);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,20);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,22);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,23);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,24);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,25);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,26);printf("|CSE 500   | Project on Database Systems                  | ");gets(stu.sub1);
        gotoxy(print,27);printf("|CSE 511   | Operating Systems                            | ");gets(stu.sub2);
        gotoxy(print,28);printf("|CSE 512   | Operating Systems Lab                        | ");gets(stu.sub3);
        gotoxy(print,29);printf("|CSE 513   | Data Communication                           | ");gets(stu.sub4);
        gotoxy(print,30);printf("|CSE 514   | Data Communication  Lab                      | ");gets(stu.sub5);
        gotoxy(print,31);printf("|CSE 515   | Software Engineering & Information           | ");gets(stu.sub6);
        gotoxy(print,32);printf("|          | System Design                                | ");
        gotoxy(print,33);printf("|CSE 516   | Software Engineering & Information           | ");gets(stu.sub7);
        gotoxy(print,34);printf("|          | System Design Lab                            | ");
        gotoxy(print,35);printf("|CSE 517   | Computer Architecture                        | ");gets(stu.sub8);
        gotoxy(print,36);printf("|ECON 581  | Economics                                    | ");gets(stu.sub9);
        gotoxy(print,37);printf("|ACCO 591  | Basic Principles of Accounting & Management  | ");gets(stu.sub10);
        gotoxy(print,38);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,40);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,41);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,42);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        fwrite(&stu, sizeof(stu), 1, fp5);
        gotoxy(40,44);
        printf("The record is sucessfully added");
    }
    fclose(fp5);
    return;
}
/// FIFTH SEMESTER RESULT SEARCH OPTION/////
void search_semester5()
{
    clearWindow();
    //system("cls");gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp5;
    fp5 = fopen("result5", "rb");
    while(fread(&stu,sizeof(stu),1,fp5) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");

        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf("GRADE SHEET");
        gotoxy(64,18);printf("5th Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In:- %s",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(37,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,27);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,28);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");

        gotoxy(37,30);printf("|CSE 500   | Project on Database Systems                  |%s",stu.sub1);
        gotoxy(37,31);printf("|CSE 511   | Operating Systems                            |%s",stu.sub2);
        gotoxy(37,32);printf("|CSE 512   | Operating Systems  Lab                       |%s",stu.sub3);
        gotoxy(37,33);printf("|CSE 513   | Data Communication                           |%s",stu.sub4);
        gotoxy(37,34);printf("|CSE 514   | Data Communication Lab                       |%s",stu.sub5);
        gotoxy(37,35);printf("|CSE 515   | Software Engineering & Information           |%s",stu.sub6);
        gotoxy(37,36);printf("|          | System Design                                |");
        gotoxy(37,37);printf("|CSE 516   | Software Engineering & Information           |%s",stu.sub7);
        gotoxy(37,38);printf("|          | System Design Lab                            |");
        gotoxy(37,39);printf("|CSE 517   | Computer Architecture                        |%s",stu.sub8);
        gotoxy(37,40);printf("|CSE 581   | Economics                                    |%s",stu.sub9);
        gotoxy(37,41);printf("|CSE 591   | Basic Principles of Accounting & Management  |%s",stu.sub10);
        gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,43);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,44);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,45);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp5);
    return;
}
void mod_semester5()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp5;
    fp5 = fopen("result5","rb+");
    while(fread(&stu, sizeof(stu),1,fp5) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
             gotoxy(69,13);printf("University Of Chittagong");
        gotoxy(71,14);printf("Chittagong,Bangladesh");
        gotoxy(65,15);printf("Department Of Computer Science & Engineering");
        gotoxy(79,16);printf("GRADE SHEET");
        gotoxy(64,17);printf("5th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,18);printf("Held In:- ");gets(stu.held);
        gotoxy(print,21);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,22);printf("Student Name : ");gets(stu.name);
        gotoxy(print,23);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,24);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,28);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,29);printf("-----------------------------------------------------------------------------------------------");

        gotoxy(print,30);printf("|CSE 500   | Project on Database Systems                  | ");gets(stu.sub1);
        gotoxy(print,31);printf("|CSE 511   | Operating Systems                            | ");gets(stu.sub2);
        gotoxy(print,32);printf("|CSE 512   | Operating Systems Lab                        | ");gets(stu.sub3);
        gotoxy(print,33);printf("|CSE 513   | Data Communication                           | ");gets(stu.sub4);
        gotoxy(print,34);printf("|CSE 514   | Data Communication  Lab                      | ");gets(stu.sub5);
        gotoxy(print,35);printf("|CSE 515   | Software Engineering & Information           | ");gets(stu.sub6);
        gotoxy(print,36);printf("|          | System Design                                | ");
        gotoxy(print,37);printf("|CSE 516   | Software Engineering & Information           | ");gets(stu.sub7);
        gotoxy(print,38);printf("|          | System Design Lab                            | ");
        gotoxy(print,39);printf("|CSE 517   | Computer Architecture                        | ");gets(stu.sub8);
        gotoxy(print,40);printf("|ECON 581  | Economics                                    | ");gets(stu.sub9);
        gotoxy(print,41);printf("|ACCO 591  | Basic Principles of Accounting & Management  | ");gets(stu.sub10);
        gotoxy(print,42);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,44);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,45);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,46);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
            fseek(fp5,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp5);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp5);
    return;
}
void delete_semester5()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp5, *temp5;
    fp5 = fopen("result5","rb");
    temp5 = fopen("temp5", "wb");
    while(fread(&stu, sizeof(stu),1,fp5) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp5);
        }
    }
    fclose(fp5);
    fclose(temp5);
    remove("result5");
    rename("temp5","result5");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window5()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 5th SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 5th SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  5th SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 5th SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester5();
            break;
        case 2:
            search_semester5();
            break;
        case 3:
            mod_semester5();
            break;
        case 4:
            delete_semester5();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*SIXTH SEMESTER RESULT*/
void add_semester6()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp6;
    fp6 = fopen("result6","wb");
    if(fp6 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf(" GRADE SHEET");
        gotoxy(64,14);printf("6th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,17);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,18);printf("Student Name : ");gets(stu.name);
        gotoxy(print,19);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,20);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,22);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,23);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,24);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,25);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,26);printf("|CSE 600   |    Project on Software Engineering           |");gets(stu.sub1);
        gotoxy(print,27);printf("|          |    & Information System Design               |");
        gotoxy(print,28);printf("|CSE 611   |    Computer Interfacing and Peripherals      |");gets(stu.sub2);
        gotoxy(print,29);printf("|CSE 612   |    Computer Interfacing and Peripherals Lab  |");gets(stu.sub3);
        gotoxy(print,30);printf("|CSE 613   |    Computer Networking                       |");gets(stu.sub4);
        gotoxy(print,31);printf("|CSE 614   |    Computer Networking Lab                   |");gets(stu.sub5);
        gotoxy(print,32);printf("|CSE 615   |    Web Engineering                           |");gets(stu.sub6);
        gotoxy(print,33);printf("|CSE 616   |    Web Engineering Lab                       |");gets(stu.sub7);
        gotoxy(print,34);printf("|CSE 617   |    Theory of Computation                     |");gets(stu.sub8);
        gotoxy(print,35);printf("|EEE 621   |    Communication Engineering                 |");gets(stu.sub9);
        gotoxy(print,36);printf("|EEE 622   |    Communication Engineering Lab             |");gets(stu.sub10);
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);

        gotoxy(print,41);printf("TOTAL POINT SECURED  : ");gets(stu.total_point);
        gotoxy(print,42);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,43);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,44);printf("RESULT               : ");gets(stu.result);
        fwrite(&stu, sizeof(stu), 1, fp6);
        gotoxy(40,46);
        printf("The record is sucessfully added");
    }
    fclose(fp6);
    return;
}
/// SIXTH SEMESTER RESULT SEARCH OPTION/////
void search_semester6()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp6;
    fp6 = fopen("result6", "rb");
    while(fread(&stu,sizeof(stu),1,fp6) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf("GRADE SHEET");
        gotoxy(64,18);printf("6th Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In:- %s",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(37,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,27);printf("|Course No  |     Title                                   |Credit|Letter|Grade |Point Secured |");
        gotoxy(37,28);printf("|           |                                             |      |Grade |Point |              |");
        gotoxy(37,29);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,30);printf("|CSE 600    |  Project on Software Engineering            |%s",stu.sub1);
        gotoxy(37,31);printf("|           |  & Information System Design                |");
        gotoxy(37,32);printf("|CSE 611    |  Computer Interfacing and Peripherals       |%s",stu.sub2);
        gotoxy(37,33);printf("|CSE 612    |  Computer Interfacing and Peripherals Lab   |%s",stu.sub3);
        gotoxy(37,34);printf("|CSE 613    |  Computer Networking                        |%s",stu.sub4);
        gotoxy(37,35);printf("|CSE 614    |  Computer Networking Lab                    |%s",stu.sub5);
        gotoxy(37,36);printf("|CSE 615    |  Web Engineering                            |%s",stu.sub6);
        gotoxy(37,37);printf("|CSE 616    |  Web Engineering Lab                        |%s",stu.sub7);
        gotoxy(37,38);printf("|CSE 617    |  Theory of Computation                      |%s",stu.sub8);
        gotoxy(37,39);printf("|EEE 621    |  Communication Engineering                  |%s",stu.sub9);
        gotoxy(37,40);printf("|EEE 622    |  Communication Engineering Lab              |%s",stu.sub10);
        gotoxy(37,41);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,43);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,44);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,45);printf("TOTAL POINT SECURED  : %s",stu.total_point);
        gotoxy(37,46);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
        gotoxy(37,47);printf("YGPA                 : %s",stu.ygpa);
        gotoxy(37,48);printf("RESULT               : %s",stu.result);

    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp6);
    return;
}
void mod_semester6()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp6;
    fp6 = fopen("result6","rb+");
    while(fread(&stu, sizeof(stu),1,fp6) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(49,12);printf("University Of Chittagong");
        gotoxy(71,13);printf("Chittagong,Bangladesh");
        gotoxy(65,14);printf("Department Of Computer Science & Engineering");
        gotoxy(79,15);printf("GRADE SHEET");
        gotoxy(64,16);printf("6th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,17);printf("Held In:- ");gets(stu.held);
        gotoxy(print,19);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name : ");gets(stu.name);
        gotoxy(print,21);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |     Title                                    |Credit|Letter|Grade |Point Secured |");
        gotoxy(print,26);printf("|          |                                              |      |Grade |Point |              |");
        gotoxy(print,27);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,28);printf("|CSE 600   |   Project on Software Engineering            | ");gets(stu.sub1);
        gotoxy(print,29);printf("|          |   & Information System Design                |");
        gotoxy(print,30);printf("|CSE 611   |   Computer Interfacing and Peripherals       |");gets(stu.sub2);
        gotoxy(print,31);printf("|CSE 612   |   Computer Interfacing and Peripherals Lab   |");gets(stu.sub3);
        gotoxy(print,32);printf("|CSE 613   |   Computer Networking                        |");gets(stu.sub4);
        gotoxy(print,33);printf("|CSE 614   |   Computer Networking Lab                    |");gets(stu.sub5);
        gotoxy(print,34);printf("|CSE 615   |   Web Engineering                            |");gets(stu.sub6);
        gotoxy(print,35);printf("|CSE 616   |   Web Engineering Lab                        |");gets(stu.sub7);
        gotoxy(print,36);printf("|CSE 617   |   Theory of Computation                      |");gets(stu.sub8);
        gotoxy(print,37);printf("|EEE 621   |   Communication Engineering                  |");gets(stu.sub9);
        gotoxy(print,38);printf("|EEE 622   |   Communication Engineering Lab              |");gets(stu.sub10);
        gotoxy(print,39);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,41);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,42);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,43);printf("TOTAL POINT SECURED  : ");gets(stu.total_point);
        gotoxy(print,44);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,45);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,46);printf("RESULT               : ");gets(stu.result);
            fseek(fp6,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp6);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp6);
    return;
}
void delete_semester6()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp6, *temp6;
    fp6 = fopen("result6","rb");
    temp6 = fopen("temp6", "wb");
    while(fread(&stu, sizeof(stu),1,fp6) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp6);
        }
    }
    fclose(fp6);
    fclose(temp6);
    remove("result6");
    rename("temp6","result6");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window6()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 6th SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 6th SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  6th SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 6th SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester6();
            break;
        case 2:
            search_semester6();
            break;
        case 3:
            mod_semester6();
            break;
        case 4:
            delete_semester6();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*SEVENTH SEMESTER RESULT*/
void add_semester7()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp7;
    fp7 = fopen("result7","wb");
    if(fp7 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(69,10);printf("University Of Chittagong");
        gotoxy(71,11);printf("Chittagong,Bangladesh");
        gotoxy(65,12);printf("Department Of Computer Science & Engineering");
        gotoxy(79,13);printf(" GRADE SHEET");
        gotoxy(64,14);printf("7th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,17);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,18);printf("Student Name : ");gets(stu.name);
        gotoxy(print,19);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,20);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,22);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,23);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("CSE 700    | Project/ Thesis                  | ");gets(stu.sub1);
        gotoxy(print,26);printf("CSE 711    | Compilers                        | ");gets(stu.sub2);
        gotoxy(print,27);printf("CSE 712    | Compilers Lab                    | ");gets(stu.sub3);
        gotoxy(print,28);printf("CSE 713    | Artificial Intelligence          | ");gets(stu.sub4);
        gotoxy(print,29);printf("CSE 714    | Artificial Intelligence Lab      | ");gets(stu.sub5);
        gotoxy(print,30);printf("CSE 715    | Machine Learning                 | ");gets(stu.sub6);
        gotoxy(print,31);printf("CSE 716    | Machine Learning  Lab            | ");gets(stu.sub7);
        gotoxy(print,32);printf("CSE 717    | Option-I                         | ");gets(stu.sub8);
        gotoxy(print,33);printf("CSE 718    | Industrial Tour                  | ");gets(stu.sub9);
        gotoxy(print,34);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,36);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,37);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,38);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        fwrite(&stu, sizeof(stu), 1, fp7);
        gotoxy(40,40);
        printf("The record is sucessfully added");
    }
    fclose(fp7);
    return;
}
/// SEVENTH SEMESTER RESULT SEARCH OPTION/////
void search_semester7()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int print = 37;
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp7;
    fp7 = fopen("result7", "rb");
    while(fread(&stu,sizeof(stu),1,fp7) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf(" GRADE SHEET");
        gotoxy(64,18);printf("7th Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In:- %s",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,28);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,29);printf("|CSE 700   |  Project/ Thesis                 |%s ",stu.sub1);
        gotoxy(print,30);printf("|CSE 711   |  Compilers                       |%s ",stu.sub2);
        gotoxy(print,31);printf("|CSE 712   |  Compilers Lab                   |%s ",stu.sub3);
        gotoxy(print,32);printf("|CSE 713   |  Artificial Intelligence         |%s ",stu.sub4);
        gotoxy(print,33);printf("|CSE 714   |  Artificial Intelligence Lab     |%s ",stu.sub5);
        gotoxy(print,34);printf("|CSE 715   |  Machine Learning                |%s ",stu.sub6);
        gotoxy(print,35);printf("|CSE 716   |  Machine Learning  Lab           |%s ",stu.sub7);
        gotoxy(print,36);printf("|CSE 717   |  Option-I                        |%s ",stu.sub8);
        gotoxy(print,37);printf("|CSE 718   |  Industrial Tour                 |%s ",stu.sub9);
        gotoxy(print,38);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(37,40);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(37,41);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(37,42);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp7);
    return;
}
void mod_semester7()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp7;
    fp7 = fopen("result7","rb+");
    while(fread(&stu, sizeof(stu),1,fp7) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(69,12);printf("University Of Chittagong");
        gotoxy(71,13);printf("Chittagong,Bangladesh");
        gotoxy(65,14);printf("Department Of Computer Science & Engineering");
        gotoxy(79,15);printf(" GRADE SHEET");
        gotoxy(64,16);printf("7th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(78,17);printf("Held In:- ");gets(stu.held);
        gotoxy(print,19);printf("Student ID   : ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name : ");gets(stu.name);
        gotoxy(print,21);printf("Session      : ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall         : ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|CSE 700   |  Project/ Thesis                 | ");gets(stu.sub1);
        gotoxy(print,28);printf("|CSE 711   |  Compilers                       | ");gets(stu.sub2);
        gotoxy(print,29);printf("|CSE 712   |  Compilers Lab                   | ");gets(stu.sub3);
        gotoxy(print,30);printf("|CSE 713   |  Artificial Intelligence         | ");gets(stu.sub4);
        gotoxy(print,31);printf("|CSE 714   |  Artificial Intelligence Lab     | ");gets(stu.sub5);
        gotoxy(print,32);printf("|CSE 715   |  Machine Learning                | ");gets(stu.sub6);
        gotoxy(print,33);printf("|CSE 716   |  Machine Learning  Lab           | ");gets(stu.sub7);
        gotoxy(print,34);printf("|CSE 717   |  Option-I                        | ");gets(stu.sub8);
        gotoxy(print,35);printf("|CSE 718   |  Industrial Tour                 | ");gets(stu.sub9);
        gotoxy(print,36);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,38);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,39);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,40);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
            fseek(fp7,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp7);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp7);
    return;
}
void delete_semester7()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp7, *temp7;
    fp7 = fopen("result7","rb");
    temp7 = fopen("temp7", "wb");
    while(fread(&stu, sizeof(stu),1,fp7) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp7);
        }
    }
    fclose(fp7);
    fclose(temp7);
    remove("result7");
    rename("temp7","result7");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window7()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 7th SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 7th SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  7th SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 7th SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester7();
            break;
        case 2:
            search_semester7();
            break;
        case 3:
            mod_semester7();
            break;
        case 4:
            delete_semester7();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///*EIGTH SEMESTER RESULT*/
void add_semester8()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Add Record");
    int print = 37;
    FILE *fp8;
    fp8 = fopen("result8","wb");
    if(fp8 == NULL)
    {
        MessageBox(0,"Error in Opening file\nMake sure your file is not write protected","Warning",0);
    }
    else
    {
        fflush(stdin);
        gotoxy(49,10);printf("University Of Chittagong");
        gotoxy(51,11);printf("Chittagong,Bangladesh");
        gotoxy(45,12);printf("Department Of Computer Science & Engineering");
        gotoxy(54,13);printf(" GRADE SHEET");
        gotoxy(44,14);printf("8th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(53,15);printf("Held In:- ");gets(stu.held);
        gotoxy(print,18);printf("Student ID: ");gets(stu.ID);
        gotoxy(print,19);printf("Student Name: ");gets(stu.name);
        gotoxy(print,20);printf("Session: ");gets(stu.class_session);
        gotoxy(print,21);printf("Hall: ");gets(stu.hall);
        gotoxy(print,23);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,24);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,25);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,26);printf("|CSE 800   | Project/ Thesis                  | ");gets(stu.sub1);
        gotoxy(print,27);printf("|CSE 811   | Digital Image Processing         | ");gets(stu.sub2);
        gotoxy(print,28);printf("|CSE 812   | Digital Image Processing Lab     | ");gets(stu.sub3);
        gotoxy(print,29);printf("|CSE 813   | Computer Graphics                | ");gets(stu.sub4);
        gotoxy(print,30);printf("|CSE 814   | Computer Graphics Lab            | ");gets(stu.sub5);
        gotoxy(print,31);printf("|CSE 815   | Optical Fiber Communication      | ");gets(stu.sub6);
        gotoxy(print,32);printf("|CSE 816   | Optical Fiber Communication Lab  | ");gets(stu.sub7);
        gotoxy(print,33);printf("|CSE 817   | Option II                        | ");gets(stu.sub8);
        gotoxy(print,34);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,36);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,37);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,38);printf("TOTAL POINT SECURED  : ");gets(stu.total_point);
        gotoxy(print,39);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,40);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,41);printf("CGPA                 : ");gets(stu.cgpa);
        gotoxy(print,42);printf("RESULT               : ");gets(stu.result);
        fwrite(&stu, sizeof(stu), 1, fp8);
        gotoxy(40,45);
        printf("The record is sucessfully added");
    }
    fclose(fp8);
    return;
}
void search_semester8()
{
    clearWindow();
    // system("cls");
    window();
    drawRectangle2();
    print_heading("Search Record");
    char s_id[15];
    int print =37;
    int isFound = 0;
    gotoxy(37,10);
    printf("Enter ID to Search: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp8;
    fp8 = fopen("result8", "rb");
    while(fread(&stu,sizeof(stu),1,fp8) == 1)
    {
        if(strcmp(s_id,stu.ID) == 0)
        {
            isFound = 1;
            break;
        }
    }
    if(isFound == 1)
    {
        gotoxy(37,12);printf("The record is Found");
        gotoxy(69,14);printf("University Of Chittagong");
        gotoxy(71,15);printf("Chittagong,Bangladesh");
        gotoxy(65,16);printf("Department Of Computer Science & Engineering");
        gotoxy(79,17);printf(" GRADE SHEET");
        gotoxy(64,18);printf("8th Semester B.Sc. Engineering Examination %s",stu.exam);
        gotoxy(78,19);printf("Held In:- %s",stu.held);
        gotoxy(37,21);printf("Student ID   : %s",stu.ID);
        gotoxy(37,22);printf("Student Name : %s",stu.name);
        gotoxy(37,23);printf("Session      : %s",stu.class_session);
        gotoxy(37,24);printf("Hall         : %s",stu.hall);
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,28);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,29);printf("|CSE 800   | Project/ Thesis                  |%s",stu.sub1);
        gotoxy(print,30);printf("|CSE 811   | Digital Image Processing         |%s",stu.sub2);
        gotoxy(print,31);printf("|CSE 812   | Digital Image Processing Lab     |%s",stu.sub3);
        gotoxy(print,32);printf("|CSE 813   | Computer Graphics                |%s",stu.sub4);
        gotoxy(print,33);printf("|CSE 814   | Computer Graphics Lab            |%s",stu.sub5);
        gotoxy(print,34);printf("|CSE 815   | Optical Fiber Communication      |%s",stu.sub6);
        gotoxy(print,35);printf("|CSE 816   | Optical Fiber Communication Lab  |%s",stu.sub7);
        gotoxy(print,36);printf("|CSE 817   | Option II                        |%s",stu.sub8);
        gotoxy(print,37);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,39);printf("TOTAL CREDITS OFFERE : %s",stu.offere);
        gotoxy(print,40);printf("TOTAL CREDITS EARNEE : %s",stu.earnee);
        gotoxy(print,41);printf("TOTAL POINT SECURED  : %s",stu.total_point);
        gotoxy(print,42);printf("GRADE POINT AVERAGE  : %s",stu.gpa);
        gotoxy(print,43);printf("YGPA                 : %s",stu.ygpa);
        gotoxy(print,44);printf("CGPA                 : %s",stu.cgpa);
        gotoxy(print,45);printf("RESULT               : %s",stu.result);

    }
    else
    {
        gotoxy(37,14);
        printf("Sorry, No record found in the database");
    }
    fclose(fp8);
    return;
}
void mod_semester8()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Modify Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,10);
    printf("Enter ID to Modify: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp8;
    fp8 = fopen("result8","rb+");
    while(fread(&stu, sizeof(stu),1,fp8) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fflush(stdin);
            gotoxy(49,12);printf("University Of Chittagong");
        gotoxy(51,13);printf("Chittagong,Bangladesh");
        gotoxy(45,14);printf("Department Of Computer Science & Engineering");
        gotoxy(54,15);printf(" GRADE SHEET");
        gotoxy(44,16);printf("8th Semester B.Sc. Engineering Examination ");gets(stu.exam);
        gotoxy(53,17);printf("Held In:- ");gets(stu.held);
        gotoxy(print,19);printf("Student ID: ");gets(stu.ID);
        gotoxy(print,20);printf("Student Name: ");gets(stu.name);
        gotoxy(print,21);printf("Session: ");gets(stu.class_session);
        gotoxy(print,22);printf("Hall: ");gets(stu.hall);
        gotoxy(print,24);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,25);printf("|Course No |       Title                      | Credit|Letter Grade|Grade Point|Point Secured  ");
        gotoxy(print,26);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,27);printf("|CSE 800   | Project/ Thesis                  | ");gets(stu.sub1);
        gotoxy(print,28);printf("|CSE 811   | Digital Image Processing         | ");gets(stu.sub2);
        gotoxy(print,29);printf("|CSE 812   | Digital Image Processing Lab     | ");gets(stu.sub3);
        gotoxy(print,30);printf("|CSE 813   | Computer Graphics                | ");gets(stu.sub4);
        gotoxy(print,31);printf("|CSE 814   | Computer Graphics Lab            | ");gets(stu.sub5);
        gotoxy(print,32);printf("|CSE 815   | Optical Fiber Communication      | ");gets(stu.sub6);
        gotoxy(print,33);printf("|CSE 816   | Optical Fiber Communication Lab  | ");gets(stu.sub7);
        gotoxy(print,34);printf("|CSE 817   | Option II                        | ");gets(stu.sub8);
        gotoxy(print,35);printf("-----------------------------------------------------------------------------------------------");
        gotoxy(print,37);printf("TOTAL CREDITS OFFERE : ");gets(stu.offere);
        gotoxy(print,38);printf("TOTAL CREDITS EARNEE : ");gets(stu.earnee);
        gotoxy(print,39);printf("TOTAL POINT SECURED  : ");gets(stu.total_point);
        gotoxy(print,40);printf("GRADE POINT AVERAGE  : ");gets(stu.gpa);
        gotoxy(print,41);printf("YGPA                 : ");gets(stu.ygpa);
        gotoxy(print,42);printf("CGPA                 : ");gets(stu.cgpa);
        gotoxy(print,43);printf("RESULT               : ");gets(stu.result);
            fseek(fp8,-sizeof(stu), SEEK_CUR);
            fwrite(&stu,sizeof(stu), 1, fp8);
            isFound = 1;
            break;
        }
    }
    if(!isFound)
    {
        gotoxy(print, 14);
        printf("No Record Found");
    }
    fclose(fp8);
    return;
}
void delete_semester8()
{
    clearWindow();
    //system("cls");
    window();
    drawRectangle2();
    print_heading("Delete Record");
    char s_id[15];
    int isFound = 0, print = 37;
    gotoxy(37,12);
    printf("Enter ID to Delete: ");
    fflush(stdin);
    gets(s_id);
    FILE *fp8, *temp8;
    fp8 = fopen("result8","rb");
    temp8 = fopen("temp8", "wb");
    while(fread(&stu, sizeof(stu),1,fp8) == 1)
    {
        if(strcmp(s_id, stu.ID) == 0)
        {
            fwrite(&stu,sizeof(stu),1,temp8);
        }
    }
    fclose(fp8);
    fclose(temp8);
    remove("result8");
    rename("temp8","result8");
    gotoxy(37,14);
    printf("The record is sucessfully deleted");
    return;
}

void main_window8()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();
    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,12);printf("1. ADD 8th SEMESTER RESULT");
        gotoxy(x,14);printf("2. SEARCH 8th  SEMESTER RESULT");
        gotoxy(x,16);printf("3. MODIFY  8th SEMESTER RESULT ");
        gotoxy(x,18);printf("4. DELETE 8th SEMESTER RESULT ");
        gotoxy(x,20);printf("5. BACK  ");
        gotoxy(x,22);printf("6. EXIT");
        gotoxy(x,24);printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            add_semester8();
            break;
        case 2:
            search_semester8();
            break;
        case 3:
            mod_semester8();
            break;
        case 4:
            delete_semester8();
            break;
        case 5:
            gotoxy(3,27);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");
            return ;
            break;
            break;
        case 6:
            exit(0);
            break;
        default:
            break;
        }
    }
}


void result_window()
{
    system("cls");
    window();
    drawRectangle();
    int choice;
    int x = 25;
    while(1)
    {
        gotoxy(x,10);
        printf("1. ADD 1st SEMESTER RESULT");
        gotoxy(x,12);
        printf("2. ADD 2nd SEMESTER RESULT");
        gotoxy(x,14);
        printf("3. ADD 3rd SEMESTER RESULT ");
        gotoxy(x,16);
        printf("4. ADD 4th SEMESTER RESULT  ");
        gotoxy(x,18);
        printf("5. ADD 5th SEMESTER RESULT");
        gotoxy(x,20);
        printf("6. ADD 6th SEMESTER RESULT");
        gotoxy(x,22);
        printf("7. ADD 7th SEMESTER RESULT");
        gotoxy(x,24);
        printf("8. ADD 8th SEMESTER RESULT ");
        gotoxy(x,26);
        printf("9. BACK ");
        gotoxy(x,28);
        printf("10. EXIT");
        gotoxy(x,30);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            main_window1();
            break;
        case 2:
            main_window2();
            break;
        case 3:
            main_window3();
            break;
        case 4:
            main_window4();
            break;
        case 5:
            main_window5();
            break;
        case 6:
            main_window6();
            break;
        case 7:
            main_window7();
            break;
        case 8:
            main_window8();
            break;

        case 9:
            gotoxy(3,38);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            return ;
            break;
            break;
        case 10:
            exit(0);
            break;
        default:
            break;
        }
    }
}
void main_window()
{
    //clearWindow();
    system("cls");

    window();
    drawRectangle();
    int choice;
    int x = 25;
    while(1)
    {
        gotoxy(x,16);
        printf("1. STUDENT BIO DATA");
        gotoxy(x,18);
        printf("2. RESULT INFORMATION ");
        gotoxy(x,20);
        printf("3. CHANGE PASSWORD ");
        gotoxy(x,22);
        printf("4. MAIN MENU ");
        gotoxy(x,24);
        printf("5. EXIT  ");
        gotoxy(x,26);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            bio_window();
            break;
        case 2:
            result_window();
            break;
        case 3:
            editpassword();

            break;
        case 4:
            gotoxy(3,28);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            option_menu();
            return ;
            break;
        case 5:
            exit(0);
            break;
        default:
            break;
        }
    }
}



/// FINISH
void welcome_menu ()
{
    system("cls");
    window();
    drawRectangle();
    gotoxy(50,13);
    printf("SUBMITTED TO");
    gotoxy(45,15);
    printf("Dr.Mohammed Osiur Rahman");
    gotoxy(45,16);
    printf("Associate Professor");
    gotoxy(45,17);
    printf("Department Of Computer Science & Engineering");
    gotoxy(45,18);
    printf("University Of Chittagong");
    gotoxy(50,21);
    printf("SUBMITTED BY");
    gotoxy(45,23);
    printf("Md Naser Uddin Sagar");
    gotoxy(45,24);
    printf("ID:-14701013");
    gotoxy(45,26);
    printf("Md Najrul Islam");
    gotoxy(45,27);
    printf("ID:-14701085");
    gotoxy(45,29);
    printf("Sazzad Shuvo");
    gotoxy(45,30);
    printf("ID:-14701083");

    Sleep(10000);
}

///PASSWORD field
int password2()
{
    {
        system("cls");
         system("color 4B");

        char pass[15]= {0},check[15]= {0},ch;
        FILE *fpp;
        int i=0,j;
        gotoxy(15,1);
        printf("This is a password Protected Record System ");
        gotoxy(5,2);
        printf("If YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE...");
        getch();
        gotoxy(10,3);
        printf("::FOR SECURITY PURPOSE::");
        printf("::ONLY THREE TRIALS ARE ALLOWED::");
        for(j=0; j<3; j++)
        {
            i=0;
            printf("\n\n\tENTER THE PASSWORD:");
            pass[0]=getch();
            while(pass[i]!='\r')
            {
                if(pass[i]=='\b')
                {
                    i--;
                    printf("\b");
                    printf(" ");
                    printf("\b");
                    pass[i]=getch();
                }
                else
                {
                    printf("*");
                    i++;
                    pass[i]=getch();
                }
            }
            pass[i]='\0';
            fpp=fopen("SE","r");
            if (fpp==NULL)
            {
                printf("\nERROR WITH THE SYSTEM FILE...[FILE MISSING]\n");
                getch();
                return 1;
            }
            else
                i=0;
            while(1)
            {
                ch=fgetc(fpp);
                if(ch==EOF)
                {
                    check[i]='\0';
                    break;
                }
                check[i]=ch;
                i++;
            }
            if(strcmp(pass,check)==0)
            {
                printf("\n\n\tACCESS GRANTED...\n");
                system("color 4B");

                SetConsoleTitle("GM-05 - Student Record System");

                main_window();
                return 0;
            }
            else
            {
                printf("\n\n\tWRONG PASSWORD..\n\n\tACCESS DENIED...\n");
            }
        }
        printf("\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO GO BACK...");
        getch();
        system("cls");
        window();
        drawRectangle();

    }

}


int password()
{
    system("cls");
    char pass[15]= {0},check[15]= {0},ch;
    FILE *fpp;
    int i=0,j;
    printf("::FOR SECURITY PURPOSE::");
    printf("::ONLY THREE TRIALS ARE ALLOWED::");
    for(j=0; j<3; j++)
    {
        i=0;
        printf("\n\n\tENTER THE PASSWORD:");
        pass[0]=getch();
        while(pass[i]!='\r')
        {
            if(pass[i]=='\b')
            {
                i--;
                printf("\b");
                printf(" ");
                printf("\b");
                pass[i]=getch();
            }
            else
            {
                printf("*");
                i++;
                pass[i]=getch();
            }
        }
        pass[i]='\0';
        fpp=fopen("SE","r");
        if (fpp==NULL)
        {
            printf("\nERROR WITH THE SYSTEM FILE...[FILE MISSING]\n");
            getch();
            return 1;
        }
        else
            i=0;
        while(1)
        {
            ch=fgetc(fpp);
            if(ch==EOF)
            {
                check[i]='\0';
                break;
            }
            check[i]=ch;
            i++;
        }
        if(strcmp(pass,check)==0)
        {
            printf("\n\n\tACCESS GRANTED...\n");

            return 0;
        }
        else
        {
            printf("\n\n\tWRONG PASSWORD..\n\n\tACCESS DENIED...\n");
        }
    }
    printf("\n\n\t::YOU ENTERED WRONG PASSWORD::YOU ARE NOT ALLOWED TO ACCESS ANY FILE::\n\n\tPRESS ANY KEY TO GO BACK...");
    getch();
    return 1;
}
void editpassword()
{
    system("cls");
    printf("\n");
    char pass[15]= {0},confirm[15]= {0},ch;
    int choice,i,check;
    FILE *fp;
    fp=fopen("SE","rb");
    if(fp==NULL)
    {
        fp=fopen("SE","wb");
        if(fp==NULL)
        {
            printf("SYSTEM ERROR...");
            getch();
            return ;
        }
        fclose(fp);
        printf("\nSYSTEM RESTORED...\nYOUR PASSWORD IS 'ENTER'\n PRESS ENTER TO CHANGE PASSWORD\n\n");
        getch();
    }
    fclose(fp);
    check=password();
    if(check==1)
    {
        return ;
    }
    do
    {
        if(check==0)
        {
            i=0;
            choice=0;
            printf("\n\n\tENTER THE NEW PASSWORD:");
            fflush(stdin);
            pass[0]=getch();
            while(pass[i]!='\r')
            {
                if(pass[i]=='\b')
                {
                    i--;
                    printf("\b");
                    printf(" ");
                    printf("\b");
                    pass[i]=getch();
                }
                else
                {
                    printf("*");
                    i++;
                    pass[i]=getch();
                }
            }
            pass[i]='\0';
            i=0;
            printf("\n\tCONFIRM PASSWORD:");
            confirm[0]=getch();
            while(confirm[i]!='\r')
            {
                if(confirm[i]=='\b')
                {
                    i--;
                    printf("\b");
                    printf(" ");
                    printf("\b");
                    confirm[i]=getch();
                }
                else
                {
                    printf("*");
                    i++;
                    confirm[i]=getch();
                }
            }
            confirm[i]='\0';
            if(strcmp(pass,confirm)==0)
            {
                fp=fopen("SE","wb");
                if(fp==NULL)
                {
                    printf("\n\t\tSYSTEM ERROR");
                    getch();
                    return ;
                }
                i=0;
                while(pass[i]!='\0')
                {
                    ch=pass[i];
                    putc(ch,fp);
                    i++;
                }
                putc(EOF,fp);
                fclose(fp);
            }
            else
            {
                printf("\n\tTHE NEW PASSWORD DOES NOT MATCH.");
                choice=1;

            }

        }
    }
    while(choice==1);

    printf("\n\n\tPASSWORD CHANGED...\n\n\tPRESS ANY KEY TO GO BACK...");
    getch();
    system("cls");
    window();
    drawRectangle();
    return;
}

void searchresult_menu()
{
    system("cls");
    system("color F0");
    window();
    drawRectangle2();


    int choice;
    int x = 2;
    while(1)
    {
        gotoxy(x,14);
        printf("1. SEARCH 1st SEMESTER RESULT");
        gotoxy(x,16);
        printf("2. SEARCH 2nd SEMESTER RESULT ");
        gotoxy(x,18);
        printf("3. SEARCH 3rd SEMESTER RESULT  ");
        gotoxy(x,20);
        printf("4. SEARCH 4th SEMESTER RESULT  ");
        gotoxy(x,22);
        printf("5. SEARCH 5th SEMESTER RESULT  ");
        gotoxy(x,24);
        printf("6. SEARCH 6th SEMESTER RESULT  ");
        gotoxy(x,26);
        printf("7. SEARCH 7th SEMESTER RESULT  ");
        gotoxy(x,28);
        printf("8. SEARCH 8th SEMESTER RESULT  ");
        gotoxy(x,30);
        printf("9. BACK ");
        gotoxy(x,32);
        printf("10. EXIT  ");
        gotoxy(x,34);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            search_semester1();

            break;
        case 2:
            search_semester2();
            break;
        case 3:
            search_semester3();
            break;
        case 4:
            search_semester4();
            break;
        case 5:
            search_semester5();
            break;
        case 6:
            search_semester6();
            break;
        case 7:
            search_semester7();
            break;
        case 8:
            search_semester8();
            break;

        case 9:
            gotoxy(3,41);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            system("color 4B");

            return ;
            break;
            break;

        case 10:
            exit(0);
            break;
        default:
            break;
        }
    }
}
///finish password field


void student_menu()
{

    system("cls");
    window();
    drawRectangle();
    int choice;
    int x = 20;
    while(1)
    {
        gotoxy(x,16);
        printf("1. SEARCH STUDENT BIO DATA");
        gotoxy(x,18);
        printf("2. SEARCH RESULT INFORMATION ");
        gotoxy(x,20);
        printf("3. MAIN MENU ");
        gotoxy(x,22);
        printf("4. EXIT  ");
        gotoxy(x,27);
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            studentbio_search();

            break;
        case 2:
            searchresult_menu();

            break;

        case 3:
            gotoxy(3,30);
            printf("PRESS ANY KEY TO GO BACK...");
            getch();
            system("cls");
            window();
            drawRectangle();
            option_menu();
            return ;
            break;
        case 4:
            exit(0);
            break;
        default:
            break;
            }
    }
}


int main()
{


    system("color 4B");
    //welcome_menu ();
    option_menu();
    return 0;
}

