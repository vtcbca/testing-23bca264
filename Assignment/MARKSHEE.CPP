//Write a program to calculate the percantage and grade of 5 subjetcs
#include<iostream.h>
#include<conio.h>
class student
{
	public:
	int wd,oops,python,stat,iks,total;
	float per;
	void getmarks()
	{
		cout<<"\nEnter Marks Of WEB DESIGNING :";
		cin>>wd;
		cout<<"\nEnter Marks Of OBJECT ORIENTED PROGRAMMING DATA STURCTURE :";
		cin>>oops;
		cout<<"\nEnter Marks Of PYTHON :";
		cin>>python;
		cout<<"\nEnter Marks Of STATSTIC :";
		cin>>stat;
		cout<<"\nEnter Marks Of INDIAN KNOWLADGE SYSTEM :";
		cin>>iks;
	}
	void marks()
	{
		clrscr();
		cout<<"WD\t\tOOPS\t\tPYTHON\t\tSTAT\t\tIKS\t\t";
		cout<<wd<<"\t\t"<<oops<<"\t\t"<<python<<"\t\t"<<stat<<"\t\t"<<iks<<"\t\t";
		cout<<"---------------------------------------------------------------------";
		total=wd+oops+python+stat+iks;
		cout<<"\n\nTHE TOTAL IS :"<<total;
		per=total/5;
		cout<<"\n\nTHE PERCENTAGE IS "<<per ;
	}
	void grade()
	{
		if (per>80)
		{
			cout<<"\n\nGRADE A";
		}
		else if (per>70)
		{
			cout<<"\n\nGRADE B";
		}
		else if (per>60)
		{
			cout<<"\n\nGRADE C";
		}
		else if (per>40)
		{
			cout<<"\n\nGRADE D";
		}
		else if (per=40)
		{
			cout<<"\n\nGRADE D";
		else if (per<40)
		{
			cout<<"\n\nGRADE F";
		}
	}
};
void main()
{
	student s1;
	clrscr();
	s1.getmarks();
	s1.marks();
	s1.grade();
	getch();
}