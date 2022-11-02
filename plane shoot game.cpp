#include  <iostream>

using namespace std;
#define S 11

void printBoard(char plane[S][S])
{
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {

            cout<<plane[i][j];
        }
        cout<<"\n";
    }

}

int main(){
    int i,j,n,m;
    char ongots[S][S];
    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            
            ongots[i][j]='*';
        }
    }
     ongots[5][8]='T';
     ongots[4][7]='B';
     ongots[5][7]='B';
     ongots[6][7]='B';

     ongots[5][6]='B';

     ongots[4][5]='B';
     ongots[5][5]='B';
     ongots[6][5]='B';
     
    while(1>0){
     cout<<"x:"; cin>>n;
     cout<<"y:"; cin>>m;

     if(n<11 && m<11){
       
            if(ongots[n][m]=='T')
            {
                ongots[n][m]='X';
                cout<<"bayr hurgey ta hojloo :)) \n";
                printBoard(ongots);
            }
                
            else if(ongots[n][m]=='B')
            {
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:( \n";
                printBoard(ongots); 
            }
            else if(ongots[n][m]=='B'){
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);
                
            }
            else if(ongots[n][m]=='B'){
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);
                
            }
            else if(ongots[n][m]=='B')
            {
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);    
            }
            else if(ongots[n][m]=='B')
            {
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);    
            }
            else if(ongots[n][m]=='B')
            {
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);    
            }
            else if(ongots[n][m]=='B')
            {
                ongots[n][m]='X';
                cout<<"ongots sharhdlaa:((";
                printBoard(ongots);   
            }
            else
            {
                cout<<"Ta onsongui dahin oroldnuu! \n";
                printBoard(ongots);
            
            
            }   
     }
     else
     {
        cout<<"Ta buruu utga oruulsan bn. 1-10 hoorond utga oruulna uu \n ";
     }

}
return 0;
}