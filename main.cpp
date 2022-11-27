
#include <iostream>
#include<string.h>
using namespace std;

class newLogin
{
   protected:
        int npassword;
        char nname[25];
    
    public:
        void details()
        {
            
            cout<<"\t\t\tEnter Username:\n\t\t\t";
            cin>>nname;
            
            cout<<"\t\t\tEnter Password:\n\t\t\t";
            cin>>npassword;
       
            if(npassword<10000000)
            {
                cout<<"\t\t\tenter a 8 digit password:\n";
                details();
            }
            
            else
            {
                cout<<"\t\t\t**************************************************************\n";
                cout<<"\t\t\t\t\tlogin ID Created Successfully\n";
                cout<<"\t\t\t**************************************************************\n";
            }
        }
        
    
};


class Login:public newLogin 
{
        protected:
            int password,n;
            char name[25];
       
        public:
            void check()
            {
                a:
                cout<<"\n\t\t\tenter Username:\n\t\t\t";
                cin>>name;
                cout<<"\t\t\tenter Password:\n\t\t\t";
                cin>>password;
                
                if(strcmp(nname,name)==0 && npassword==password)
                {
                    cout<<"\t\t\t**************************************************************\n";
                    cout<<"\t\t\t\t\tlogin Successfully\n";
                    cout<<"\t\t\t**************************************************************\n";
                }
                
                else
                {
                    cout<<"\t\t\t**************************************************************\n";
                    cout<<"\t\t\t\t\tWrong Username or Password\n\n";
                    cout<<"\t\t\t**************************************************************\n";
                    
                b:
                    cout<<"\t\t\tEnter a choice:\n\n";
                    cout<<"\t\t\t\t1.Login Again\n";
                    cout<<"\t\t\t\t2.Create A New Login ID\n";
                    cout<<"\t\t\t\tYour choice=";
                    cin>>n;
                    switch(n)
                    {
                        case 1:
                            goto a;
                            break;
                        
                        case 2:
                                details();
                                check();
                            break;
                        
                        default:
                            cout<<"\t\t\t**************************************************************\n";
                            cout<<"\t\t\t\t\tEnter a valid choice:\n";
                            cout<<"\t\t\t**************************************************************\n";
                            goto b;
                    }
                }
            }
    
};


class train
{
    public:
        void traindetails()
        {
            cout<<"\t\t\t\t\tTRAIN DETAILS\n";
            cout<<"\n1.Mumbai <-> Pune\t2.Pune <-> Goa\t3.Mumbai <-> Goa\t4.Mumbai <-> Kolhapur\t5.Pune <-> Kolhapur\t6.Goa <-> Kolhapur\n";
            
        }
};


class psngDetails:public train
{
    public:
       int nTickets;
    protected:
        int tno,total;
    
    public:
        void getdetails()
        {
            cout<<"\t\t\tEnter train number:";
                cin>>tno;
                
                switch(tno)
                {
                    case 1: 
                        goto c;
                        break;
                        
                    case 2:
                        goto d;
                        break;
                    
                    case 3:
                        goto e;
                        break;
                        
                    case 4:
                        goto f;
                        break;
                        
                    case 5:
                        goto g;
                        break;
                        
                    case 6:
                        goto h;
                        break;
                   
                }
                
               c:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.175\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*175;
                    goto final;
                    
                d:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.210\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*210;
                    goto final;
                    
                e:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.420\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*420;
                    goto final;
                    
                f:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.250\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*250;
                    goto final;
                    
                g:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.210\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*210;
                    goto final;
                    
                h:
               
                    cout<<"\n\t\t\tPrice Per Ticket=Rs.470\n";
                    cout<<"\t\t\tEnter no of tickets you want to book\n\t\t\t";
                    cin>>nTickets;
                    total=nTickets*470;
                    goto final;
                    
                
                
                final:
            
                    cout<<"\t\t\t**************************************************************\n";
        
        
            
        }
        
};


class Details
{
    public:
    int page,i;
    char pname[25],pgender[25];
    
}d[100];


class Ticket:public Login,public psngDetails
{
    int tConfirm;
    
    public:
        
        void confirm()
        {
            cout<<"\t\t\tTotal Cost:"<<total; 
            
        x:
            cout<<"\n\t\t\tConfirm to book Tickets:\n\t\t\t\t1.Yes\t\t\t\t2.No";
            cout<<"\t\t\tEnter your choice:";
            cin>>tConfirm;
            
            switch(tConfirm)
            {
                case 1:
                    goto end;
                    break;
                
                case 2:
                    cout<<"\n\t\t\t**************************************************************\n";
                    cout<<"\t\t\t\t\tFAILED TO BOOK TICKETS\n";
                    cout<<"\t\t\t**************************************************************\n";
                    break;
                
                default:
                    cout<<"\t\t\t**************************************************************\n";
                    cout<<"\t\t\t\t\tEnter a valid choice:\n";
                    cout<<"\t\t\t**************************************************************\n";
                    goto x;
            }
            
        end:
            check();
            
            cout<<"\n\t\t\t**************************************************************\n";
            cout<<"\t\t\t\t\t"<<nTickets<<" TICKETS BOOKED SUCCESSFULLY\n";
            cout<<"\t\t\t**************************************************************\n";
            
            
        }
};


int main()
{
    Ticket t;
    
    
        t.details();
        t.check();
        t.traindetails();
        t.getdetails();
        cout<<"\t\t\tEnter passenger details:\n ";
            for(int i=0;i<t.nTickets;i++)
            {
                cout<<"\t\t\t\t\tEnter Name of passenger:";
                cin>>d[i].pname;
                cout<<"\n\t\t\t\t\tEnter Age of passenger:";
                cin>>d[i].page;
                cout<<"\n\t\t\t\t\tEnter Gender of Passenger:";
                cin>>d[i].pgender;
            }
        
        t.confirm();
    
    return 0;
        
}
