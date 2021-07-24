#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

void PrintIntroduction(int Difficulty)
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
    cout<<"You must enter the correct time code at level "<<Difficulty<<" for travel...\n\n";
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);
    
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    cout << "\n+ There are 3 numbers in the code\n";
    cout << "+ The codes add-up to: " << CodeSum <<endl;
    cout << "+ The codes multiply to: " << CodeProduct <<endl;

    int GuessA, GuessB, GuessC;
    
    //Printing and Taking Input for Player Guesses.
    cout<<"\nPlease enter 3 numbers you believe cracks the code.\n\n";
    cout<<"Enter the first number?\n";
    cin>>GuessA;
    cout<<"Enter the second number?\n";
    cin>>GuessB;
    cout<<"Enter the third number?\n";
    cin>>GuessC;
    cout<<"You entered: "<<GuessA<<", "<<GuessB<<", "<<GuessC<<flush;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout<<"\nYou are correct! Send a postcard...if they've been invented.\n";
        return true;
    }
    else
    {
        cout<<"\nIncorrect :-( You're lost in a time warp! Try again?\n";
        return false;
    }
}

int main()
{
    system("cls"); // clear terminal
    
    srand(time(NULL)); //create new random sequence based on time of day.

    int LevelDifficulty = 3;
    const int MaxDifficulty = 5;

    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);

        cin.clear();
        cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }

    //Game Exit Print Message
    cout<<endl;
    cout<<"       ______ ______     "<<endl;
    cout<<"     _|      Y      |_   "<<endl;
    cout<<"    // ~~ ~~ | ~~ ~   \\  "<<endl;
    cout<<"   //  TIME  | TRAVEL  \\ "<<endl;    
    cout<<"  //________.|._________\\ "<<endl;    
    cout<<" `----------`-'----------'\n\n";

    cout << "\n*** Time Machine Cool Down, try again later. *** \n";
    cout << "*** Remeber to leave Pompeii before August 24, 79 AD! *** \n\n";
    return 0;
}