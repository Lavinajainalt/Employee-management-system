#include<iostream>
#include<windows.h>
using namespace std;
struct emp{
	string name,id ,address,email;
	int salary,contact;
};
int total=0;
emp e[100];
void title(){
	cout<<"============================"<<endl;
	cout<<"EMPLOYEE MANAGEMENT SYSTEM"<<endl;
	cout<<"============================"<<endl;
}
void empdata(){
	int user =0;
	cout<<"employee data you want to enter?"<<endl;
	cin>>user;
	for (int i=total;i<total+user;i++){
		cout <<"enter employee data"<<i+1<<endl;
		cout<<"enter employee name"<<endl;
		cin>>e[i].name;
		cout<<"enter id"<<endl;
		cin>>e[i].id;
		cout<<"enter employee address"<<endl;
		cin>>e[i].address;
		cout<<"enter employee contact"<<endl;
		cin>>e[i].contact;
		cout<<"enter employee salary"<<endl;
		cin>>e[i].salary;	
		cout<<"enter employee Email"<<endl;
		cin>>e[i].email;
	}	
	total=total+user;
}
void show(){
	if(total!=0){
		for(int i=0;i<total;i++){
			cout<<"data of employee"<<i+1<<endl;
			cout<<"name"<<e[i].name<<endl;
			cout<<"id"<<e[i].id<<endl;
			cout<<"address"<<e[i].address<<endl;
			cout<<"contact"<<e[i].contact<<endl;
			cout<<"salary"<<e[i].salary<<endl;
			cout<<"email"<<e[i].email<<endl;
			
		}
		
	}
	else{
		cout<<"no data entered"<<endl;
	}
}

void search(){
	if(total!=0){
		string id;
		cout<<"enter id of employee you want to search"<<endl;
		cin>>id;
		for (int i=0;i<total;i++){
			if(e[i].id==id){
		    cout<<"data of employee"<<i+1<<endl;
		    cout<<"name"<<e[i].name<<endl;
			cout<<"id"<<e[i].id<<endl;
			cout<<"address"<<e[i].address<<endl;
			cout<<"contact"<<e[i].contact<<endl;
			cout<<"salary"<<e[i].salary<<endl;
			cout<<"email"<<e[i].email<<endl;
			break;
	}
	if(i==total-1){
		cout<<"no such record found"<<endl;
	}


}}
else{cout<<"no data entered"<<endl;
}
}
void update(){
	if(total!=0){
		string id;
		cout<<"enter id of employee you want to update"<<endl;
		cin>>id;
		for (int i=0;i<total;i++){
			if(e[i].id==id){
		    cout<<"old data of employee"<<i+1<<endl;
		    cout<<"name"<<e[i].name<<endl;
			cout<<"id"<<e[i].id<<endl;
			cout<<"address"<<e[i].address<<endl;
			cout<<"contact"<<e[i].contact<<endl;
			cout<<"salary"<<e[i].salary<<endl;
			cout<<"email"<<e[i].email<<endl;
			cout<<"new data of employee"<<endl;
       	cout <<"enter employee data"<<endl;
		cout<<"enter employee name"<<endl;
		cin>>e[i].name;
		cout<<"enter id"<<endl;
		cin>>e[i].id;
		cout<<"enter employee address"<<endl;
		cin>>e[i].address;
		cout<<"enter employee contact"<<endl;
		cin>>e[i].contact;
		cout<<"enter employee salary"<<endl;
		cin>>e[i].salary;	
		cout<<"enter employee Email"<<endl;
		cin>>e[i].email;
		break;
}
if(i=total-1){
	cout<<"no such data found"<<endl;
}
}
}
else{
	cout<<"no data is entered"<<endl;
}}
void del(){
	if(total!=0){
		int press;
		cout<<"press 1 to delete specific data"<<endl;
		cout<<"press 2 to delete all data"<<endl;
		cin>>press;
		if(press==1){
		string id;
		cout<<"enter id of employee you want to delete"<<endl;
		cin>>id;
		for (int i=0;i<total;i++)
{
	if (e[i].id==id){
		e[i].name=e[i+1].name;
		e[i].id=e[i+1].id;
		e[i].address=e[i+1].address;
		e[i].contact=e[i+1].contact;
		e[i].salary=e[i+1].salary;
		e[i].email=e[i+1].email;
		total--;
		cout<<"you requried recored is deleted"<<endl;
		break;
	}
	if(i==total-1){
		cout<<"no such recored found"<<endl;
	}
	}	}
	else if(press==2){
		total=0;
		cout<<"all recored is deleted"<<endl;
	}
	else{
		cout<<"invalid input"<<endl;
	}
}
else{
	cout<<"no data found"<<endl;
}}

int main(){
	int a;
do{
a=0;
cout<<"==============================================="<<endl;
	cout<<"-----   EMPLOYEE MANAGEMENT SYSTEM  -----"<<endl;
	cout<<"          **   SIGN IN **"<<endl;
	cout<<"============================================"<<endl;
	string username,password;
	cout<<"enter username:-";
	cin>>username;
	cout<<"enter password:-";
	cin>>password;
	cout<<"your identity is creating"<<endl;
	Sleep(2000);
	cout<<"your identity is created"<<endl;
	system("pause");
	system("CLS");
	top:
	cout<<"============================================="<<endl;
	cout<<"-----   EMPLOYEE MANAGEMENT SYSTEM   -----"<<endl;
	cout<<"          ***LOGIN**"<<endl;
	cout<<"============================================"<<endl;
	string username1,password1;
	cout<<"enter username:-";
	cin>>username1;
	cout<<"enter password:-";
	cin>>password1;
	if(username1==username&&password1==password){
	system("CLS");
	title;
	char user;
	while (1){
		cout<<"press 1: to add employee data"<<endl;
		cout<<"press 2:to show employee data"<<endl;
	    cout<<"press 3:to search employee data"<<endl;
		cout<<"press 4:to update employee data"<<endl;
	    cout<<"press 5:to delete employee data"<<endl;
		cout<<"press 6:to  logout employee data"<<endl;
		cout<<"press 7:to exit employee data"<<endl;
		cin>>user;
		system ("CLS");
		switch(user){
			case '1':
			 empdata();
			break;
			case'2':
			show();
			break;
			case '3':
			search();
			break;
			case '4':
			update();
			break;
			case'5':
			del();
			break;
			case '6':
				goto top;
			break;
				case'7':
				exit (0);
			 break;
			 default :
			 	cout<<"invalid input";
			 	break;
			 		}	
	}
	
	}else if(username1!=username&&password1==password){
		cout<<"username is not valid";
			a=1;
	}
	else if(username1==username&&password1!=password){
		cout<<"password is not valid";
	a=1;}
	else{
		cout<<"wrong input";
	a=1;}
	
	
	
}while(a>0);
	
	
}
