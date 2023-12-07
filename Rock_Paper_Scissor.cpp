#include <iostream>
#include<conio.h>
#include<cstdlib>

using namespace std;

int main(){
cout<<"<><><><><><><><><>Rock,Paper and Scissor game<><><><><><><><><>"<<endl;
cout<<endl;
cout<<endl;
string x,y,m,p;                   /*X is for first username,Y is for second username. First username will choose rock,paper and scissor  */
int tdraw=0,tx=0,ty=0,points;

cout<<"Enter your nickname: ";    //User name input


getline(cin,x);                    // Second User name input

cout<<"Enter your nickname: ";


getline(cin,y);
cout<<endl;
cout<<endl;

cout<<"Welcome, "<<x<<" and "<<y<<" to the game of ";

cout<<"Rock,Paper and Scissor game.\nSelect 'R' for Rock.\nSelect 'P' for Paper. \nSelect 'S' for Scissor. "<<endl;

cout<<endl;
cout<<endl;

cout<<"Enter your desirable point(s): ";
cin>>points;
int i=1;
while(i<=points){
cout<<"Rock Paper or Scissor for, "<<x<<" :";

cin>>m;
system("cls");
cout<<"Rock Paper or Scissor for "<<y<<" :";
cin>>p;
system("cls");

if(m=="R"&&p=="P"){
  ty++;
   cout<<y<<" wins\n"<<endl;
}
else if(m=="R"&&p=="S"){
     tx++;
     cout<<x<<" wins\n"<<endl;

}
else if(m=="R"&&p=="R"){
     tdraw++;
     cout<<"Draw\n"<<endl;

}
else if(m=="P"&&p=="R"){
     tx++;
     cout<<x<<" wins\n"<<endl;

}

else if(m=="P"&&p=="S"){
     ty++;
     cout<<y<<" wins\n"<<endl;

}
else if(m=="P"&&p=="P"){
     tdraw++;
     cout<<"Draw\n"<<endl;

}
else if(m=="S"&&p=="R"){
     ty++;
     cout<<y<<" wins\n"<<endl;

}
else if(m=="S"&&p=="P"){
     tx++;
     cout<<x<<" wins\n"<<endl;

}
else if(m=="S"&&p=="S"){
     tdraw++;
     cout<<"Draw\n"<<endl;

}
i++;
}

cout<<"Total points for "<<x<<" is: "<<tx<<" points"<<"\n\n"<<"Total points for "<<y<<" is: "<<ty<<" points"<<"\n\n"<<"Total points of draw is: "<<tdraw<<" points"<<endl;

if(tx>ty&&tx>tdraw){

    cout<<x<<" is the winner"<<endl;


}else if(ty>tdraw){

    cout<<y<<" is the winner "<<endl;



}else{
cout<<"Nobody wins "<<endl;
}

return 0;
}


