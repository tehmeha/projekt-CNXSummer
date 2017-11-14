#include<iostream>
using namespace std;

int main()
{
    bool sit=true;
    int prvi=0,drugi,treci,cetvrti,peti,sesti,sedmi,osmi,deveti,igrac=2;
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
        cout <<"Unesite stupac u koji zelite unjeti krizic/kruzic:";
        cin >>stupac;
        cout <<"Unesite red u koji zelite unjeti krizic/kruzic:";
        cin >>red;
        if(stupac <=8 && stupac >0 && red <=8  && red > 0)
        {
          cin >> polje2d[stupac-1][red-1];
          for(int i=0;i<9;i++)
          {

              for(int j=0;j<9;j++)
              {
                if(j==3 || j==6)
                {
                    cout<<"\t";
                }

                cout << polje2d[i][j];
              }
              cout <<endl;
          }
            if(polje2d[0][0]==polje2d[0][1]==polje2d[0][2]==1 || polje2d[1][0]==polje2d[1][1]==polje2d[1][2]==1 || polje2d[2][0]==polje2d[2][1]==polje2d[2][2]==1)
            {
              prvi=1;
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
            if(polje2d[0][0]==polje2d[1][1]==polje2d[2][2]==1 || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]==1)
            {
                prvi=1;
            }
            if(polje2d[0][0]==polje2d[1][1]==polje2d[2][2]==2 || polje2d[2][0]==polje2d[1][1]==polje2d[0][2]==2)
            {
                prvi=2;
            }
          }


    else
        {
            cout <<"Unjeli ste krive podatke."<<endl;
        }
    cout<<"Prvo polje je:"<<prvi <<endl;
    }while(sit=true);

}
