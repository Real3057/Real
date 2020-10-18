#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<string.h>
#define MAX 5000
struct loginn
{
    char fname[100];
    char lname[20];
    char username[20];
    char password[20];
};
struct NODE
{
    char data;
    struct NODE *next;
}*head;

typedef struct NODE node;
node *top = 0;

void push(int x)

{
    node *newnode;
    newnode = (node *)malloc(sizeof(node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void peek()
{
    if(top == NULL)
        {
            FILE *doc4;

    char a;

    doc4= fopen("advisor.txt","r");


    while(!feof(doc4))
    {

        a = fgetc(doc4);
        printf("%c",a);
    }
    printf("\n\n");
    int y;
    printf("0.Exit\n");

    scanf("%d",&y);
    if (y==0)
    {
        system("cls");
        Contact();

    }


        }
    else
{


        while(top!=NULL)

        {


            printf("%c",top->data);
            top=top->next;

        }
        printf("\n\n0.Exit\n\nEnter Number : ");
        int a;
            scanf("%d",&a);

            if(a==0)
            {


            system("cls");
            Contact();
            }

}

}
void logo()
{
    printf("--------------------------------------------------------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||               C O D E X                ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("------||                                        ||------\n");
    printf("--------------------------------------------------------\n");
}
void diulogo()
{
    printf("----------------------------------------------------------------------------------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||         Daffodil International University        ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("-----------------||                                                  ||-----------------\n");
    printf("----------------------------------------------------------------------------------------\n");
}
void ls()
{

    char x;
    printf(" \n\n 1. Login\t");
    printf("2. Sign Up \t");
    printf(" 3. Exit \n\n\n");



    printf("Enter Number = ");
    fflush(stdin);
    scanf("%s",&x);
    if (x=='1')
    {
        system("cls");
        logo();
        login();
    }

    else if (x=='2')
    {
        system("cls");
        signup();
    }
    else
    {
        exit(EXIT_SUCCESS);
    }

}
void login()
{
    char u[500],p[500];
    FILE *doc2;
    doc2= fopen("userinfo.txt","r");
    struct loginn log;
    printf("\n\nUser Name : ");
    fflush(stdin);
    gets(u);
    printf("\n\n");
    printf("Password : ");
    fflush(stdin);
    gets(p);

    while(fread(&log,sizeof(log),1,doc2))
    {

        if (strcmp(u,log.username)==0 && strcmp(p,log.password)==0)

        {
            system("cls");
            logo();
            Option();
        }
        else
        {
            system("cls");
            logo();

            printf("Username & password not match\n\n");
            login();

        }

    }
    fclose(doc2);
}
void signup()
{
    FILE *doc2;

    doc2= fopen("userinfo.txt","w");
    struct loginn log;
    logo();
    printf("User Name : ");
    fflush(stdin);
    gets(log.username);
    printf("\n");
    printf("Password : ");
    fflush(stdin);
    gets(log.password);


    fwrite(&log,sizeof(log),1,doc2);
    fclose(doc2);

    printf("Sign Up Successfully \n\n");

    printf("Press any key to Login.........\n");
    getch();
    system("cls");
    logo();
    login();


}
void loading()
{
    int i;
    printf("\n\tPLEASE WAIT FEW SECOUND ");
    for(i=10; i>=0; i--)
    {
        printf(" %d Sec",i);
        Sleep(500);
        system("cls");
        logo();
        printf("\n\tPLEASE WAIT FEW SECOUND ");

    }
    printf("\n\n");
    printf("\n\tPLEASE CLICK ANY KEY TO ENTER...... ");
    getch();
    system("cls");
}
void Calculator()
{

    printf("\n----------------------------------------------------\n               C A L C U L A T O R\n----------------------------------------------------\n\n");

    double sum,x,y;
    char z;
    printf("Enter Equation\n\n");
    fflush(stdin);
    scanf("%lf %c %lf",&x,&z,&y);
    if (z=='-')
    {
        sum=x-y;
        printf("%.2lf - %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z=='+')
    {
        sum=x+y;
        printf("%.2lf + %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z=='/')
    {
        sum=x/y;
        printf("%.2lf / %.2lf = %.2lf \n\n",x,y,sum);
    }
    else if (z== '*')
    {
        sum=x*y;
        printf("%.2lf * %.2lf = %.2lf \n\n",x,y,sum);
    }

    int a;
    printf("0.Exit\n");
    printf("1.Retry\n\n");

    printf("Enter Number = ");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        tools();
    }
    else if (a==1)
    {
        system("cls");
        Calculator();
    }
}

void Contact()
{
    printf("----------------------------------------------------\n              C O N T A C T   U S\n----------------------------------------------------\n\n");

    int a;
    printf(" 1. Acoount Office\t 2. Advisor \t 3. Exit\n\n");
    printf("Enter Number = ");
    fflush(stdin);
    scanf("%d",&a);
    if(a==1)
    {

        system("cls");

        printf("----------------------------------------------------\n      A C C O U N T   O F F I C E   I N F O\n----------------------------------------------------\n\n");
        int b;
        printf("MS. Taslima Akhter(Tusi)\nSenior Account Officer\nContact no : 01847140035\nEmail : Taslima_diu@daffodilvarsity.edu.bd\n\n\nMD. Saiful Islam\nAssistant Account Officer\nContact no : 01847140118 / 01717910377\nEmail : Saifulislam@daffodilvarsity.edu.bd\n\n\nM.AR. Rahman Dhaly\nAccount Officer\nContact no : 01811458896\nEmail : dhaly@daffodilvarsity.edu.bd\n\n\n\n0.Exit\n\n");
        printf("Enter Number = ");
        fflush(stdin);
        scanf("%d",&b);
        if (b==0)
        {
            system("cls");
            logo();
            Contact();
        }

    }
    else if (a==2)
    {
        system("cls");
        int c;
        FILE *doc4;

    doc4= fopen("advisor.txt","a");
        printf("----------------------------------------------------\n              A D V I S O R\n----------------------------------------------------\n\n");
        printf(" 1. Add Advisor Details\t 2. Chack Advisor Details\n\n");
        printf("Enter Number = ");
        fflush(stdin);
        scanf("%d",&c);
        if(c==1)
        {
            int i;


            char er[MAX];
            char take;

            printf("\nMy Name is : ");
            fflush(stdin);
            gets(er);
            fprintf(doc4,"Name    : %s\n",er);
            for(i=strlen(er); i>=0; i--)
            {
                take = er[i];
                push(take);
            }

            printf("\n");
            printf("Phone Number is : ");
            fflush(stdin);
            gets(er);
            fprintf(doc4,"Phone Number    : %s\n",er);
            for(i=strlen(er); i>=0; i--)
            {
                take = er[i];
                push(take);
            }
            printf("\n");

            printf("Email : ");
            fflush(stdin);
            gets(er);
            fprintf(doc4,"Email    : %s\n",er);
            for(i=strlen(er); i>=0; i--)
            {
                take = er[i];
                push(take);
            }

             printf("\n\nInformation added Successfully\n\n0.Exit\nEnter Number : ");

             int a;
            scanf("%d",&a);

            if(a==0)
            {


            system("cls");
            Contact();
            }


        }
        else
        {
            peek();
        }
    }
    else if(a==3)
    {
        system("cls");
        logo();
        Option();
    }
}

void Course()
{
    diulogo();
    int l, t;
    printf("Enter Level : ");
    scanf("%d",&l);
    printf("Enter Term  : ");
    scanf("%d",&t);
    printf("\n");
    if(l==1 && t==1)
    {
        printf("CSE112     ->               Computer Fundamentals                                            ->     Cr.H : 3\n");
        printf("MAT111     ->                 Basic Mathematics                                              ->     Cr.H : 3\n");
        printf("ENG113     ->     Basic Fundamental English and English Spoken                               ->     Cr.H : 3\n");
        printf("PHY113     ->                 Basic Physics                                                  ->     Cr.H : 3\n");
        printf("PHY114     ->                Basic Physics lab                                               ->     Cr.H : 1\n");
        printf("GED111     ->     History of Bangladesh and Bangla Language                                  ->     Cr.H : 3\n\n");
        printf("                               Total Credit                                                  ->           16\n");
    }
    else if(l==1 && t==2)
    {
        printf("MAT121    ->      Mathematics-II: Calculus, Complex Variable and Linear Algebra              ->     Cr.H : 3\n");
        printf("CSE122    ->             Programming and Problem Solving                                     ->     Cr.H : 2\n");
        printf("CSE123    ->           Programming and Problem Solving lab                                   ->     Cr.H : 2\n");
        printf("ENG123    ->               Writing and Comprehension                                         ->     Cr.H : 3\n");
        printf("CSE124    ->               Business Application Design                                       ->     Cr.H : 1\n");
        printf("GED121    ->                  Bangladesh Studies                                             ->     Cr.H : 3\n\n");
        printf("                                 Total Credit                                                ->           14\n");
    }
    else if(l==1 && t==3)
    {
        printf("CSE131    ->                   Discrete Mathematics                                          ->     Cr.H : 3\n");
        printf("CSE132    ->                    Electrical Circuits                                          ->     Cr.H : 1\n");
        printf("CSE133    ->                   Electrical Circuits Lab                                       ->     Cr.H : 2\n");
        printf("CSE134    ->                       Data Structure                                            ->     Cr.H : 2\n");
        printf("CSE135    ->                     Data Structure Lab                                          ->     Cr.H : 2\n");
        printf("CSE136    ->                    Software Project I                                           ->     Cr.H : 1\n");
        printf("GED131    ->                      Art of Living                                              ->     Cr.H : 3\n\n");
        printf("                                   Total Credit                                              ->           14\n");
    }
    else if(l==2 && t==1)
    {
        printf("MAT211    ->                    Engineering Mathematics                                      ->     Cr.H : 3\n");
        printf("CSE212    ->                       Basic Electronics                                         ->     Cr.H : 1\n");
        printf("CSE213    ->                     Basic Electronics Lab                                       ->     Cr.H : 2\n");
        printf("CSE214    ->                          Algorithms                                             ->     Cr.H : 2\n");
        printf("CSE215    ->                        Algorithms Lab                                           ->     Cr.H : 2\n");
        printf("CSE216    ->                      Software Project II                                        ->     Cr.H : 1\n");
        printf("ACT211    ->                 Financial and Managerial Accounting                             ->     Cr.H : 2\n\n");
        printf("                                    Total Credit                                             ->           13\n");
    }
    else if(l==2 && t==2)
    {
        printf("CSE221    ->                    Object Oriented Programming                                   ->     Cr.H : 2\n");
        printf("CSE222    ->                  Object Oriented Programming Lab                                 ->     Cr.H : 2\n");
        printf("STA221    ->                     Statistics and Probability                                   ->     Cr.H : 3\n");
        printf("CSE223    ->                       Digital Electronics                                        ->     Cr.H : 1\n");
        printf("CSE224    ->                     Digital Electronics Lab                                      ->     Cr.H : 2\n");
        printf("CSE225    ->                        Data Communication                                        ->     Cr.H : 3\n");
        printf("CSE226    ->                       Software Project III                                       ->     Cr.H : 1\n\n");
        printf("                                       Total Credit                                           ->           14\n");
    }
    else if(l==2 && t==3)
    {
        printf("CSE221    ->                   Microprocessor, Embedded System and LoT                        ->     Cr.H : 1\n");
        printf("CSE221    ->                 Microprocessor, Embedded System and LoT Lab                      ->     Cr.H : 2\n");
        printf("CSE221    ->                       Object Oriented Programming II                             ->     Cr.H : 1\n");
        printf("CSE221    ->                      Object Oriented Programming II Lab                          ->     Cr.H : 2\n");
        printf("CSE221    ->                             Numerical Methods                                    ->     Cr.H : 3\n");
        printf("CSE221    ->                         Math for Computer Science                                ->     Cr.H : 2\n");
        printf("CSE221    ->                            Software Project IV                                   ->     Cr.H : 1\n\n");
        printf("                                           Total Credit                                       ->           12\n");
    }
    else if(l==3 && t==1)
    {
        printf("CSE311    ->                            Database Management System                            ->     Cr.H : 2\n");
        printf("CSE312    ->                          Database Management System Lab                          ->     Cr.H : 2\n");
        printf("CSE313    ->                                  Computer Network                                ->     Cr.H : 1\n");
        printf("CSE314    ->                                Computer Network Lab                              ->     Cr.H : 2\n");
        printf("CSE315    ->                               Artificial intelligence                            ->     Cr.H : 1\n");
        printf("CSE316    ->                             Artificial intelligence Lab                          ->     Cr.H : 2\n");
        printf("CSE317    ->                                 software project V                               ->     Cr.H : 1\n\n");
        printf("                                                 Total Credit                                 ->           11\n");
    }
    else if(l==3 && t==2)
    {
        printf("CSE321    ->                      Data Mining and Machine Learning                            ->     Cr.H : 2\n");
        printf("CSE322    ->                    Data Mining and Machine Learning Lab                          ->     Cr.H : 2\n");
        printf("CSE323    ->                              Operating System                                    ->     Cr.H : 1\n");
        printf("CSE324    ->                            Operating System Lab                                  ->     Cr.H : 2\n");
        printf("CSE325    ->                         System Analysis and Design                               ->     Cr.H : 3\n");
        printf("ECO321    ->                                  Economics                                       ->     Cr.H : 2\n");
        printf("CSE326    ->                            Research and Innovation                               ->     Cr.H : 1\n\n");
        printf("                                             Total Credit                                     ->           13\n");
    }
    else if(l==3 && t==3)
    {
        printf("CSE331    ->                                 Compiler Design                                  ->     Cr.H : 2\n");
        printf("CSE332    ->                               Compiler Design Lab                                ->     Cr.H : 2\n");
        printf("CSE333    ->                               Software Engineering                               ->     Cr.H : 3\n");
        printf("CSE33     ->                                Pervasive Computing                               ->     Cr.H : 1\n");
        printf("CSE335    ->                  Pervasive Computing and Mobile App Development Lab              ->     Cr.H : 2\n");
        printf("CSE336    ->                                Software Project VI                               ->     Cr.H : 1\n\n");
        printf("                                               Total Credit                                   ->           11\n");
    }
    else if(l==4 && t==1)
    {
        printf("CSE411    ->                       Computer Architecture and Organization                     ->     Cr.H : 3\n");
        printf("CSE412    ->                                    Big Data and lot                              ->     Cr.H : 1\n");
        printf("CSE413    ->                                  Big Data and lot Lab                            ->     Cr.H : 2\n");
        printf("CSE414    ->                                     Web Engineering                              ->     Cr.H : 1\n");
        printf("CSE415    ->                                   Web Engineering Lab                            ->     Cr.H : 2\n\n");
        printf("                                                  Total Credit                                ->            9\n");
    }
    else if(l==4 && t==2)
    {
        printf("CSE421    ->                                    Computer Graphics                              ->     Cr.H : 1\n");
        printf("CSE422    ->                                  Computer Graphics Lab                            ->     Cr.H : 2\n");
        printf("CSE423    ->                                   Information Security                            ->     Cr.H : 3\n");
        printf("CSEXXX    ->                                         Elective I                                ->     Cr.H : 3\n");
        printf("CSE499    ->             Project / Internship (Phase I, to be completed in level-4 Term-3)     ->     Cr.H : 3\n\n");
        printf("                                                    Total Credit                               ->           12\n");
    }
    else if(l==4 && t==3)
    {
        printf("CSE498    ->                          Social and Professional Issues in Computing               ->     Cr.H : 3\n");
        printf("CSEXXX    ->                                          Elective II                               ->     Cr.H : 3\n");
        printf("CSE499    ->               Project / Internship (Phase II, continued from Level 4 Term 2)       ->     Cr.H : 3\n\n");
        printf("                                                    Total Credit                                ->            9\n");
    }
    else
    {
        printf("Level should be (1-4) & Term should be (1-3)                                 \n\n");
    }
    int a;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        Course();
    }
}
void Diu()
{
    diulogo();

    int gc,cc,lc,total,waiver,nt,s;
    printf("Input your semester: ");
    scanf("%d",&s);
    printf("\t%d semester",s);
    if(s==1)
    {
        gc=12;
        cc=3;
        lc=1;
    }
    else if(s==2)
    {
        gc=9;
        cc=2;
        lc=3;
    }
    else if(s==3)
    {
        gc=3;
        cc=6;
        lc=5;
    }
    else if(s==4)
    {
        gc=5;
        cc=3;
        lc=5;
    }
    else if(s==5)
    {
        gc=3;
        cc=6;
        lc=5;
    }
    else if(s==6)
    {
        gc=0;
        cc=7;
        lc=5;
    }
    else if(s==7)
    {
        gc=0;
        cc=4;
        lc=7;
    }
    else if(s==8)
    {
        gc=2;
        cc=6;
        lc=5;
    }
    else if(s==9)
    {
        gc=0;
        cc=6;
        lc=5;
    }
    else if(s==10)
    {
        gc=0;
        cc=5;
        lc=4;
    }
    else if(s==11)
    {
        gc=3;
        cc=7;
        lc=2;
    }
    else
    {
        gc=3;
        cc=6;
        lc=0;
    }

    total= (gc*3200)+(cc*4900)+(lc*5000);
    printf("\nYour total tuition fees(without waiver):\t%d\n",total);

    printf("\nEnter your waiver:\t");
    scanf("%d",&waiver);
    int w=(total*waiver)/100;
    nt= total-w;
    printf("\n\nYour tuition fees after waiver:\t%d\n",nt);
    printf("\nYour total semester cost:\t%d\n",nt+13500);
    printf("\nRegistration Fee:\t13500\n");
    printf("\n2nd payment(Mid):\t%d\n",nt/2);
    printf("\n3rd payment(Final):\t%d\n\n\n\n",nt/2);


    int a;
    printf("0.Exit\n");
    printf("1.Retry\n\n");
    printf("Enter Number = ");
    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        Diu();
    }
}
void info()
{
    diulogo();
    printf(" 1. Create Account \n 2. View all Account \n 3. exit\n\n");

    int x;

    printf("Enter Number = ");
    fflush(stdin);
    scanf("%d",&x);
    if (x==1)
    {
        system("cls");

        filecre();
    }

    else if (x==2)
    {
        system("cls");

        filered();
    }
    else if (x==3)
    {
        system("cls");
        logo();
        Option();
    }
    else
    {
        printf("Please enter (1-3)\n\n");
        scanf("%d",&x);
        if (x==1)
        {
            system("cls");

            filecre();
        }

        else if (x==2)
        {
            system("cls");

            filered();
        }
        else if (x==3)
        {
            system("cls");
            logo();
            Option();
        }
    }
    int z;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&z);
    if (z==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (z==1)
    {
        system("cls");

        info();
    }

}

void Option()
{
    int x;
    printf(" 1. Student Info\n");
    printf(" 2. DIU Payment System \n");
    printf(" 3. Course Details \n");
    printf(" 4. CGPA Count \n");
    printf(" 5. Contact Us \n");
    printf(" 6. Tools \n");
    printf(" 7. Logout \n");
    printf(" 8. Exit \n\n\n");
    printf("Enter Number = ");
    scanf("%d",&x);

    if (x==1)
    {
        system("cls");
        info();
    }
    else if (x==2)
    {
        system("cls");
        Diu();
    }
    else if (x==3)
    {
        system("cls");
        Course();
    }
    else if (x==4)
    {
        system("cls");
        cgpa();
    }
    else if (x==5)
    {
        system("cls");
        Contact();
    }
    else if (x==6)
    {
        system("cls");
        tools();
    }

    else if (x==7)
    {
        system("cls");
        logout();
    }

    else if (x==8)
    {
        exit(EXIT_SUCCESS);
    }

    else
    {
        printf("Enter between (1-8)\n\n");
        printf("Enter Number = ");
        scanf("%d",&x);

        if (x==1)
        {
            system("cls");
            info();
        }
        else if (x==2)
        {
            system("cls");
            Diu();
        }
        else if (x==3)
        {
            system("cls");
            Course();
        }
        else if (x==4)
        {
            system("cls");
            cgpa();
        }
        else if (x==5)
        {
            system("cls");
            Contact();
        }
        else if (x==6)
        {
            system("cls");
            tools();
        }

        else if (x==7)
        {
            system("cls");
            logout();
        }

        else if (x==8)
        {
            exit(EXIT_SUCCESS);
        }




    }


}

void filecre()
{
    diulogo();
    FILE *doc2;

    char x[1000];
    char b[500];
    char p[20];

    doc2= fopen("info.txt","a");

    printf("Enter your name :\n");
    fflush(stdin);
    gets(x);
    printf("\n");
    printf("Enter your ID :\n");
    fflush(stdin);
    gets(b);
    printf("\n");
    printf("Enter Section : \n");
    fflush(stdin);
    gets(p);
    fprintf(doc2,"Name    : %s \nID      : %s\nSection : %s\n\n",x,b,p);

    int y;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&y);
    if (y==0)
    {
        system("cls");
        info();

    }
    else if (y==1)
    {
        system("cls");

        filecre();
    }
}
void filered()
{

    FILE *doc2;

    char a;

    doc2= fopen("info.txt","r");


    while(!feof(doc2))
    {

        a = fgetc(doc2);
        printf("%c",a);
    }
    printf("\n\n");
    int y;
    printf("0.Exit\n");
    printf("1.Retry\n");

    scanf("%d",&y);
    if (y==0)
    {
        system("cls");
        info();

    }
    else if (y==1)
    {
        system("cls");

        filered();
    }

}

void cgpa()
{
    diulogo();
    int i, n;
    double sum=0, sgpa[13];
    printf("Enter Total Semester = ");
    scanf("%d",&n);
    if (n>=0 && n<13)
    {


        for(i=1; i<=n; i++)
        {
            printf("Semester %d =\t",i);
            scanf("%lf",&sgpa[i]);
        }
        for(i=1; i<=n; i++)
        {
            sum = sum + sgpa[i];
        }
    }
    else
    {
        printf("Enter Between 1-12\n\n");
    }
    printf("Total CGPA = %.2lf\n\n\n",sum/n);

    int a;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        logo();
        Option();
    }
    else if (a==1)
    {
        system("cls");
        cgpa();
    }
    else
    {
        printf("Enter between (0-1)\n\n");
        fflush(stdin);
        scanf("%d",&a);
        if (a==0)
        {
            system("cls");
            logo();
            Option();
        }
        else if (a==1)
        {
            system("cls");
            cgpa();
        }
    }

}

void tools()
{
    int x;
    printf("\n----------------------------------------------------\n               T O O L S\n----------------------------------------------------\n\n");

    printf(" 1. Calculator\n");
    printf(" 2. Calender \n");
    printf(" 3. Converter \n");
    printf(" 4. Exit \n\n\n");
    printf("Enter Number = ");
    fflush(stdin);
    scanf("%d",&x);

    if (x==1)
    {
        system("cls");
        Calculator();
    }
    else if (x==2)
    {
        system("cls");
        calender();
    }
    else if (x==3)
    {
        system("cls");
        converter();
    }
    else if (x==4)
    {
        system("cls");
        logo();
        Option();
    }
    else
    {
        printf("Enter between (1-4)\n\n");
        printf("Enter Number = ");
        fflush(stdin);
        scanf("%d",&x);

        if (x==1)
        {
            system("cls");
            Calculator();
        }
        else if (x==2)
        {
            system("cls");
        }
        else if (x==3)
        {
            system("cls");
        }
        else if (x==4)
        {
            system("cls");
            logo();
            Option();
        }

    }
}

void logout()
{
    logo();
    ls();
}

int dayNumber(int day, int month, int year)
{

    static int t[] = { 0, 3, 2, 5, 0, 3,
                       5, 1, 4, 6, 2, 4
                     };
    year -= month < 3;
    return (year + year / 4
            - year / 100
            + year / 400
            + t[month - 1] + day)
           % 7;
}
char* getMonthName(int monthNumber)
{
    char* month;

    switch (monthNumber)
    {
    case 0:
        month = "January";
        break;
    case 1:
        month = "February";
        break;
    case 2:
        month = "March";
        break;
    case 3:
        month = "April";
        break;
    case 4:
        month = "May";
        break;
    case 5:
        month = "June";
        break;
    case 6:
        month = "July";
        break;
    case 7:
        month = "August";
        break;
    case 8:
        month = "September";
        break;
    case 9:
        month = "October";
        break;
    case 10:
        month = "November";
        break;
    case 11:
        month = "December";
        break;
    }
    return month;
}
int numberOfDays(int monthNumber, int year)
{
    if (monthNumber == 0)
        return (31);


    if (monthNumber == 1)
    {

        if (year % 400 == 0
                || (year % 4 == 0
                    && year % 100 != 0))
            return (29);
        else
            return (28);
    }

    if (monthNumber == 2)
        return (31);

    if (monthNumber == 3)
        return (30);

    if (monthNumber == 4)
        return (31);

    if (monthNumber == 5)
        return (30);

    if (monthNumber == 6)
        return (31);

    if (monthNumber == 7)
        return (31);

    if (monthNumber == 8)
        return (30);

    if (monthNumber == 9)
        return (31);

    if (monthNumber == 10)
        return (30);

    if (monthNumber == 11)
        return (31);
}
void printCalendar(int year)
{
    printf("\n\n\n");
    printf("Calendar - %d\n\n", year);
    int days;

    int current = dayNumber(1, 1, year);

    int i;
    for (i = 0; i < 12; i++)
    {
        days = numberOfDays(i, year);

        printf("\n ------------%s-------------\n\n",
               getMonthName(i));

        printf(" Sun   Mon  Tue  Wed  Thu  Fri  Sat\n");

        int k;
        for (k = 0; k < current; k++)
            printf("     ");

        int j;
        for (j = 1; j <= days; j++)
        {
            printf("%5d", j);

            if (++k > 6)
            {
                k = 0;
                printf("\n");
            }
        }

        if (k)
            printf("\n");

        current = k;
    }

    return;
}

void calender()
{
    printf("\n----------------------------------------------------\n               C A L E N D E R\n----------------------------------------------------\n\n");
    int year;
    printf("Enter the year : ");
    fflush(stdin);
    scanf("%d",&year);

    printCalendar(year);
    printf("\n\n");
    int a;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&a);
    if (a==0)
    {
        system("cls");
        tools();
    }
    else if (a==1)
    {
        system("cls");
        calender();
    }
    else
    {
        printf("Enter between (0-1)\n\n");
        fflush(stdin);
        scanf("%d",&a);
        if (a==0)
        {
            system("cls");

            tools();
        }
        else if (a==1)
        {
            system("cls");
            calender();
        }
    }


}


void converter()
{
    int x;
    printf("\n----------------------------------------------------\n               C O N V E R T E R\n----------------------------------------------------\n\n");

    printf("  1. Numeral System\t");
    printf("  2. Length \t\t");
    printf("  3. BMI \n\n");
    printf("  4. Discount\t\t");
    printf("  5. Percentage\t\t");
    printf("  6. Date\n\n");
    printf("  7. Area\t\t");
    printf("  8. Volume\t\t");
    printf("  9. Temperature\n\n");
    printf(" 10. Speed\t\t");
    printf(" 11. Mass\t\t");
    printf(" 12. Time\n\n");
    printf(" 13. Age\t\t");
    printf(" 14. Exit\n\n\n");

    printf("Enter Number = ");
    fflush(stdin);
    scanf("%d",&x);

    if (x==1)
    {
        system("cls");
        Numeral();

    }
    else if (x==2)
    {
        system("cls");

    }
    else if (x==3)
    {
        system("cls");
        bmi();
    }
    else if (x==4)
    {
        system("cls");

    }
    else if (x==5)
    {
        system("cls");

    }
    else if (x==6)
    {
        system("cls");

    }
    else if (x==7)
    {
        system("cls");
        area();

    }
    else if (x==8)
    {
        system("cls");

    }
    else if (x==9)
    {
        system("cls");
        temp();
    }
    else if (x==10)
    {
        system("cls");

    }
    else if (x==11)
    {
        system("cls");

    }
    else if (x==12)
    {
        system("cls");

    }
    else if (x==13)
    {
        system("cls");

    }
    else if (x==14)
    {
        system("cls");
        tools();
    }
    else
    {
        printf("Enter between (1-14)\n\n");
        printf("Enter Number = ");
        fflush(stdin);
        scanf("%d",&x);

        if (x==1)
        {
            system("cls");
            Numeral();

        }
        else if (x==2)
        {
            system("cls");

        }
        else if (x==3)
        {
            system("cls");
        }
        else if (x==4)
        {
            system("cls");

        }
        else if (x==5)
        {
            system("cls");

        }
        else if (x==6)
        {
            system("cls");

        }
        else if (x==7)
        {
            system("cls");

        }
        else if (x==8)
        {
            system("cls");

        }
        else if (x==9)
        {
            system("cls");

        }
        else if (x==10)
        {
            system("cls");

        }
        else if (x==11)
        {
            system("cls");

        }
        else if (x==12)
        {
            system("cls");

        }
        else if (x==13)
        {
            system("cls");

        }
        else if (x==14)
        {
            system("cls");
            tools();
        }
    }

}

void Numeral()
{
    printf("\n----------------------------------------------------\n            N U M E R A L  S Y S T E M\n----------------------------------------------------\n\n");
    printf("  1. Octal to Binary\t\t\t");
    printf("  2. Octal to Hexa-Decimal \t\t");
    printf("  3. Octal to Decimal \n\n");
    printf("  4. Decimal to Binary\t\t\t");
    printf("  5. Decimal to Hexa-Decimal\t\t");
    printf("  6. Decimal to Octal\n\n");
    printf("  7. Hexa-Decimal to Binary\t\t");
    printf("  8. Hexa-Decimal to Octal\t\t");
    printf("  9. Hexa-Decimal to Decimal\n\n");
    printf(" 10. Decimal to Any Base\t\t");
    printf(" 11. Exit\n\n\n");

    int x;
    printf("Enter Number = ");
    fflush(stdin);
    scanf("%d",&x);

    if (x==1)
    {
        system("cls");
        o2b();

    }
    else if (x==2)
    {
        system("cls");
        o2h();
    }
    else if (x==3)
    {
        system("cls");
        o2d();
    }
    else if (x==4)
    {
        system("cls");
        d2b();

    }
    else if (x==5)
    {
        system("cls");
        d2h();

    }
    else if (x==6)
    {
        system("cls");
        d2o();
    }
    else if (x==7)
    {
        system("cls");
        h2b();

    }
    else if (x==8)
    {
        system("cls");
        h2o();

    }
    else if (x==9)
    {
        system("cls");
        h2d();

    }
    else if (x==10)
    {
        system("cls");
        d2a();

    }

    else if (x==11)
    {
        system("cls");
        converter();
    }
    else
    {
        printf("Enter between (1-11)\n\n");
        printf("Enter Number = ");
        fflush(stdin);
        scanf("%d",&x);

        if (x==1)
        {
            system("cls");
            o2b();

        }
        else if (x==2)
        {
            system("cls");

        }
        else if (x==3)
        {
            system("cls");
        }
        else if (x==4)
        {
            system("cls");

        }
        else if (x==5)
        {
            system("cls");

        }
        else if (x==6)
        {
            system("cls");

        }
        else if (x==7)
        {
            system("cls");

        }
        else if (x==8)
        {
            system("cls");

        }
        else if (x==9)
        {
            system("cls");

        }
        else if (x==10)
        {
            system("cls");

        }

        else if (x==11)
        {
            system("cls");
            converter();
        }
    }

}

void o2b()
{
    printf("\n----------------------------------------------------\n           O C T A L  T O  B I N A R Y\n----------------------------------------------------\n\n");
    int a[10],n;
    int i;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%o",&n);


    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }


    printf("\nBinary of Given Number is=");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        o2b();
    }

}

void d2b()
{
    printf("\n----------------------------------------------------\n           D E C I M A L  T O  B I N A R Y\n----------------------------------------------------\n\n");
    int a[10],n;
    int i;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%d",&n);


    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }


    printf("\nBinary of Given Number is = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        d2b();
    }
}

