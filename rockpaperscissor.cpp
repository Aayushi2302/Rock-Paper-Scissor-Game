#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

//rock paper scissor
//0     1       2   

int main(){

    char ch;
    string choice[3] = {"Rock","Paper","Scissor"};
    int playerChoice,computerChoice,playerScore,computerScore,finalScore=0;
    do{

        playerChoice=computerChoice=playerScore=computerScore=0;
       
        srand(time(0));  //seed rand by default : 1


        do{
            cout<<"\nYour choices are :";
            cout<<"\n0 : Rock \n1 : Paper \n2 : Scissor";
            cout<<"\nMake a choice : ";
            cin>>playerChoice;
        }while(playerChoice>2 || playerChoice<0);

        computerChoice = rand() % 3;    //between 0 and 3     

        if(playerChoice == computerChoice) ;
        else if(playerChoice == 0 && computerChoice ==2){
            playerScore++;
            finalScore++;
        }
            
        else if(computerChoice == 0 && playerChoice == 2)
            computerScore++;
        else if(playerChoice > computerChoice){
            playerScore++;
            finalScore++;
        }
        else
            computerScore++;


        cout<<"\nPlayer vs Computer";
        cout<<"\n"<<choice[playerChoice]<<" vs "<<choice[computerChoice];

        if(playerScore==computerScore)
            cout<<"\nIts a Tie!!\n Try Again\nYour Score is : "<<finalScore;
        else if(playerScore>computerScore)
            cout<<"\nCongratualtions!! You Won\nYour Score is : "<<finalScore;
        else
            cout<<"\nOops!! Computer Won\n Better Luck Next Time\nYour score is : "<<finalScore;


        cout<<endl<<"Do you want to continue the game (Y/N) : ";
        cin>>ch;
        
        
    }while(ch == 'Y' || ch == 'y');

    
    
return 0;
}