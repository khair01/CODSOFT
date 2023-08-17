#include<iostream>
using namespace std;
int main(){
    srand(time(0));
    int guess;
    int attempts = 5;
    int RandomNumber = rand() % 1000;
   

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "You have " << attempts << " attempts to guess the randomly generated number between 0 and 999." << endl;

    while(attempts != 0){
        
        cout<<"Enter Your Guess :  ";
        cin >> guess;

        if(guess  > RandomNumber){
            cout<<"Too High !! "<<endl;
            --attempts;
        }
        else if(guess < RandomNumber){
            cout<<"Too Low !! "<<endl;
                --attempts;
        }
        else{
            cout<<"Well Done !! You Guessed The Number !! "<<endl;
            break;
        }
        cout<<"Remaining attempts : "<<attempts<<endl;

    }
    if(attempts == 0){
        cout<<"Sorry, you've run out of attempts, Play again !! "<<endl;
    }

return 0;
}