#include <iostream>

using namespace std;

//A time travel game using numbers to access traveling to different times in history.
//Using Unreal Engine Syntax Standards.

void PlayGame()
{
    //Declare 3 number code.
    const int CodeA=4;
    const int CodeB=3;
    const int CodeC=2;

    //Calculating Input from Player Guesses.
    const int CodeSum=CodeA+CodeB+CodeC;
    const int CodeProduct=CodeA*CodeB*CodeC;

    //Printing official code Sum && Product.
    cout<<"There are 3 numbers in the code.\n";
    cout<<"The code adds up to: "<<CodeSum<<endl;
    cout<<"The code multiplies to: "<<CodeProduct<<endl;
    cout<<endl;

    //Storing Player Number Guesses.
    int GuessA, GuessB, GuessC;
    
    //Printing and Taking Input for Player Guesses.
    cout<<"Please enter 3 numbers you believe cracks the code.\n";
    cout<<"Enter the first number?\n";
    cin>>GuessA;
    cout<<"Enter the second number?\n";
    cin>>GuessB;
    cout<<"Enter the third number?\n";
    cin>>GuessC;
    cout<<"You entered: "<<GuessA<<", "<<GuessB<<", "<<GuessC<<endl;

    //Calculating Player Guesses.
    int GuessSum = GuessA+GuessB+GuessC;
    int GuessProduct= GuessA*GuessB*GuessC;

    //Printing Player Guess Calculations.
    cout<<"\nThe sum of your Guess Code is: "<<GuessSum<<endl;
    cout<<"The product of your Guess Code is: "<<GuessProduct<<endl;
    cout<<endl;

    //Checking if Player Guesses Correctly && Prints Wins or Losses.
    if(GuessSum==CodeSum && GuessProduct==CodeProduct)
    {
        cout<<"\nYou are correct! Off you go!\n";
    }
    else
    {
        cout<<"\nIncorrect :-( You're lost in a time warp!\n";
    }
}

void PlayCheck()
{
    char PlayYes='y';
    char PlayNo='n';

    char PlayerPlay;
    cin>>PlayerPlay;
    
    if(PlayerPlay==PlayYes)
    {
        cout<<"\nGood!\n\n";
        PlayGame();
    }
    else
    {
        cout<<"\nTime is not on your side. Goodbye!\n\n";
        return;
    }
}

void Intro()
{
    //Game start welcome message.
    cout<<endl;
    cout<<"       ______ ______     "<<endl;
    cout<<"     _|      Y      |_   "<<endl;
    cout<<"    // ~~ ~~ | ~~ ~   \\  "<<endl;
    cout<<"   //  TIME  | TRAVEL  \\ "<<endl;    
    cout<<"  //________.|._________\\ "<<endl;    
    cout<<" `----------`-'----------'\n\n";

    cout<<"Welcome to the TIME MACHINE!\n\n";
    cout<<"You must enter the correct time code for travel...\n\n";
    cout<<"Do you want to play?!\n";
    cout<<"Enter 'y' to play OR 'n' to return to your time.\n";
    PlayCheck();
}

int main()
{
   Intro();
    return 0;
}