void h2b()
{
    printf("\n----------------------------------------------------\n     H E X A - D E C I M A L  T O  B I N A R Y\n----------------------------------------------------\n\n");
    int a[10],n;
    int i;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%x",&n);


    for(i=0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }


    printf("\nBinary of Given Number is=");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        h2b();
    }

}

void o2h()
{
    printf("\n----------------------------------------------------\n     O C T A L  T O  H E X A - D E C I M A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%o",&n);




    printf("\nHexa-Decimal of Given Number is = ");

    printf("%X",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        o2h();
    }
}

void o2d()
{
    printf("\n----------------------------------------------------\n          O C T A L  T O  D E C I M A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%o",&n);




    printf("\nDecimal of Given Number is = ");

    printf("%d",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        o2d();
    }
}
void d2h()
{
    printf("\n----------------------------------------------------\n     D E C I M A L  T O  H E X A - D E C I M A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%d",&n);




    printf("\nHexa-Decimal of Given Number is = ");

    printf("%X",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        d2h();
    }
}

void d2o()
{
    printf("\n----------------------------------------------------\n          D E C I M A L  T O  O C T A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%d",&n);




    printf("\nOctal of Given Number is = ");

    printf("%o",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        d2o();
    }

}

void h2o()
{
    printf("\n----------------------------------------------------\n     H E X A - D E C I M A L  T O  O C T A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%x",&n);




    printf("\nOctal of Given Number is = ");

    printf("%o",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        h2o();
    }
}

