#include<iostream>
#include<iostream>

using namespace std ;
int row , coloum ,key ,value;
int k = 1 ;
int opr ;
char a;
void trangle2(){

int value ;
cout<<"how many line u want ";
cin>>value;
cout<<"Which element you want for pattern ";
cin>>a;
for (int i = 0; i < value; i++)
{
 for (int j = 0; j <= i; j++)
 {
    cout<<a;
 }
 cout<<"\n";
}

}

void trangle3(){
cout<<"how many line u want ";
cin>>value>>key;
cout<<"Which element you want for pattern ";
cin>>a;
for (int i = 0; i < value; i++)
{
 for (int j = 0; j <= i; j++)
 {
    cout<<a;
 }
 cout<<"\n";
} 


for (int i = key; i > 0; i--)
{
 for (int j = 1; j <= i; j++)
 {
    cout<<a;
 }
 cout<<"\n";
} 
}
void ractangle(){
cout<<"you choose  rectangle program"<<"\n";
 cout<<"Enter how many rows you want "<<"\n";
cin>>row;
cout<<"Enter how many coloums you want "<<"\n";
cin>>coloum;
cout<<"Which element you want for pattern ";
cin>>a;
for (int i = 0; i < row; i++)
{
    for(int j = 0   ; j< coloum ;j ++ ){

        cout<<a ;

    }
    cout<<"\n";
}
}
void square(){
cout<<"you choose square program"<<"\n";
 cout<<"Enter how much size you want "<<"\n";
cin>>row;
cout<<"Which element you want for pattern ";
cin>>a;
for (int i = 0; i < row; i++)
{
    for(int j = 0   ; j < row ;j ++ ){

        cout<<a<<" ";

    }
    cout<<"\n";


}

}
void holo_ractangle(){
cout<<"you choose holo rectangle program"<<"\n";
 cout<<"Enter how many rows you want "<<"\n";
cin>>row;
cout<<"Enter how many coloums you want "<<"\n";
cin>>coloum;
cout<<"Which element you want for pattern ";
cin>>a;
for (int i = 0; i <= row; i++)
{
for( int j = 0 ; j <= coloum ; j++){
if(i == 0 || i == row ){

    for(int k = 0 ;k > i ; k++){

        cout<<a;
    }
    }
else if( j == 0 || j == coloum ){

cout<<a;

}else{
    cout<<" ";
}

}
 cout<<"\n";
}
 

}

void holo_square(){
cout<<"you choose holo  square program"<<"\n";
 cout<<"Enter how much size you want "<<"\n";
cin>>row;
cout<<"Which element you want for patterne "<<"\n For trangle 3  press 8 \n";
cin>>a;
for (int i = 0; i <= row; i++)
{
    for(int j = 0   ; j<= row ;j ++ ){

 if(i == 0 ||i == row  ){

 cout<<a<<"";
}else if(j == 0 ||j == row  ){

 cout<<a;
  }else{
 cout<<" ";
 }

    }
    cout<<"\n";


}

}void tangle1(){
int value ;
cout<<"how many line u want ";
cin>>value;

for (int i = value; i > 0; i--)
{
 for (int j = 0; j <= i; j++)
 {
    cout<<a;
 }
 cout<<"\n";
}



}


void trangle4(){
    cout<<"You choose number chat  ";
cout<<"how many line u want ";
cin>>value;

for(int i = 0 ; i < value ; i++ ){
for(int j = 0 ; j < value ; j++ ){
    if(j < value-i){
        cout<<" ";
    }else{
        cout<<i<<" ";
    }
}
cout<<"\n";}



}void trangle5(){
    cout<<"You choose trangle 5 ";
cout<<"how many line u want ";
cin>>value;
cout<<"Which element you want for pattern ";
cin>>a;
for(int i = 0 ; i < value ; i++ ){
for(int j = 0 ; j < value ; j++ ){
    if(j < value-i){
        cout<<" ";
    }else{
        cout<<a<<"";
    }
}
cout<<"\n";}



}
 
void ffufu(){
    cout<<"You choose count \n ";
cout<<"how many line u want ";
cin>>value;
    int count = 1;
    
  for(int i = 0 ; i < value ; i++ ){
for(int j = 0 ; j < i ; j++ ){

cout<<count<<" " ;
count ++ ;
}
cout<<"\n";}  
}



int main(){

cout<<"Welcome in pattern program 2.0"<<"\n For ractangle program press 1 : "<<"\n For square program press 2 :\n "<<"For holo rectangle press 3 \n"<<"For holo square press 4"<<" \n For trangle 1 press 5 ";
cout<<"\n For trangle 2 press 6 "<<"\n For half diamond press 7"<<"\n For number chat press 8\n"<<" For trangle 4 press 9"<<"\n"<<"For count press 10"<<"\n";


cin>> opr;
switch (opr)
{
case 1 :{ractangle();}

    break;
    case 2 : {square();}
break;
case 3 : {holo_ractangle();}
break ;
case 4 : {holo_square();}
break;
case 5 : {trangle2();}
break ;
case 6 : {tangle1();}

break ;
case 7 : {trangle3();}
break ;
case 8 :{trangle4();} 
break ;
case 9 :{trangle5();}
break;
case 10 :{ffufu();}
break ;
default:{
    cout<<"this pattern is not avalible thankyou";
}
    break;
}
    return 0 ;
}