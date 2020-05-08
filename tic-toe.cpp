#include <iostream>

using namespace std;

char squre[]={'1','2','3','4','5','6','7','8','9'};
int checkwins();
void board();
void replay();

main()
{
    int player=1,i,choice;
    char mark;

    do{
        board();
        player=(player%2)?1:2;
        
        cout<<"Player"<<player<<" enter the choice:";
        cin>>choice;

        mark=(player==1)?'x':'o';

        if(choice==1 && squre[0]=='1')
        {
            squre[0]=mark;
        }
        else if(choice==2 && squre[1]=='2')
        {
            squre[1]=mark;
        }
        else if(choice==3 && squre[2]=='3')
        {
            squre[2]=mark;
        }
        else if(choice==4 && squre[3]=='4')
        {
            squre[3]=mark;
        }
        else if(choice==5 && squre[4]=='5')
        {
            squre[4]=mark;
        }
        else if(choice==6 && squre[5]=='6')
        {
            squre[5]=mark;
        }
        else if(choice==7 && squre[6]=='7')
        {
            squre[6]=mark;
        }
        else if(choice==8 && squre[7]=='8')
        {
            squre[7]=mark;
        }
        else if(choice==9 && squre[8]=='9')
        {
            squre[8]=mark;
        }
        else{
            cout<<"invalid move";
            player--;
            cin.ignore();
            cin.get();
        }
        i=checkwins();
        player++;
    }while(i==-1);

    board();
    if(i==1)
    {
        cout<<"******CONGRATULATIONS******"<<endl;
        cout<<"Player"<<--player<<" wins!"<<endl;
    }
    else{
        cout<<"Game over"<<endl;
    }

    
    replay();
    
    
}

int checkwins()
{
    if(squre[0]==squre[1] && squre[1]==squre[2])
        return 1;
    else if(squre[3]==squre[4] && squre[4]==squre[5])
        return 1;
    else if(squre[6]==squre[7] && squre[7]==squre[8])
        return 1;
    else if(squre[0]==squre[3] && squre[3]==squre[6])
        return 1;
    else if(squre[1]==squre[4] && squre[4]==squre[7])
        return 1;
    else if(squre[2]==squre[5] && squre[5]==squre[8])
        return 1;
    else if(squre[0]==squre[4] && squre[4]==squre[8])
        return 1;
    else if(squre[2]==squre[4] && squre[4]==squre[6])
        return 1;
    else if(squre[0]!='1' && squre[1]!='2' && squre[2]!='3' && squre[3]!='4' && squre[4]!='5' && squre[5]!='6' && squre[6]!='7' && squre[7]!='8' && squre[8]!='9')
        return 0;
    else
        return -1;
}

void board()
{
    system("cls");
    cout<<"     Tic tac toe Game    "<<endl;

    cout<<"Player1 = x    Player2 = o"<<endl<<endl;
    cout<<" _____ _____ _____ "<<endl;
    for(int i=0;i<9;i=i+3)
    {
        cout<<"|     |     |     |"<<endl;
        cout<<"|  "<<squre[i]<<"  |  "<<squre[i+1]<<"  |  "<<squre[i+2]<<"  |"<<endl;
        cout<<"|_____|_____|_____|"<<endl;
        
    }
    

}

void replay()
{
    char ans;
    cout<<endl<<endl;
    cout<<"Do you want to play again?(y/n)";
    cin>>ans;
    
    if(ans=='y' || ans=='Y')
    {
        main();
    }
    else if(ans=='n'|| ans=='N')
    {
        system("exit");
    }
    else
    {
        cout<<"invalid input"<<endl;
        cin.ignore();
        cin.get();

    }
}