void h2d()
{
    printf("\n----------------------------------------------------\n     H E X A - D E C I M A L  T O  D E C I M A L\n----------------------------------------------------\n\n");
    int n;


    printf("Enter the number to convert: ");
    fflush(stdin);
    scanf("%x",&n);




    printf("\nDecimal of Given Number is = ");

    printf("%d",n);

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        h2d();
    }
}

void d2a()
{
    printf("\n----------------------------------------------------\n           D E C I M A L  T O  A N Y  B A S E \n----------------------------------------------------\n\n");
    int a[10],n;
    int i,k;


    printf("Enter the number system base : ");
    fflush(stdin);
    scanf("%d",&k);
    printf("\nEnter the number to covert : ");
    fflush(stdin);
    scanf("%d",&n);


    for(i=0; n>0; i++)
    {
        a[i]=n%k;
        n=n/k;
    }


    printf("\nGiven Number System of number is = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%d",a[i]);
    }

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        Numeral();
    }
    else if (x==1)
    {
        system("cls");
        d2a();
    }
}

void bmi()
{
    printf("\n----------------------------------------------------\n           B O D Y  M A S S  I N D E X \n----------------------------------------------------\n\n");
    double i,k,m,b,w;
    printf("Enter the Body Weight in K.G : ");
    fflush(stdin);
    scanf("%lf",&k);
    printf("Enter the Body Height in 'Ft & In' \n");
    printf("Ft : ");
    fflush(stdin);
    scanf("%lf",&i);
    printf("In : ");
    fflush(stdin);
    scanf("%lf",&w);

    double inch= ((12*i)+w);
    double lbs= (2.20462*k);
    m=((lbs*703)/(inch*inch));


    printf("\nBMI is = %.2lf\n\n",m);

    if (m<18.5)
    {
        printf("You are in under weight");
    }
    else if (m>=18.5 && m<=25.0)
    {
        printf("Your weight is normal");
    }
    else
    {
        printf("You are in over weight");

    }

    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        converter();
    }
    else if (x==1)
    {
        system("cls");
        bmi();
    }

}

