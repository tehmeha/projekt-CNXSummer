#include<iostream>
using namespace std;

int pobijednik_kvadranta( int **polje2d, int pomak_r, int pomak_s)
{
    int pobijedio;
    if( polje2d[0+pomak_r][0+pomak_s]!=0 && polje2d[0+pomak_r][0 +pomak_s]==polje2d[0+pomak_r][1 +pomak_s] && polje2d[0+pomak_r][1 +pomak_s]==polje2d[0+pomak_r][2 +pomak_s] ) //! 1kv. 1red
            {
              pobijedio=polje2d[0][0];
              //cout << pobijedio << endl;
            }
            if( polje2d[1 +pomak_r][0 +pomak_s]!=0 && polje2d[1+pomak_r][0 +pomak_s]==polje2d[1+pomak_r][1 +pomak_s] && polje2d[1+pomak_r][1 +pomak_s]==polje2d[1][2 +pomak_s] ) //! 1kv. 2red
            {
              pobijedio=polje2d[1][0];
              //cout << pobijedio << endl;
            }
            if( polje2d[2+pomak_r][0 +pomak_s]!=0 && polje2d[2+pomak_r][0 +pomak_s]==polje2d[2+pomak_r][1 +pomak_s] && polje2d[2+pomak_r][1 +pomak_s]==polje2d[2+pomak_r][2 +pomak_s] ) //! 1kv. 3red
            {
              pobijedio=polje2d[2][0];
              //cout << pobijedio << endl;
            }
            if( polje2d[0+pomak_r][0 +pomak_s]!=0 && polje2d[0+pomak_r][0 +pomak_s]==polje2d[1+pomak_r][0 +pomak_s] && polje2d[1+pomak_r][0 +pomak_s]==polje2d[2+pomak_r][0 +pomak_s] ) //! 1kv. 1stup
            {
              pobijedio=polje2d[0][0];
              //cout << pobijedio << endl;
            }
            if( polje2d[0+pomak_r][1 +pomak_s]!=0 && polje2d[0+pomak_r][1 +pomak_s]==polje2d[1+pomak_r][1 +pomak_s] && polje2d[1+pomak_r][1 +pomak_s]==polje2d[1+pomak_r][2 +pomak_s] ) //! 1kv. 2stup
            {
              pobijedio=polje2d[0][1];
              //cout << pobijedio << endl;
            }
            if( polje2d[0+pomak_r][2 +pomak_s]!=0 && polje2d[0+pomak_r][2 +pomak_s]==polje2d[1+pomak_r][2 +pomak_s] && polje2d[1+pomak_r][2 +pomak_s]==polje2d[2+pomak_r][2 +pomak_s] ) //! 1kv. 3stup
            {
              pobijedio=polje2d[0][2];
              //cout << pobijedio << endl;
            }
            if( polje2d[2+pomak_r][0 +pomak_s]==polje2d[1+pomak_r][1 +pomak_s]==polje2d[0+pomak_r][2 +pomak_s]) //!dijagonala
            {
                pobijedio=polje2d[1][1];
                //cout <<pobjedio<<endl;
            }
            if(polje2d[0+pomak_r][0 +pomak_s]==polje2d[1+pomak_r][1 +pomak_s]==polje2d[2+pomak_r][2 +pomak_s] ) //!dijagonala
            {
                pobijedio=polje2d[1][1];
                //cout <<pobjedio<endl;
            }
    return pobijedio;
}

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
        pobijednik_kvadranta(polje2d,0,0)
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
