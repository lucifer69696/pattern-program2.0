using namespace std ;
#include<iostream>
#include<cstring>
class Employees{
    //class empolyee start
public:
string employee1_name;
string employee1work ;
long employee1_salary;
int employee1_age ;

string employee2_name;
string employee2work ;
long employee2_salary;
int employee2_age ;
string employee3_name;
string employee3work ;
long employee3_salary;
int employee3_age ;

string employee4_name;
string employe4work ;
long employee4_salary;
int employee4_age ;

string employee5_name;
string employee5work ;
long employee5_salary;
int employee5_age ;


void empolyeesdetial(){
cout<<"Employee 1 name is "<<employee1_name<<"\n";
cout<<"Employee 1 work is "<<employee1work<<"\n";
cout<<"Employee 1 salary is "<<employee1_salary<<" dollor"<<"\n";
cout<<"Employee 1 age is "<<employee1_age <<"\n \n ";

cout<<"Employee 2 name is "<<employee2_name<<"\n";
cout<<"Employee 2 work is "<<employee2work<<"\n";
cout<<"Employee 2 salary is "<<employee2_salary<<" dollor"<<"\n";
cout<<"Employee 2 age is "<<employee2_age <<"\n\n";

cout<<"Employee 3 name is "<<employee3_name<<"\n";
cout<<"Employee 3 work is "<<employee3work<<"\n";
cout<<"Employee 3 salary is "<<employee3_salary<<" dollor"<<"\n";
cout<<"Employee 3 age is "<<employee3_age <<"\n\n";

cout<<"Employee 4 name is "<<employee4_name<<"\n";
cout<<"Employee 4 work is "<<employe4work<<"\n";
cout<<"Employee 4 salary is "<<employee4_salary<<" dollor"<<"\n";
cout<<"Employee 4 age is "<<employee4_age <<"\n\n";

cout<<"Employee 5 name is "<<employee5_name<<"\n";
cout<<"Employee 5 work is "<<employee5work<<"\n";
cout<<"Employee 5 salary is "<<employee5_salary<<" dollor"<<"\n";
cout<<"Employee 5 age is "<<employee5_age <<"\n\n";

}
//class empolyee end 
};

class CEO{
    //class ceo stART
    public:  
string CEO_name;
long long  salary ;
long age ;
private :
string  CEO_girlfriend_name;
public:
void CEOdeatial(){
cout<<"Campany CEO name is "<<CEO_name <<"\n";
cout<<"Campany CEO salary is "<<salary<<" Dollor"<<"\n" ;
cout<<"Campany CEO age is "<<age <<"\n";

}
//class  ceo end
};
class Company : public CEO , public Employees {
    public:
    string namerr ;
    string deatial ;
    long long revenue ;
int share ;
void cdeatial(){  
    cout<<"Company name is "<<namerr<<endl;
    cout<<deatial<<"\n";
cout<<"Company total revenue is "<<revenue <<" Dollor"<<"\n";
cout<<"Company per share rate is  "<<share<<" Dollor"<<"\n";

}


};

int main(){
    //main program start
      Company c1 ;
    
c1.namerr = "Coco private limeted";
c1.deatial ="It is a car manufactureing company";
c1.revenue = 1000000000000;


c1.share = 100;
c1.age = 22 ;
c1.CEO_name = "Lucifer morningstar" ;
c1.salary = 1000000 ;


c1.employee1_age = 23;
c1.employee1_name ="Viswash raj ";
c1.employee1work = "Manufacture maneger ";
c1.employee1_salary = 2000;


c1.employee2_age =21 ;
c1.employee2_name = "Ansh asshole";
c1.employee2_salary = 200 ;
c1.employee2work = "Clening floar";


c1.employee3_age = 33 ;
c1.employee3_name = "Jack the painter";
c1.employee3work = "Paint the cars ";
c1.employee3_salary = 3000;


c1.employee4_age = 25;
c1.employee4_name = "peter divedson";
c1.employee4_salary = 2000;
c1.employe4work = "engineer";


c1.employee5_age = 35 ;
c1.employee5work = " car testing ";
c1.employee5_salary = 6969 ;
c1.employee5_name = "paul walker";


//it is co detail part
cout<<"\n";
c1.cdeatial();
cout<<"\n";
//it is ceo deatial
c1.CEOdeatial();
//it is employee deatial ;
cout<<"\n";
c1.empolyeesdetial();
return 0 ;
}