void templ()
{
    printf("\n----------------------------------------------------\n              T E M P E R A T U R E \n----------------------------------------------------\n\n");
}
void temp()

{
    templ();
    int i;

    printf(" 1. Celsius to Fahrenheit \t 2. Fahrenheit to Celsius \n\n 3. Kelvin to Celsius \t\t 4. Kelvin to Fahrenheit \n\n 5. Fahrenheit to Kelvin \t 6. Celsius to Kelvin \n\n7. Exit");
    printf("\n\nEnter Number : ");
    fflush(stdin);
    scanf("%d",&i);
    printf("\n\n");
    if(i==1)
    {
        system("cls");
        templ();
        tempc();
    }
    else if (i==2)
    {
        system("cls");
        templ();
        tempf();

    }
    else if (i==3)
    {
        system("cls");
        templ();
        k2c();

    }
    else if (i==4)
    {
        system("cls");
        templ();
        k2f();

    }
    else if (i==5)
    {
        system("cls");
        templ();
        f2k();

    }
    else if (i==6)
    {
        system("cls");
        templ();
        c2k();

    }

    else if (i==7)
    {
        system("cls");
        converter();
    }

}

void tempc()
{
    double i,k;

    printf("Enter the Celsius Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = ((i * 1.8) + 32);

    printf("Temperature (F) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        tempc();
    }

}

void tempf()
{
    double i,k;

    printf("Enter the Fahrenheit Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = ((i - 32) / 1.8);

    printf("Temperature (C) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        tempf();
    }
}

void k2c()
{
    double i,k;

    printf("Enter the Kelvin Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = i - 273.15;

    printf("Temperature (C) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        k2c();
    }
}

void k2f()
{
    double i,k;
    printf("Enter the Kelvin Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = i * 9/5 - 459.67;

    printf("Temperature (F) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        k2f();
    }
}

void f2k()
{
    double i,k;
    printf("Enter the Fahrenheit Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = (i + 459.67)* 5/9;

    printf("Temperature (K) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        f2k();
    }
}

void c2k()
{
    double i,k;
    printf("Enter the Celsius Degree = \n" );
    scanf("%lf",&i);
    printf("\n\n\n");

    k = i + 273.15;

    printf("Temperature (K) is = %.2lf",k);





    printf("\n\n");
    int x;
    printf("0.Exit\n");
    printf("1.Retry\n");
    fflush(stdin);
    scanf("%d",&x);
    if (x==0)
    {
        system("cls");
        temp();
    }
    else if (x==1)
    {
        system("cls");
        templ();
        c2k();
    }
}
void exitt()
{
    int n;
    printf("\n\n\n1. retry.");
    printf("\n2. Exit.");
    printf("\nEnter any number: ");
    scanf("%d",&n);
    if(n == 1)
    {
        system("cls");
        area();
    }
    else if(n == 2)
    {
        system("cls");
        converter();
    }
    else
    {
        printf("\n\nError, enter wrong number.Please enter number between 1 - 2\n.");
        scanf("%d",&n);
        if(n == 1)
        {
            system("cls");
            area();
        }
        else if(n == 2)
        {
            system("cls");
            converter();
        }

    }
}

void areal()
{
    printf("\n----------------------------------------------------\n                  A R E A        \n----------------------------------------------------\n\n");
}

void area()
{
    areal();
    printf("1. Square kilometer\n");
    printf("2. Square meter \n");
    printf("3. Square mile \n");
    printf("4. Hectare \n");
    printf("5. Acre ac\n");
    printf("6. Square yard \n");
    printf("7. Square foot \n");
    printf("8. Square inch \n");
    printf("9. Square rod \n");


    int n;
    double km,m,mile,hectare,ac,yd,ft,in,rd;

    printf("\nEnter the format: ");
    scanf("%d",&n);
    //1st condition
    if(n == 1)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &km);
        system("cls");
        printf("1. Square meter\n");
        printf("2. Square mile\n");
        printf("3. Hectare\n");
        printf("4. Acre ac\n");
        printf("5. Square yard \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //1st condition 1st cond
        if(n==1)
        {
            system("cls");
            m = km * 1000;
            printf("\n%.2lf square kilometer : %.2lf square meter", km,m);
            exitt();
        }
        //1st condition 2nd con
        else if(n == 2)
        {
            system("cls");
            mile = .386 * km;
            printf("\n%.2lf square kilometer : %.2lf square mile", km,mile);
            exitt();

        }
        //1st condition 3rd con
        else if(n == 3)
        {
            system("cls");
            hectare = 100*km;
            printf("\n%.2lf square kilometer : %.2lf hectare", km, hectare);
            exitt();
        }
        //1st condition 4th con
        else if(n == 4)
        {
            system("cls");
            ac = 247.105 * km;
            printf("\n%.2lf square kilometer : %.2lf acre", km,ac);
            exitt();
        }
        //1st condition 5th con
        else if(n == 5)
        {
            system("cls");
            yd = 1195990.05 * km;
            printf("\n%.2lf square kilometer : %.2lf square yard", km,yd);
            exitt();
        }
        //1st condition 6th con
        else if(n == 6)
        {
            system("cls");
            ft = 10763910.4 * km;
            printf("\n%.2lf square kilometer : %.2lf square foot", km,ft);
            exitt();
        }
        //1st condition 7th con
        else if(n == 7)
        {
            system("cls");
            in = 39370.1 * km;
            printf("\n%.2lf square kilometer : %.2lf square inch", km,in);
            exitt();
        }
        //1st condition 8th con
        else if(n == 8)
        {
            system("cls");
            rd = 39536.861 * km;
            printf("\n%.2lf square kilometer : %.2lf square rod", km,rd);
            exitt();
        }

    }
    //2nd condition
    else if(n == 2)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &m);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square mile \n");
        printf("3. Hectare \n");
        printf("4. Acre ac\n");
        printf("5. Square yard \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");

        printf("\n\nWhich format you want to convert: ");
        int n;
        scanf("%d",&n);

        //2nd condition 1st con
        if(n==1)
        {
            system("cls");
            km = m / 1000000;
            printf("%.2lf square meter : %.2lf square kilometer\n",m,km);
            exitt();
        }

        //2nd condition 2nd con
        else if(n==2)
        {
            system("cls");
            mile = m / 2589988.11;
            printf("%.2lf square meter : %.2lf square mile\n",m,mile);
            exitt();
        }

        //2nd condition 3rd con
        else if(n==3)
        {
            system("cls");
            hectare = m / 10000;
            printf("%.2lf square meter : %.2lf hectare\n",m,hectare);
            exitt();
        }

        //2nd condition 4th con
        else if(n==4)
        {
            system("cls");
            ac = m / 4046.856;
            printf("%.2lf square meter : %.2lf acre\n",m,ac);
            exitt();
        }

        //2nd condition 5th con
        else if(n==5)
        {
            system("cls");
            yd = m / .83612736;
            printf("%.2lf square meter : %.2lf square yard\n",m,yd);
            exitt();
        }

        //2nd condition 6th con
        else if(n==6)
        {
            system("cls");
            ft = m / .09290304;
            printf("%.2lf square meter : %.2lf square foot\n",m,ft);
            exitt();
        }
        //2nd condition 7th con
        else if(n==7)
        {
            system("cls");
            in = m * 1550.0031;
            printf("%.2lf square meter : %.2lf square inch\n",m,in);
            exitt();
        }
        //2nd condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = m * .03954;
            printf("%.2lf square meter : %.2lf square rod\n",m,rd);
            exitt();
        }
    }

    //3rd condition
    else if(n == 3)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &mile);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. Hectare \n");
        printf("4. Acre ac\n");
        printf("5. Square yard \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //3rd condition 1st con
        if(n==1)
        {
            system("cls");
            km = mile * 2.59;
            printf("%.2lf square mile : %.2lf square kilometer\n",mile,km);
            exitt();
        }

        //3rd condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = mile * 2589988.11;
            printf("%.2lf square mile : %.2lf square meter\n",mile,m);
            exitt();
        }

        //3rd condition 3rd con
        else if(n==3)
        {
            system("cls");
            hectare = mile * 258.998811;
            printf("%.2lf square mile : %.2lf hectare\n",mile,hectare);
            exitt();
        }

        //3rd condition 4th con
        else if(n==4)
        {
            system("cls");
            ac = mile * 640.000067;
            printf("%.2lf square mile : %.2lf acre\n",mile,ac);
            exitt();
        }

        //3rd condition 5th con
        else if(n==5)
        {
            system("cls");
            yd = mile * 30976000;
            printf("%.2lf square mile : %.2lf square yarad\n",mile,yd);
            exitt();
        }

        //3rd condition 6th con
        else if(n==6)
        {
            system("cls");
            ft = mile * 27878400;
            printf("%.2lf square mile : %.2lf square foot\n",mile,ft);
            exitt();
        }

        //3rd condition 7th con
        else if(n==7)
        {
            system("cls");
            in = mile * 63360 * 63360;
            printf("%.2lf square mile : %.2lf square inch\n",mile,in);
            exitt();
        }

        //3rd condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = mile * 102400;
            printf("%.2lf square mile : %.2lf square mod\n",mile,rd);
            exitt();
        }

    }
    //4th condition
    else if(n == 4)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &hectare);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. Acre ac\n");
        printf("5. Square yard \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //4th condition 1st con
        if(n==1)
        {
            system("cls");
            km = hectare * .01;
            printf("%.2lf hectare : %.2lf square kilometer\n",hectare,km);
            exitt();
        }

        //4th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = hectare * 10000;
            printf("%.2lf hectare : %.2lf square meter\n",hectare,m);
            exitt();
        }

        //4th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = hectare * .00386;
            printf("%.2lf hectare : %.2lf square mile\n",hectare,mile);
            exitt();
        }

        //4th condition 4th con
        else if(n==4)
        {
            system("cls");
            ac = hectare * 2.47;
            printf("%.2lf hectare : %.2lf acre\n",hectare,ac);
            exitt();
        }

        //4th condition 5th con
        else if(n==5)
        {
            system("cls");
            yd = hectare * 11959.9005;
            printf("%.2lf hectare : %.2lf square yard\n",hectare,yd);
            exitt();
        }

        //4th condition 6th con
        else if(n==6)
        {
            system("cls");
            ft = hectare * 107639.104;
            printf("%.2lf hectare : %.2lf square foot\n",hectare,ft);
            exitt();
        }

        //4th condition 7th con
        else if(n==7)
        {
            system("cls");
            in = hectare * 15500031;
            printf("%.2lf hectare : %.2lf square inch\n",hectare,in);
            exitt();
        }
        //4th condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = hectare * 395.36861;
            printf("%.2lf hectare : %.2lf square rod\n",hectare,rd);
            exitt();
        }
        //4th condition


    }
    //5th condition
    else if(n == 5)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &ac);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. hectare\n");
        printf("5. Square yard \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //5th condition 1st con
        if(n==1)
        {
            system("cls");
            km = ac * .00405;
            printf("%.2lf acre : %.2lf square kilometer\n",ac,km);
            exitt();
        }
        //5th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = ac * 4046.856;
            printf("%.2lf acre : %.2lf square meter\n",ac,m);
            exitt();
        }
        //5th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = ac * .00156;
            printf("%.2lf acre : %.2lf square mile\n",ac,mile);
            exitt();
        }
        //5th condition 4th con
        else if(n==4)
        {
            system("cls");
            hectare = ac * .4046856;
            printf("%.2lf acre : %.2lf hectare\n",ac,hectare);
            exitt();
        }
        //5th condition 5th con
        else if(n==5)
        {
            system("cls");
            yd = ac * 4839.99;
            printf("%.2lf acre : %.2lf square yard\n",ac,yd);
            exitt();
        }
        //5th condition 6th con
        else if(n==6)
        {
            system("cls");
            ft = ac * 43559.9955;
            printf("%.2lf acre : %.2lf square foot\n",ac,ft);
            exitt();
        }
        //5th condition 7th con
        else if(n==7)
        {
            system("cls");
            in = ac * 6272639.35;
            printf("%.2lf acre : %.2lf square inch\n",ac,in);
            exitt();
        }
        //5th condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = ac * 159.999983;
            printf("%.2lf acre : %.2lf square rod\n",ac,rd);
            exitt();
        }
    }
    //6th condition
    else if(n == 6)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &yd);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. hectare\n");
        printf("5. acre \n");
        printf("6. Square foot \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //6th condition 1st con
        if(n==1)
        {
            system("cls");
            km = yd / 1195990.05;
            printf("%.2lf square yard : %.2lf square kilometer\n",yd,km);
            exitt();
        }
        //6th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = yd * .836;
            printf("%.2lf square yard : %.2lf square meter\n",yd,m);
            exitt();
        }
        //6th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = yd / 3097600;
            printf("%.2lf square yard : %.2lf square mile\n",yd,mile);
            exitt();
        }
        //6th condition 4th con
        else if(n==4)
        {
            system("cls");
            hectare = yd / 11959.9005;
            printf("%.2lf square yard : %.2lf hectare\n",yd,hectare);
            exitt();
        }
        //6th condition 5th con
        else if(n==5)
        {
            system("cls");
            ac = yd / 4839.99949;
            printf("%.2lf square yard : %.2lf acre\n",yd,ac);
            exitt();
        }
        //6th condition 6th con
        else if(n==6)
        {
            system("cls");
            ft = yd *9;
            printf("%.2lf square yard : %.2lf square foot\n",yd,ft);
            exitt();
        }
        //6th condition 7th con
        else if(n==7)
        {
            system("cls");
            in = yd * 1296;
            printf("%.2lf square yard : %.2lf square inch\n",yd,in);
            exitt();
        }
        //6th condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = yd * .0331;
            printf("%.2lf square yard : %.2lf square rod\n",yd,rd);
            exitt();
        }
    }
    //7th condition
    else if(n == 7)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &ft);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. hectare\n");
        printf("5. acre \n");
        printf("6. Square yard \n");
        printf("7. Square inch \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //7th condition 1st con
        if(n==1)
        {
            system("cls");
            km = ft / 10763910.4;
            printf("%.2lf square foot : %.2lf square kilometer\n",ft,km);
            exitt();
        }
        //7th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = ft / 10.764;
            printf("%.2lf square foot : %.2lf square meter\n",ft,m);
            exitt();
        }
        //7th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = ft / 27878400;
            printf("%.2lf square foot : %.2lf square mile\n",ft,mile);
            exitt();
        }
        //7th condition 4th con
        else if(n==4)
        {
            system("cls");
            hectare = ft / 107639.104;
            printf("%.2lf square foot : %.2lf hectare\n",ft,hectare);
            exitt();
        }
        //7th condition 5th con
        else if(n==5)
        {
            system("cls");
            ac = ft / 43559.9955;
            printf("%.2lf square foot : %.2lf acre\n",ft,ac);
            exitt();
        }
        //7th condition 6th con
        else if(n==6)
        {
            system("cls");
            yd = ft / 9;
            printf("%.2lf square foot : %.2lf square yard\n",ft,yd);
            exitt();
        }
        //7th condition 7th con
        else if(n==7)
        {
            system("cls");
            in = ft * 144;
            printf("%.2lf square foot : %.2lf square inch\n",ft,in);
            exitt();
        }
        //7th condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = ft / 272.25;
            printf("%.2lf square foot : %.2lf square rod\n",ft,rd);
            exitt();
        }
    }
    //8th condition
    else if(n == 8)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &in);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. hectare\n");
        printf("5. acre \n");
        printf("6. Square yard \n");
        printf("7. Square foot \n");
        printf("8. Square rod \n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //8th condition 1st con
        if(n==1)
        {
            system("cls");
            km = in / 39370.1;
            printf("%.2lf square inch : %.2lf square kilometer\n",in,km);
            exitt();
        }
        //8th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = in / 1550.0031;
            printf("%.2lf square inch : %.2lf square meter\n",in,m);
            exitt();
        }
        //8th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = in * 63360 * 63360;
            printf("%.2lf square inch : %.2lf square mile\n",in,mile);
            exitt();
        }
        //8th condition 4th con
        else if(n==4)
        {
            system("cls");
            hectare = in / 15500031;
            printf("%.2lf square inch : %.2lf hectare\n",in,hectare);
            exitt();
        }
        //8th condition 5th con
        else if(n==5)
        {
            system("cls");
            ac = in / 6272639.35;
            printf("%.2lf square inch : %.2lf acre\n",in,ac);
            exitt();
        }
        //8th condition 6th con
        else if(n==6)
        {
            system("cls");
            yd = in / 1296;
            printf("%.2lf square inch : %.2lf square yard\n",in,yd);
            exitt();
        }
        //8th condition 7th con
        else if(n==7)
        {
            system("cls");
            ft = in / 144;
            printf("%.2lf square inch : %.2lf square foot\n",in,ft);
            exitt();
        }
        //8th condition 8th con
        else if(n==8)
        {
            system("cls");
            rd = in / 39204;
            printf("%.2lf square inch : %.2lf square rod\n",in,rd);
            exitt();
        }

    }
    //9th condition
    else if(n == 9)
    {
        system("cls");
        printf("Enter your value: ");
        scanf("%lf", &rd);
        system("cls");
        printf("1. Square kilometer\n");
        printf("2. Square meter\n");
        printf("3. mile\n");
        printf("4. hectare\n");
        printf("5. acre \n");
        printf("6. Square yard \n");
        printf("7. Square foot \n");
        printf("8. Square inch\n");
        int n;
        printf("\n\nwhich format you want to convert: ");
        scanf("%d",&n);

        //9th condition 1st con
        if(n==1)
        {
            system("cls");
            km = rd / 39539.861;
            printf("%.2lf square rod : %.2lf square kilometer\n",rd,km);
            exitt();
        }
        //9th condition 2nd con
        else if(n==2)
        {
            system("cls");
            m = rd * 25.29;
            printf("%.2lf square rod : %.2lf square meter\n",rd,m);
            exitt();
        }
        //9th condition 3rd con
        else if(n==3)
        {
            system("cls");
            mile = rd / 102400;
            printf("%.2lf square rod : %.2lf square mile\n",rd,mile);
            exitt();
        }
        //9th condition 4th con
        else if(n==4)
        {
            system("cls");
            hectare = rd / 395.36861;
            printf("%.2lf square rod : %.2lf hectare\n",rd,hectare);
            exitt();
        }
        //9th condition 5th con
        else if(n==5)
        {
            system("cls");
            ac = rd / 159.999983;
            printf("%.2lf square rod : %.2lf acre\n",rd,ac);
            exitt();
        }
        //9th condition 6th con
        else if(n==6)
        {
            system("cls");
            yd = rd * 30.25;
            printf("%.2lf square rod : %.2lf square yard\n",rd,yd);
            exitt();
        }
        //9th condition 7th con
        else if(n==7)
        {
            system("cls");
            ft = rd * 272.25;
            printf("%.2lf square rod : %.2lf square foot\n",rd,ft);
            exitt();
        }
        //9th condition 8th con
        else if(n==8)
        {
            system("cls");
            in = rd * 39204;
            printf("%.2lf square rod : %.2lf square inch\n",rd,in);
            exitt();
        }

    }

}


int main()
{
    logo();
    loading();
    logo();
    ls();
    getch();
}
