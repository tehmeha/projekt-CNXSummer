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
    bool prvi=false,drugi=false,treci=false,cetvrti=false,peti=false,sesti=false,sedmi=false,osmi=false,deveti=false;
    int igrac=1;
    int stupac,red;
    int polje2d[9][9]={{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0},{0,0,0}};
   do{
        if(igrac%2==0)
        {
            cout<<"Igra krizic tj. 2"<<endl;
        }
        else
        {
            cout<<"Igra kruzic tj. 1"<<endl;
        }

        cout <<"Unesite stupac u koji zelite unjeti krizic/kruzic: ";
        cin >>stupac;
        cout <<"Unesite red u koji zelite unjeti krizic/kruzic: ";
        cin >>red;
        if(stupac <= 9 && stupac >= 1 && red <=9  && red >= 1)
        {

        polje2d[red-1][stupac-1] = igrac;
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
        if(red ==1  || red ==4 || red==7 )
        {
            if(stupac==1 || stupac==4 || stupac==7)
            {
                cout<<"Sljedeci krizic/kruzic mora se upisati u prvi kvadrant."<<endl;
                prvi=true;
            }
            if(stupac==2 || stupac==5 || stupac==8)
            {
                cout<<"Sljedeci krizic/kruzic mora se upisati u drugi kvadrant."<<endl;
                drugi=true;
            }
            if(stupac==3 || stupac==6 || stupac==9)
            {
                cout<<"Sljedeci krizic/kruzic mora se upisati u treci kvadrant."<<endl;
                treci=true;
            }
        }
        if(red ==2  || red ==5 || red==8 )
        {
                if(stupac==1 || stupac==4 || stupac==7)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u cetvrti kvadrant."<<endl;
                    cetvrti =true;
                }
                if(stupac==2 || stupac==5 || stupac==8)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u peti kvadrant."<<endl;
                    peti=true;
                }
                if(stupac==3 || stupac==6 || stupac==9)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u sesti kvadrant."<<endl;
                    sesti=true;
                }
            }
            if(red ==3  || red ==6 || red==9 )
            {
                if(stupac==1 || stupac==4 || stupac==7)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u sedmi kvadrant."<<endl;
                    sedmi=true;
                }
                if(stupac==2 || stupac==5 || stupac==8)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u osmi kvadrant."<<endl;
                    osmi=true;
                if(stupac==3 || stupac==6 || stupac==9)
                {
                    cout<<"Sljedeci krizic/kruzic mora se upisati u deveti kvadrant."<<endl;
                    deveti=true;
                }
            }
        }
        else
            {
                cout <<"Unjeli ste krive podatke."<<endl;
        if(igrac == 1)
        {
            igrac = 2;
        }
        else if(igrac == 2)
        {
            igrac = 1;
        }
            }
            cout << endl;
        }
        if(igrac == 1)
        {
            igrac = 2;
        }
        else if(igrac == 2)
        {
            igrac = 1;
        }
    }
    while(sit==true);
}
