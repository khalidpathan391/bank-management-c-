#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class bank
{
	public:

	int ac_no;
	char ac_holder[20];
	float balance;
		
		void set_data()
		{
			
			cout<<"\nEnter ac_no:";
			cin>>ac_no;
			cout<<"\nEnter ac_holder:";
			fflush(stdin);
			gets(ac_holder);
			cout<<"\nEnter balance:";
			cin>>balance;
		}
	void display()
		{
			cout<<"\n===================================================\n";
			cout<<"\nACOUNT_NO:"<<ac_no;
			cout<<"\ACOUNT_HOLDER:"<<ac_holder;
			cout<<"\nBALANCE:"<<balance;
		}
		
};

main()
{
	bank obj[5];
	int ch,index=0,i,se,flag=0,g=1;
	int amount,acc_no;
	while(g)
	{
		flag=0;
		system("CLS");
		cout<<"\n1.Add_a/c\n2.search_a/c\n3.Display_all\n4.deposit\n5.withdraw\n6.Exit";
		cout<<"-------\nEnter your choice:----------";
		cin>>ch;
		switch(ch)
		{
			case 1:      obj[index].set_data();
			index++;
			         break;
			case 2:      cout<<"enter  searching a/c";
		                	cin>>se;
			       for(i=0;i<index;i++)
		      	{
			
			       if(obj[i].ac_no==se)
			{
			      obj[i].display();
			         flag++;
			}
		}
			if(flag==0)
			cout<<"se not found";
			break;
			
			case 3:
		        	for(i=0;i<index;i++)
		         	obj[i].display();
				break;
				case 4:     cout<<"\n Plese enter A/c no";
				cin>>acc_no;
				for(i=0;i<index;i++)
				{
					if(obj[i].ac_no==acc_no)
					{
						flag=1;
						cout<<"------WELCOME:---------";
						cout<<"\n enter the amount to be deposited:";
						cin>>amount;
						obj[i].balance=obj[i].balance+amount;
						cout<<"\n-------------------------";
						obj[i].display();
					}
					
				} 
				if(flag==0)
				{
				cout<<"\n SORRY YOU ARE CHEATER OR USE YOUR CHASMA AND TRY AGAIN:";	
				}
			
				break;
				
					case 5:     cout<<"\n Plese enter A/c no";
				cin>>acc_no;
				for(i=0;i<index;i++)
				{
					if(obj[i].ac_no==acc_no)
					{
						flag=1;
						cout<<"------WELCOME:---------";
						cout<<"\n enter the amount to be withdraw:";
						cin>>amount;
						if(obj[i].balance-amount>=1000)
						{
						
						obj[i].balance=obj[i].balance-amount;
						cout<<"\n-------------------------";
						obj[i].display();
					}
					else
					cout<<"\n YOU HAVE NOT ENOUGH MONEY:";
					}
				} 
				if(flag==0)
				{
				cout<<"\n SORRY YOU ARE CHEATER POLICE BHEJU TERE GHAR PE:";	
				}
				break;
		       	case 6:exit(0);
			break;
			default:cout<<"\nWrong choice try again!";
			
		
		}
		cout<<"Are you go back on menu press 1";
		cin>>g;
		}
		//getch();
	}
