#include<iostream>
using namespace std;

int main()
{
    bool sit=true;
    int stupac,red;
    int polje2d[9][9]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
   do{
        cout <<"Unesite stupac u koji zelite unjeti krizic/kruzic:";
        cin >>stupac;
        cout <<"Unesite red u koji zelite unjeti krizic/kruzic:";
        cin >>red;
        if(stupac <=8 && stupac >0 && red <=8  && red > 0)
        {
          cin >> polje2d[stupac-1][red-1];
          for(int i=0;i<8;i++)
          {

              for(int j=0;j<8;j++)
              {
                if(j==3 || j==6)
                {
                    cout<<"\t";
                }
                cout << polje2d[i][j]<<"\t";
              }
              cout <<endl;
          }
        }
        else
        {
            cout <<"Unjeli ste krive podatke."<<endl;
        }
    }while(sit=true);

}
