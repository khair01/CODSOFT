#include<iostream>
#include<vector>
#include<string.h>
#include<cstring>
#include<unordered_map>
#include<algorithm>
#include<limits.h>

using namespace std;
bool Check_winner(const vector<vector<char>>& Board, char player) {
    for (int i = 0; i < 3; ++i) {
        // Check rows and columns
        if ((Board[i][0] == player && Board[i][1] == player && Board[i][2] == player) ||
            (Board[0][i] == player && Board[1][i] == player && Board[2][i] == player)) {
            return true;
        }
    }

    // Check diagonals
    if ((Board[0][0] == player && Board[1][1] == player && Board[2][2] == player) ||
        (Board[0][2] == player && Board[1][1] == player && Board[2][0] == player)) {
        return true;
    }

    return false;
}
void Display_Board(vector<vector<char>>Board){

    for(int i=0 ; i<3 ; i++){
        for(int j=0 ; j<3 ; j++){
            cout<<Board[i][j];
            if ( j < 2){
                cout << "   |   ";
            }

        }
        cout << endl;
        if (i < 2) {
            cout << "------------------" << endl;
        }
    }
}
int main(){
    while(true){
    int x = 3 , y= 3;
    int Total_moves = 9;
    char player = 'X';
    int move;
    vector<vector<char>>Board={
        {'1' , '2' , '3'},
        {'4' , '5' , '6'},
        {'7' , '8' , '9'}
    };
    
    cout<<"----------- Tic - Toe Game ---------------"<<endl;
    cout<<endl;
    cout<<"Player 1 : X"<<endl;
    cout<<"Player 2 : O"<<endl;
    cout<<endl;
    cout<<"Press any key to continue ..... ";
    getchar();
    system("cls");

    do{
    
        Display_Board(Board);
        cout<<endl;
        int r , c;
        cout<<"Current Player : "<<player<<endl;
        cout<<"Enter your move : "<<endl;
        cin >> move;
        cout<<endl;
        --Total_moves;
        if(move < 1 && move > 9){
            cout<<"Invalid move !!"<<endl;
            continue;
        }
        // Formulas to find row and col //
        r = (move - 1) / x;
        c = (move - 1) % y;

        if(Board[r][c]=='X' ||Board[r][c] == 'O'){
            cout<<"Move Already Taken !! "<<endl;
            continue;
        }
        else
        {
           Board[r][c] = player;
        }

        if(Check_winner(Board,player)){
            cout<<"Player "<<player<<" wins !!"<<endl;
            break;
        }

        if(Total_moves == 0){
            cout<<"It's a Draw !! "<<endl;
            break;
        }
        
        // Player change //
        if(player == 'X'){
            player = 'O';
        }
        else
        player = 'X';

    }while(true);

    cout<<"------- Game ends ----------"<<endl;
    cout<<"Do you want to play again ? "<<endl;
    cout<<"1) Yes "<<endl;

    int opt;
    cin >> opt;
    if(opt == 2){
        break;
    }
}
 

return 0;
}