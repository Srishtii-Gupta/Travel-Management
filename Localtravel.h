extern int Local_travel(){
    //SetColor(6);
    ClearConsoleToColors(6,15);
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
    SetColor(6);
  int local,price=0;
  while(1){
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                    ||                                1:- Home station                                  ||\n");
  printf("                                                                                    ||                                2:- DESTINATION                                   ||\n");
  printf("                                                                                    ||                                3:- EXIT                                          ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                   Please Enter Your Local Travel\n\n                                                                                   ");
  int home;
    scanf("%d",&local);
    switch(local){
      case 1:
  while (1){

        system("cls");
  printf("                                                                                    You choose For Home Station\n\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                    ||                          1:- To and From RLy station(Rs 150 for cab)             ||\n");
  printf("                                                                                    ||                          2:- To and From AIRPORT (Rs 250 for cab)                ||\n");
  printf("                                                                                    ||                          3:- Exit                                                ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                   Enter your choice:-\n\n                                                                                   ");
  scanf("%d",&home);
  switch(home){
    case 1:price+=150;
    printf("                                                                                                                                                        You Choose For To and from Rly Station\n");
    break;
    case 2:price+=250;
    printf("                                                                                                                                                        You Choose For To and from AIRPORT\n");
    break;
  }
  if(home==3){
    break;
  }
  }
  break;
    case 2:
  while(1){
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
    //SetColor(12);
    SetColor(6);
  printf("                                                                                    You choose For Destination\n\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ||                              Enter Your choice:-                                 ||\n");
  printf("                                                                                    ||                          1:- To and From RLy station(Rs 250 for cab)             ||\n");
  printf("                                                                                    ||                          2:- To and From AIRPORT (Rs 350 for cab)                ||\n");
  printf("                                                                                    ||                          3:- SITESEING (Rs 550 for cab)                          ||\n");
  printf("                                                                                    ||                          4:- EXIT                                                ||\n");
  printf("                                                                                    ||                                                                                  ||\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("                                                                                    ______________________________________________________________________________________\n");
  printf("Enetr your choice ");

        scanf("%d",&home);
  switch(home){
    case 1:price+=250;
    printf("                                                                                                                                                        You Choose For To and from Rly Station\n");
    break;
    case 2:price+=350;
    printf("                                                                                                                                                        You Choose For To and from AIRPORT\n");
    break;
    case 3:price+=550;
    printf("                                                                                                                                                        You Choose SITESEEING\n");
    break;
  }
  if(home==4){
    break;
  }
  }
  break;
    }
    if(local==3){
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
  printf("                                                                          ENTER YOUR CHOICE (5-6):-\n\n                                                                          ");
  return price;

}
