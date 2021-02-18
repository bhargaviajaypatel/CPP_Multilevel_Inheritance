#include<iostream.h>
#include<conio.h>
class student
{
	protected:
	char name[100];
	int rollno;

	public:
	void getbasicinfo()
	{
		cout<<"Enter your Name: ";
		cin>>name;

		cout<<"Enter your rollno: ";
		cin>>rollno;
	}
	void displaybasicinfo()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Roll No. :"<<rollno<<endl;
	}
};
class test:public student
{
	protected:
	int mark1,mark2;

	public:
	void get_marks()
	{
		cout<<"Enter Marks of Subject 1 :";
		cin>>mark1;
		cout<<"Enter Marks of Subject 2 :";
		cin>>mark2;
	}
	void put_marks()
	{
		cout<<"Marks for Subject 1 :"<<mark1<<endl;
		cout<<"Marks for Subject 2 :"<<mark2<<endl;
	}
};
class result:public test
{
	protected:
	int total;

	public:
	void display()
	{
		total=mark1+mark2;
		cout<<"Total:"<<total<<endl;
	}

};
void main()
{
	clrscr();
	result std1;

	std1.getbasicinfo();
	std1.get_marks();
	std1.displaybasicinfo();
	std1.put_marks();
	std1.display();

	getch();
}