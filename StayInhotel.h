//#include<stdio.h>
//#include<string.h>
extern int stay_hotel(int dayss){
    //SetColor(12);

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
    //SetColor(12);
    SetColor(12);
    int price=0,days,i=0;

  days=dayss;
  int hotel_star,price_star=0;
  printf("NO Of DAYs To Stay =  %d\n\n",days);
    printf("                                                                                  ====================================================================\n");
    printf("                                                                                  ||                                                                ||\n");
    printf("                                                                                  ||                                                                ||\n");
    printf("                                                                                  ||                            1. 5 Star(*****)                    ||\n");
    printf("                                                                                  ||                            2. 4 Star(****)                     ||\n");
    printf("                                                                                  ||                            3. 3 Star(***)                      ||\n");
    printf("                                                                                  ||                            4. Others (No Star)                 ||\n");
    printf("                                                                                  ||                                                                ||\n");
     printf("                                                                                  ====================================================================\n\n\n");
     printf("                                                                               {Please Enter Your Choice}\n\n                                                                               ");
     scanf("%d",&hotel_star);
     switch(hotel_star){
      case 1: price_star=3000;break;
      case 2: price_star=2000;break;
      case 3: price_star=1000;break;
      case 4: price_star=500;break;}
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
    //SetColor(12);
    SetColor(12);
    int noofRooms;
    printf("                                                                               ENTER NUMBER OF ROOMS\n\n                                                                               ");
    scanf("%d",&noofRooms);
    printf("                                                                                                                                  You Opted for %d  Number of Rooms \n\n",noofRooms);
    int season,Package;

  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                     Enter IN WHICH SEASON YOU WAN'T TRAVEL:-                     ||\n");
  printf("                                                                                    ||                               1:- JANUARY TO MARCH (RS 300/ROOM 1 Day)           ||\n");
  printf("                                                                                    ||                               2:- APRIL  TO JULY   (RS 400/ROOM 1 Day)           ||\n");
  printf("                                                                                    ||                               3:- AUGUST TO OCTOBER  (RS 600/ROOM 1 Day)         ||\n");
  printf("                                                                                    ||                               4:- NOVEMBER TO DECEMBER  (RS 800/ROOM 1 Day)      ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n\n");
 printf("                                                                                    ENTER YOR CHOICE FROM 1-4\n\n                                                                                    ");
 scanf("%d",&season);
  switch(season){
  case 1:price+=price_star*noofRooms*days;
  printf("                                                                                                                                  You Choose For JANUARY TO MARCH.\n\n");
  break;
  case 2:price+=price_star*noofRooms*days;
  printf("                                                                                                                                  You Choose For APRIL  TO JULY .\n\n");
  break;
  case 3:price+=price_star*noofRooms*days;
  printf("                                                                                                                                  You Choose For AUGUST TO OCTOBER.\n\n");
  break;
  case 4:price+=price_star*noofRooms*days;
  printf("                                                                                                                                  You Choose For NOVEMBER TO DECEMBER.\n\n");
  break;
  }

  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                            Enter YOUR PACKAGE:-                                  ||\n");
  printf("                                                                                    ||                                1:- EP  (RS 400/Day)                              ||\n");
  printf("                                                                                    ||                                2:- CP  (RS 500/Day)                              ||\n");
  printf("                                                                                    ||                                3:- AP  (RS 700/Day)                              ||\n");
  printf("                                                                                    ||                                4:- MAP (RS 600/Day)                              ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                   Your Choice\n\n                                                                                    ");
  scanf("%d",&Package);
  switch(Package){
     case 1:price+=price_star*noofRooms*days;
     printf("                                                                                                                                  You Choose For EP.\n\n");
     break;
     case 2:price+=price_star*noofRooms*days;
     printf("                                                                                                                                  You Choose For CP.\n\n");
     break;
     case 3:price+=price_star*noofRooms*days;
     printf("                                                                                                                                  You Choose For AP.\n\n");
     break;
     case 4:price+=price_star*noofRooms*days;
     printf("                                                                                                                                  You Choose For MAP.\n\n");
     break;


  }
  if(getch()==13)
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
  printf("                                                                          ENTER YOUR CHOICE (4-6):-\n\n                                                                          ");
  return price;

}
