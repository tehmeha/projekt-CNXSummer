#include<iostream>
using namespace std;

int main()
{
    bool sit=true;
    int prvi=0,drugi=0,treci,cetvrti,peti,sesti,sedmi,osmi,deveti,igrac=2;
    int stupac,red;
    int polje2d[9][9]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
   do{
        if(igrac%2==0)
        {
            cout<<"Igra krizic tj. 1"<<endl;
        }
        else
        {
            cout<<"Igra kruzic tj. 2"<<endl;
        }
        igrac++;
        cout <<"Unesite stupac u koji zelite unjeti krizic/kruzic: ";
        cin >>stupac;
        cout <<"Unesite red u koji zelite unjeti krizic/kruzic: ";
        cin >>red;
        if(stupac <=8 && stupac >0 && red <=8  && red > 0)
        {
          polje2d[stupac-1][red-1] = igrac%2+1;
          for(int i=0;i<9;i++)
          {

              for(int j=0;j<9;j++)
              {
                if(j==3 || j==6)
                {
                    cout<<"  ";
                }

                cout << polje2d[i][j];
              }
              if(i == 2 || i==5)
              {
                   cout <<endl;
              }
            cout <<endl;
          }
            if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2] || polje2d[1][0]==polje2d[1][1]==polje2d[1][2] || polje2d[2][0]==polje2d[2][1]==polje2d[2][2])
            {
              prvi=1;
              cout << "";
            }
            if(polje2d[0][0]==polje2d[1][0]==polje2d[2][0]==1 || polje2d[0][1]==polje2d[1][1]==polje2d[2][1]==1 || polje2d[0][2]==polje2d[1][2]==polje2d[2][2]==1)
            {
              prvi=1;
            }
            if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==2 || polje2d[1][0]==polje2d[1][1]==polje2d[1][2]==2 || polje2d[2][0]==polje2d[2][1]==polje2d[2][2]==2)
            {
              prvi=2;
            }
            if(polje2d[0][0]==polje2d[1][0]==polje2d[2][0]==2 || polje2d[0][1]==polje2d[1][1]==polje2d[2][1]==2 || polje2d[0][2]==polje2d[1][2]==polje2d[2][2]==2)
            {
              prvi=2;
            }
            if(polje2d[0][0]==polje2d[1][1]==polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2])
            {
                prvi=polje2d[1][1];
            }
            //drugi
            if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[1][0]==polje2d[1][1]==polje2d[1][2]==1 || polje2d[2][0]==polje2d[2][1]==polje2d[2][2]==1)
            {
              drugi=1;
            }
            if(polje2d[3][0]==polje2d[4][0]==polje2d[5][0]==1 || polje2d[3][1]==polje2d[4][1]==polje2d[5][1]==1 || polje2d[3][2]==polje2d[4][2]==polje2d[5][2]==1)
            {
              drugi=1;
            }
            if(polje2d[3][0]==polje2d[3][1]==polje2d[3][2]==2 || polje2d[3][0]==polje2d[4][1]==polje2d[5][2]==2 || polje2d[3][0]==polje2d[4][1]==polje2d[5][2]==2)
            {
              drugi=2;
            }
            if(polje2d[0][0]==polje2d[1][0]==polje2d[2][0]==2 || polje2d[0][1]==polje2d[1][1]==polje2d[2][1]==2 || polje2d[0][2]==polje2d[1][2]==polje2d[2][2]==2)
            {
              drugi=2;
            }
            if(polje2d[0][0]==polje2d[1][1]==polje2d[2][2] || polje2d[2][0]==polje2d[1][1]==polje2d[0][2])
            {
                drugi=polje2d[4][1];
            }
          }


    else
        {
            cout <<"Unjeli ste krive podatke."<<endl;
        }
        cout << endl;
    cout<<"Prvo polje je:"<<prvi <<endl;
    cout <<"Drugo polje je:"<<drugi<<endl;
    }while(sit=true);

}
