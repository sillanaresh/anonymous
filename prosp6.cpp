//create a class using musicisns using three methods//
#include<iostream>
#include<string.h>
using namespace std;
class musicians
{
   protected:
    char instrument[15][15];
   public:
    void stringins()
    {
       strcpy(instrument[0],"veena");
       strcpy(instrument[1],"guitar");
       strcpy(instrument[2],"sitar");
       strcpy(instrument[3],"sarod");
       strcpy(instrument[4],"mandolin");
     }
      void wind()
    {
       strcpy(instrument[0],"flute");
       strcpy(instrument[1],"clarinet");
       strcpy(instrument[2],"saxophone");
       strcpy(instrument[3],"nadaswaram");
       strcpy(instrument[4],"piccolo");
     }
       void perc()
    {
       strcpy(instrument[0],"tabala");
       strcpy(instrument[1],"mrindagam");
       strcpy(instrument[2],"bangos");
       strcpy(instrument[3],"drums");
       strcpy(instrument[4],"tambour");
     }
     void show()
     {
        for(int i=0;i<5;i++)
           cout<<instrument[i]<<" ";
      }
    };
    class typeins:public musicians
    {
       public:
        void get()
        {
          int choice;
           cout<<"1.string instruments"<<endl;
           cout<<"2.wind instruments"<<endl;
           cout<<"3.percusion instruments"<<endl;
           cout<<"enter choice"<<endl;
           cin>>choice;
         switch(choice)
         {
           case 1:
                  stringins();
                  musicians::show();
                  cout<<endl;
              break;
            case 2:
                  wind();
                  musicians::show();
                  cout<<endl;
               break;
              case 3:
                  perc();
                  musicians::show();
                  cout<<endl;
                break;
           }
        }
     };
     int main()
     {
        typeins t;
        t.get();
        return 0;
      }
        
