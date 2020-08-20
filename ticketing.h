//#include<string.h>
//#include<stdio.h>
//#include<stdlib.h>
//#include "data.txt"
extern int ticketing(){
    // SetColor(4);

    ClearConsoleToColors(4,15);
    system("cls");

ClearConsoleToColors(2,15);
printf("\n\n\n\n");
  printf("                                                                                    ***          *******      ****      ****    *************      *********               \n");
  printf("                                                                                   ** **         **     **    ** **    ** **          **          **               \n");
  printf("                                                                                  **   **        **     **    **  **  **  **          **          **      \n");
  printf("                                                                                 *********       ** ****      **    **    **          **           *********      \n");
  printf("                                                                                **       **      ** **        **          **          **                   **          \n");
  printf("                                                                               **         **     **  **       **          **          **                   **            \n");
  printf("                                                                              **           **    **   **      **          **    *************      *********                 \n");
  SetColor(4);
  printf("\n\n\n");
  int passengers,adults,price=0,child,arr[5],i=0,choice=0,choice123=0;
  int size,index;
  char ch;
  FILE *fp10=fopen("data.txt","r+");

 // fseek(fp10,0,SEEK_SET);
   while(ch!=EOF)

  {

    ch = getc(fp10);
    if(ch=='0' || ch=='1'||ch=='2'||ch=='3'||ch=='4'||ch=='5'||ch=='6'||ch=='7'||ch=='8'||ch=='9'){
        arr[i++]=ch-'0';
    }

  }
  size=i;
  char destination_international[5][50]={"AMERICA","MALDIVES","NEW ZEALAND","AUSTRALIA","ENGLAND"};
  int distance_int[5]={3500,1200,2700,2800,3000};
  char destination_domestic[5][50]={"MANALI","GOA","BANGLORE","DARJEELING","SHIMLA"};
  int distance_domestic[5]={395,750,850,880,90};
  char carrier[2][100]={"NATIONAL","INTERNATIONAL"};

  passengers=arr[0];
  adults=arr[1];
  child=passengers-adults;
  fclose(fp10);
  printf("passengers=%d adults=%d childs=%d\n\n",passengers,adults,child);

  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("                                                                                      ||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("                                                                                      ||                                3:- Exit                                          ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n\n");
  FILE *fp1=fopen("destination.txt","w+");
  char your_dest[50],your_carrier[50];
  while(1){
    printf("                                                                                  Please Enter Your Choice\n\n                                                                                     ");
    scanf("%d",&choice);
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
  SetColor(4);
    switch(choice){
      case 1:printf("                                                                         Please Enter your destination from these\n");
      for(int i=0;i<5;i++){
          printf("                              {====================================}\n");
          printf("                              {                                    }\n");


          printf("                                            %s                    \n",destination_domestic[i]);
          printf("                              {                                    }\n");
          printf("                              {====================================}\n\n\n\n");
      }
      printf("\n\n                               ");
      scanf("%s",your_dest);
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
 SetColor(4);
      for(int i=0;i<5;i++){
          if(strcmp(your_dest,destination_domestic[i])==0 || (your_dest[0]== destination_domestic[0] && your_dest[1]== destination_domestic[1]&&your_dest[2]== destination_domestic[2])){
            index=i;
            fprintf(fp1,"YOUR DESTINATION=%s\n",your_dest);
            printf("                                                                                                                                                      YOUR DESTINATION=%s\n",your_dest);
            fprintf(fp1,"YOUR DISTANCE=%d\n",distance_domestic[i]);
            printf("                                                                                                                                                      YOUR DISTANCE=%d\n",distance_domestic[i]);
            break;
          }

      }

      if(distance_domestic[index]<500){
        printf("                                                                                                                                                        You are traveling by railway\n");
        if(distance_domestic[index]<350){
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- AC                                            ||\n");
  printf("                                                                                      ||                                2:- SLEEPER                                       ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n\n\n");
  printf("                                                                                     ENTER YOUR CHOICE:-\n\n                                                                                       ");
  scanf("%d",&choice123);
  switch(choice123){
   case 1:price+=850*adults;
          price+=550*child;
          printf("                                                                                                                                                          You OPTED FOR AC TRAVEL\n");
          break;
   case 2:
          price+=650*adults;
          price+=350*child;
          printf("                                                                                                                                                          You OPTED FOR SLEEPER TRAVEL\n");
          break;
  }
        }
        else{
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- AC                                            ||\n");
  printf("                                                                                      ||                                2:- SLEEPER                                       ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n\n\n");
  printf("                                                                                     ENTER YOUR CHOICE:-\n\n                                                                                     ");
  scanf("%d",&choice123);
  switch(choice123){
   case 1:price+=1050*adults;
          price+=850*child;
          printf("                                                                                                                                                          You OPTED FOR AC TRAVEL\n");
          break;
   case 2:
          price+=850*adults;
          price+=450*child;
          printf("                                                                                                                                                          You OPTED FOR SLEEPER TRAVEL\n");
          break;
  }
        }
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
  SetColor(4);
      }
      else{
        printf("                                                                                                                                                          You are traveling by air\n");
       if(distance_domestic[index]<450){
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- ECONOMY                                       ||\n");
  printf("                                                                                      ||                                2:- BUISNESS                                      ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n\n\n");
  printf("                                                                                     ENTER YOUR CHOICE:-\n\n                                                                                     ");
  scanf("%d",&choice123);
  switch(choice123){
   case 1:price+=1500*adults;
          price+=850*child;
          printf("                                                                                                                                                          You OPTED FOR ECONOMY TRAVEL\n");
          break;
   case 2:
          price+=2050*adults;
          price+=1250*child;
          printf("                                                                                                                                                          You OPTED FOR BUISNESS TRAVEL\n");
          break;
  }
        }
        else{
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- ECONOMY                                       ||\n");
  printf("                                                                                      ||                                2:- BUISNESS                                      ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n\n\n");
  printf("                                                                                     ENTER YOUR CHOICE:-\n\n                                                                                     ");
  scanf("%d",&choice123);
  switch(choice123){
   case 1:price+=2500*adults;
          price+=1250*child;
          printf("                                                                                                                                                          You OPTED FOR ECONOMY TRAVEL\n");
          break;
   case 2:
          price+=4050*adults;
          price+=2050*child;
          printf("                                                                                                                                                          You OPTED FOR BUISNESS TRAVEL\n");
          break;
  }
        }
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
 SetColor(4);
      }

printf("\nYOUR TOTAL COST IS=%d\n",price);
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("                                                                                      ||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("                                                                                      ||                                3:- Exit                                          ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
      break;

      case 2:
          printf("                                                                               Please Enter your destination from these\n");
      for(int i=0;i<5;i++){
          printf("                              {====================================}\n");
          printf("                              {                                    }\n");


          printf("                                            %s                    \n",destination_international[i]);
          printf("                              {                                    }\n");
          printf("                              {====================================}\n\n\n");
      }
      printf("\n\n");
      scanf("%s",your_dest);
      system("cls");
      for(int i=0;i<5;i++){
          if(strcmp(your_dest,destination_international[i])==0){
            index=i;
            fprintf(fp1,"YOUR DESTINATION=%s\n",your_dest);
            printf("                                                                                                                                                      YOUR DESTINATION=%s\n",your_dest);
            fprintf(fp1,"YOUR DISTANCE=%d\n",distance_domestic[i]);
            printf("                                                                                                                                                      YOUR DISTANCE=%d\n",distance_domestic[i]);

            break;
          }

      }
printf("CHOOSE YOUE CARRIER\n\n");
for(int i=0;i<2;i++){
    printf("                              {====================================}\n");
          printf("                              {                                    }\n");


          printf("                                            %s                    \n",carrier[i]);
          printf("                              {                                    }\n");
          printf("                              {====================================}\n\n\n");
}
          printf("\n\n                           ");
scanf("%s",&your_carrier);
fprintf(fp1,"YOUR CARRIER=%d\n",your_carrier);
printf("                                                                                                                                                              YOUR CARRIER IS=%s\n",your_carrier);
if(strcmp(your_carrier,carrier[0])==0){
        if(distance_int[index]<1500){
    price+=10000*adults;
    price+=7500*child;}

else{
    price+=18000*adults;
    price+=12500*child;
}
}
else{
             if(distance_int[index]<1500){
    price+=16000*adults;
    price+=12500*child;
             }
else{
    price+=30000*adults;
    price+=20500*child;
}
      }

printf("\nYOUR TOTAL COST IS=%d\n",price);
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- DOMESTIC TRAVEL                               ||\n");
  printf("                                                                                      ||                                2:- INTERNATIONAL TRAVEL                          ||\n");
  printf("                                                                                      ||                                3:- Exit                                          ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
      break;



    }
    if (choice==3){
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                      ||                                1:- ONE way                                       ||\n");
  printf("                                                                                      ||                                2:- Round trip                                    ||\n");
  printf("                                                                                      ||                                3:- Exit                                          ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ||                                                                                  ||\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  printf("                                                                                      ______________________________________________________________________________________\n");
  int ch;
  printf("                                                                                      Enter your choice:-                                                                                      ");

  scanf("%d",&ch);
  switch(ch){
   case 1: price=price;break;
   case 2: price*=2;break;

  }
            fclose(fp1);
        break;
    }
  }
fclose(fp1);
system("cls");
printf("\n");
SetColor(2);
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
  printf("                                                                          ENTER YOUR CHOICE (3-6):-\n\n                                                                          ");
return price;

}
