#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "data.h"
#include "ticketing.h"
#include "Localtravel.h"
#include "StayInhotel.h"
#include "Extraactivities.h"
void SetColor(int ForgC)
 {
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
void ClearConsoleToColors(int ForgC, int BackC)
{
     WORD wColor = ((BackC & 0x0F) << 4) + (ForgC & 0x0F);

     HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

     COORD coord = {0, 0};

     DWORD count;

     CONSOLE_SCREEN_BUFFER_INFO csbi;


     SetConsoleTextAttribute(hStdOut, wColor);

     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {

          FillConsoleOutputCharacter(hStdOut, (TCHAR) 32, csbi.dwSize.X * csbi.dwSize.Y, coord, &count);

          FillConsoleOutputAttribute(hStdOut, csbi.wAttributes, csbi.dwSize.X * csbi.dwSize.Y, coord, &count );
                              //This will set our cursor position for the next print statement
          SetConsoleCursorPosition(hStdOut, coord);
     }
}
int mainc()
{
    ClearConsoleToColors(2,15);


for(int i=0;i<8;i++){
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  Sleep(200);
  system("cls");
  Sleep(200);
}
  system("cls");
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  printf("                                                                         \n");
  printf("                                                                         \n");
  printf("                                                                         \n");
  printf("                                                                         \n");
  printf("                                                                         \n");




  printf("                                                                         ________________________________________________________________________________________\n");
  printf("                                                                         ________________________________________________________________________________________\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                         WELCOME TO ARMIS TOURS AND TRAVELS                         ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                Enter your choices:                                 ||\n");
  printf("                                                                         ||                                 1:-  ENTER YOUR DATA                               ||\n");
  printf("                                                                         ||                                 2:-  TICKETING                                     ||\n");
  printf("                                                                         ||                                 3:-  STAY IN HOTEL/RESORT                          ||\n");
  printf("                                                                         ||                                 4:-  LOCAL TRAVEL                                  ||\n");
  printf("                                                                         ||                                 5:-  EXTRA ACTIVITIES                              ||\n");
  printf("                                                                         ||                                 6:-  EXIT                                          ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ||                                                                                    ||\n");
  printf("                                                                         ________________________________________________________________________________________\n");
  printf("                                                                         ________________________________________________________________________________________\n\n\n");
  printf("                                                                          ENTER YOUR CHOICE:-\n\n                                                                          ");
  int choice,price_ticket=0,price_stay=0,price_local=0,price_Extra=0;
  int days=0;
while(1){
        scanf("%d",&choice);
  switch(choice){
     case 1: days=data();break;
     case 2: price_ticket+=ticketing();break;
     case 3:price_stay+=stay_hotel(days);break;
     case 4:price_local+=Local_travel();break;
     case 5:price_Extra+=Extra();break;
  }
  if(choice==6){
    break;
  }
}
  system("cls");
int Total_Price=price_Extra+price_local+price_stay+price_ticket;
printf("\n\n\n\n\n                                                                                                                           NOW 5 percent GST WILL BE ADDED TO YOUR PRICE\n\n");
printf("********************************************************************************************************************************INVOICE****************************************************************************************************\n\n");
Total_Price+=((5*Total_Price)/100);
printf("                                                                                                                                     PRICE For TICKET= %d\n",price_ticket);
printf("                                                                                                                                     PRICE For STAY= %d\n",price_stay);
printf("                                                                                                                                     PRICE For LOCAL TRAVEL= %d\n",price_local);
printf("                                                                                                                                     PRICE For EXTRA= %d\n\n\n",price_Extra);
char datto[200];
   char ch;
   int d=0,i=0;
FILE *fp;
fp=fopen("data.txt","r+");
      while(ch!='.' && ch!=EOF)

  {

    ch = getc(fp);

    if(ch=='\n')

    {

      d++;

    }



      datto[i++]=ch;


  }
  datto[i-1]='\0';

printf("%s\n\n\n\n",datto);
fclose(fp);

char ch1;

  int k=0;

  char str[100];

  fp=fopen("destination.txt","r");



  while(ch1!='.' && ch1!=EOF)

  {

    ch1 = getc(fp);

      str[k++]=ch1;

  }

   fclose(fp);
  str[k-1]='\0';

printf("%s\n\n\n",str);
  int r=0,d2=0;

  char st[100];

  fp=fopen("activity.txt","r");
  fseek(fp,0,SEEK_SET);

char ch2;
  while(ch2!='.' && ch2!=EOF)

  {

    ch2 = getc(fp);


      st[r++]=ch2;

  }

   fclose(fp);
  st[r-1]='\0';

printf("%s\n\n\n",st);
  printf("                                                                                                 YOUR TOTAL PRICE AFTER ADDING GST IS IS=RS %d\n\n\n\n",Total_Price);
printf("*******************************************************************************************************************************************************************************************************************************************\n\n");
  printf("                                                                                                                      THANK YOU FOR USING OUR SERVICES\n\n\n");
  printf("                                                                                                                               Project BY:-\n\n\n");
  printf("                                                                                                                                      NAME:- RISHIT , ID:- 1811981254\n");
  printf("                                                                                                                                      NAME:- ISHAAN , ID:- 1811981146\n");
  printf("                                                                                                                                      NAME:- SRISHTI , ID:- 1811981311\n");
  printf("                                                                                                                                      NAME:- MANAV , ID:- 1811981177\n");
  printf("                                                                                                                                      NAME:- ANVI , ID:- 1811981064\n\n\n\n\n");
}
static int i=0;
struct web
{
char name[30],pass[30];
}w[99];
int n;
void login(void);
void reg(void);
int main()
{

ClearConsoleToColors(15,0);
SetColor(2);


ClearConsoleToColors(15,0);
system("cls");
SetColor(3);
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  printf("                                                                         \n");
  printf("                                                                         \n");
printf("\n\t\t\t\t\t\t\t\t\t==========================================================================================");
printf("\n\n\n\n\t\t\tPress Enter to proceed...!!");
if(getch()==13)
  system("cls");
XY:
printf("\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t1. LOGIN\t\t2. REGISTER");
printf("\n\n\n\t\t\t\tENTER YOUR CHOICE: ");
scanf("%d",&n);
switch(n)
  {
    case 1: system("cls");
        login();
        break;
    case 2: system("cls");
        reg();
        break;
    default: printf("\n\n\t\t\t\tNO MATCH FOUND");
        printf("\n\n\t\t\tPress Enter to re-Enter the choice");
        if(getch()==13)
        system("cls");
        goto XY;
  }
  return 0;
}
void reg()
  {
    FILE *fp;
    char c,checker[30]; int z=0;
    fp=fopen("Web_reg.txt","ab+");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                              |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|   WELCOME TO REGISTER ZONE   |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|   ^^^^^^^^^^^^^^^^^^^^^^^^   |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                              |");
    for(i=0;i<100;i++)
    {
      printf("\n\n\t\t\t\t  ENTER USERNAME: ");
      scanf("%s",checker);
        while(!feof(fp))
        {
          fread(&w[i],sizeof(w[i]),1,fp);
          if(strcmp(checker,w[i].name)==0)
            {
            printf("\n\n\t\t\tUSERNAME ALREDY EXISTS");
            system("cls");
            reg();
            }
          else
          {
            strcpy(w[i].name,checker);
            break;
          }
        }
      printf("\n\n\t\t\t\t  DESIRED PASSWORD: ");
      while((c=getch())!=13)
        {
          w[i].pass[z++]=c;
          printf("%c",'*');
        }
   //
      fwrite(&w[i],sizeof(w[i]),1,fp);
    //  fprintf(fp,"%s",w[i]);
      fclose(fp);
      printf("\n\n\tPress enter if you agree with Username and Password");
      if((c=getch())==13)
        {
        system("cls");
        printf("\n\n\t\tYou are successfully registered");
        printf("\n\n\t\tTry login your account??\n\n\t\t  ");
        printf("> PRESS 1 FOR YES\n\n\t\t  > PRESS 2 FOR NO\n\n\t\t\t\t");
        scanf("%d",&n);
        switch(n)
          {
              case 1: system("cls");
                    login();
                    break;
              case 2: system("cls");
                    printf("\n\n\n\t\t\t\t\tTHANK YOU FOR REGISTERING");
                    break;
          }
        }
        break;
      }
    getch();
  }
  void login()
    {
      FILE *fp;
      char c,name[30],pass[30]; int z=0;
      int checku,checkp;
      fp=fopen("Web_reg.txt","rb");

    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                           |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|   WELCOME TO LOGIN ZONE   |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|   ^^^^^^^^^^^^^^^^^^^^^   |");
    printf("\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t|                           |");
      for(i=0;i<1000;i++)
      {
        printf("\n\n\t\t\t\t  ENTER USERNAME: ");
        scanf("%s",name);
        printf("\n\n\t\t\t\t  ENTER PASSWORD: ");
        while((c=getch())!=13)
        {
          pass[z++]=c;
          printf("%c",'*');
        }
        pass[z]='\0';
      while(!feof(fp))
        {
        fread(&w[i],sizeof(w[i]),1,fp);
          checku=strcmp(name,w[i].name);
          checkp=strcmp(pass,w[i].pass);
          if(checku==0&&checkp==0)
          {
            system("cls");
            printf("\n\n\n\t\t\tYOU HAVE LOGGED IN SUCCESSFULLY!!");
            printf("\n\n\n\t\t\t\tWELCOME, HAVE A NICE DAY");
            mainc();
            break;
          }
        else if(checku==0&&checkp!=0)
          {
            printf("\n\n\n\t\t\tWRONG PASSWORD!! Not %s??",name);
            printf("\n\n\t\t\t\t  (Press 'Y' to re-login)");
            if(getch()=='y'||getch()=='Y')
              login();
          }
        else if(checku!=0)
          {
            printf("\n\n\n\t\t\tYou are not a Registered User\n \t\t\tPress enter to register yourself");
            if(getch()==13)
            system("cls");
            reg();
          }
        }
        break;
      }
      getch();
    }
