#include <iostream>
#include <ctime>


using namespace std;
int a, b, start,stop;
int *T,*D;

int znajdzOstatniaCyfre( int a,int b)
{
int a1,b1,c1;
if(a%10!=0&&b!=0&&a!=1)
                {b1=(b%4);a1=a%10;
                switch(a1)
                        {
                            case 1: c1=1;break;
                            case 2: switch(b1)
                                    {
                                    case 1:c1=2;break;
                                    case 2:c1=4;break;
                                    case 3:c1=8;break;
                                    case 0:c1=6;break;
                                    }
                                    break;
                            case 3: switch(b1)
                                    {
                                    case 1:c1=3;break;
                                    case 2:c1=9;break;
                                    case 3:c1=7;break;
                                    case 0:c1=1;break;
                                    }
                                    break;
                            case 4: switch(b1)
                                    {
                                    case 1:c1=4;break;
                                    case 2:c1=6;break;
                                    case 3:c1=4;break;
                                    case 0:c1=6;break;
                                    }
                                    break;

                            case 5: c1=5;break;
                            case 6: c1=6;break;
                            case 7: switch(b1)
                                    {
                                    case 1:c1=7;break;
                                    case 2:c1=9;break;
                                    case 3:c1=3;break;
                                    case 0:c1=1;break;
                                    }
                                    break;
                            case 8: switch(b1)
                                    {
                                    case 1:c1=8;break;
                                    case 2:c1=4;break;
                                    case 3:c1=2;break;
                                    case 0:c1=6;break;
                                    }
                                    break;
                            case 9: switch(b1)
                                    {
                                    case 1:c1=9;break;
                                    case 2:c1=1;break;
                                    case 3:c1=9;break;
                                    case 0:c1=1;break;
                                    }
                                    break;

                        }

                }
                if(a%10==0||a%10==1){c1=a%10;}
                if(b==0&&a!=0) c1=1;

                return(c1);

}



main()
{

    D=new int;
    do
    {cin>>*D;}while(*D<=0||*D>10);
    T=new int[3**D-1];
    for(int i=0; i<=3**D-1; i+=3)
        {
            cin>>T[i];
            cin>>T[i+1];
        }
    start=clock();
    for(int i=0; i<=3**D-1; i+=3)
        {
        T[i+2]=znajdzOstatniaCyfre(T[i],T[i+1]);
        }

    for(int i=2;i<=3**D-1;i+=3)
        {
        cout<<T[i]<<endl;
        }

        delete []T;delete D;
        cout<<"czas wykoniania: "<<((clock()-start))<<" [s] ";
        return (0);
}
