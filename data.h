//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>

extern int data()
{//SetColor(11);
    ClearConsoleToColors(1,15);
system("cls");
SetColor(2);
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  printf("\n\n\n");
  SetColor(1);
FILE *fp;
  printf("                                                                   ______________________________________________________________________________________\n");
  printf("                                                                   ______________________________________________________________________________________\n");
  printf("                                                                   ||                                                                                  ||\n");
  printf("                                                                   ||                                                                                  ||\n");
  printf("                                                                   ||                                                                                  ||\n");
  printf("                                                                   ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                   ||                                1:- Enter your data                               ||\n");
  printf("                                                                   ||                                2:- Display your Data                             ||\n");
  printf("                                                                   ||                                3:- Exit                                          ||\n");
  printf("                                                                   ||                                                                                  ||\n");
  printf("                                                                   ||                                                                                  ||\n");
  printf("                                                                   ______________________________________________________________________________________\n");
  printf("                                                                   ______________________________________________________________________________________\n");
  int choice,noofdays,Noofpassenger,noofadults;
  char daterange[100];
  char datto[200];
   char ch;

  while(1){
        int i=0,d=0;
        printf("\n\n\n\t\t\t\t\t\t\t\tENTER YOUR CHOICE NOW:-\n\n\t\t\t\t\t\t\t\t");
        scanf("%d",&choice);
    switch(choice){
    case 1:
        fp=fopen("data.txt","w+");
        printf("\n\n\n\t\t\t\t\t\t\t\t\tENTER NO of passengers:-\n\n\t\t\t\t\t\t\t\t\t\t");
        scanf("%d",&Noofpassenger);
        fprintf(fp,"NO OF PASSENGERS=%d\n",Noofpassenger);
        printf("                                                                                                            \t\t\t No. of Passengers you entered  =  %d\n\n",Noofpassenger);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tENTER NO OF Adults Less than passengers:-\n\n\t\t\t\t\t\t\t\t\t\t");
        scanf("%d",&noofadults);



        while(1){
        if(noofadults<=Noofpassenger){
        fprintf(fp,"NO OF ADULTS=%d\n",noofadults);
        printf("                                                                                                            \t\t\t No. of adults You Entered      =  %d\n\n",noofadults);
        break;
        }
        else{
            printf("\n\n\n\t\t\t\t\t\t\t\t\tPlease enter adults less than passenger:-\n\n\t\t\t\t\t\t\t\t\t\t");
            scanf("%d",&noofadults);
        }
        }
        printf("\n\n\n\t\t\t\t\t\t\t\t\tENTER NO of Days:-\n\n\t\t\t\t\t\t\t\t\t\t");
        scanf("%d",&noofdays);
        printf("                                                                                                           \t\t\t  No   of Days you Entered       =  %d\n\n",noofdays);

        fprintf(fp,"NO OF DAYS=%d\n",noofdays);
        printf("\n\n\n\t\t\t\t\t\t\t\t\tENTER YOUR DATE RANGE:-\n\n\t\t\t\t\t\t\t\t\t\t");
        scanf("%s",daterange);
        printf("                                                                                                           \t\t\t  Date Range   you Entered       =  %s\n\n",daterange);
       if(getch()==13)
        system("cls");
       SetColor(2);
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  printf("\n\n\n");
  SetColor(1);
        printf("                                                             ______________________________________________________________________________________\n");
        printf("                                                             ______________________________________________________________________________________\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                              Enter Your choice:-                                 ||\n");
        printf("                                                             ||                                1:- Enter your data                               ||\n");
        printf("                                                             ||                                2:- Display your Data                             ||\n");
        printf("                                                             ||                                3:- Exit                                          ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ______________________________________________________________________________________\n");
        printf("                                                             ______________________________________________________________________________________\n");
        fclose(fp);
        break;
case 2:
    system("cls");
    SetColor(2);
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  printf("\n\n\n");
  SetColor(1);
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

printf("%s",datto);
printf("\n");
fseek(fp,0,SEEK_SET);
fclose(fp);
  printf("                                                                   ______________________________________________________________________________________\n");
        printf("                                                             ______________________________________________________________________________________\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                              Enter Your choice:-                                 ||\n");
        printf("                                                             ||                                1:- Enter your data                               ||\n");
        printf("                                                             ||                                2:- Display your Data                             ||\n");
        printf("                                                             ||                                3:- Exit                                          ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ||                                                                                  ||\n");
        printf("                                                             ______________________________________________________________________________________\n");
        printf("                                                             ______________________________________________________________________________________\n");



    break;

    }
    if(choice==3){
            fclose(fp);
        break;
    }
  }
system("cls");
printf("\n");
ClearConsoleToColors(2,15);
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
  printf("                                                                          ENTER YOUR CHOICE (2-6):-\n\n                                                                          ");
  return noofdays;

}
