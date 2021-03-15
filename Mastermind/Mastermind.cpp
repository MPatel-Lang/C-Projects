#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

char coloredPeg[4];
char userchosencol[4];

int stack[10], n=100, top=-1;
bool haveIWon = false;
void push(char val)
{
if(top>=n-1)
cout<<"mastermind Overflow"<<endl;
else {
top++;
stack[top]=val;
}
}
void pop()
{
if(top<=-1)
{
cout << "mastermind stack underflow" << endl;
}
else
{
top--;
}
}
void display()
{
if(top>=0)
{
cout<<"Black white elements of mastermind are :";
for(int i=top; i>=0; i--)
cout<<stack[i]<<" ";
cout<<endl;
} else
cout<<"mastermind stack is empty";
}


int NumberOfCorrectPosition ()
{
int noOfCorrectPositions = 0;
if (userchosencol[0]==coloredPeg[0])
{
noOfCorrectPositions++;
}
if (userchosencol[1]==coloredPeg[1])
{
noOfCorrectPositions++;
}
if (userchosencol[2]==coloredPeg[2])
{
noOfCorrectPositions++;
}
if (userchosencol[2]==coloredPeg[2])
{
noOfCorrectPositions++;
}
return (noOfCorrectPositions);
}

int NumberOfCorrectColors ()
{
int noOfCorrectColors = 0;
if ((coloredPeg[0]==userchosencol[0])||(coloredPeg[0]==userchosencol[1])||(coloredPeg[0]==userchosencol[2])||(coloredPeg[0]==userchosencol[3]))
{
noOfCorrectColors++;
}
if ((coloredPeg[1]==userchosencol[0])||(coloredPeg[1]==userchosencol[1])||(coloredPeg[1]==userchosencol[2])||(coloredPeg[1]==userchosencol[3]))
{
noOfCorrectColors++;
}
if ((coloredPeg[2]==userchosencol[0])||(coloredPeg[2]==userchosencol[1])||(coloredPeg[2]==userchosencol[2])||(coloredPeg[2]==userchosencol[3]))
{
noOfCorrectColors++;
}
if ((coloredPeg[3]==userchosencol[0])||(coloredPeg[3]==userchosencol[1])||(coloredPeg[3]==userchosencol[2])||(coloredPeg[3]==userchosencol[3]))
{
noOfCorrectColors++;
}
return(noOfCorrectColors);
}

int main(){

  

   srand(time(0));
   int intCorrCol = (rand()%6)+1; // here we are taking rand() % 6, since we have 6 colors to choose from names integer COrresponding toColor

   for(int i=0;i<4;i++){
   intCorrCol = (rand()%6)+1;
   cout << "Used Colors: Red(R),Blue(B),Yellow(Y),Pink(P),Green(G),Orange(O)" << endl;

   switch(intCorrCol){
   case 1:
       coloredPeg[i] = 'R';
       break;
   case 2:
       coloredPeg[i] = 'B';
       break;
   case 3:
       coloredPeg[i] = 'Y';
       break;
   case 4:
       coloredPeg[i] = 'P';
       break;
   case 5:
       coloredPeg[i] = 'G';
       break;
   case 6:
       coloredPeg[i] = 'O';
       break;
     
   }
   }

  

   cout << "Mastermind(code maker) colors are ready!" << endl;
   for(int i=0;i<4;i++)
   {
   //cout << coloredPeg[i] << endl;
   }
   cout << endl << endl;
   int maxtries = 0;
   while(maxtries != 10) // so here we are giving maximum of 10 tries to user, otherwise game lost
   {
       maxtries++;

       cout << "Current try: " << maxtries << endl;

       for(int i=0;i<4;i++){
           cout << "Color " << i << ": ";
           cin >> userchosencol[i];
           cout << endl;
       }

// the user chosen and computer chosen pegs if perfectly matched they are marked as black, others are marked as white
// to do this lets use
       for(int i=0;i<4;i++)
       {      
           if(userchosencol[i] == coloredPeg[i])
               cout << "B" << " ";
               push(1);
              
       }

       if(userchosencol[0] == coloredPeg[1] ||
       userchosencol[0] == coloredPeg[2] ||
       userchosencol[0] == coloredPeg[3] ){
           cout << "W" << " ";
           push(0);
       }
       if(userchosencol[1] == coloredPeg[0] ||
           userchosencol[1] == coloredPeg[2] ||
       userchosencol[1] == coloredPeg[3]){
               cout << "W" << " ";
               push(0);
       }
       if(userchosencol[2] == coloredPeg[0] ||
       userchosencol[2] == coloredPeg[1] ||
       userchosencol[2] == coloredPeg[3]){
           cout << "W" << " ";
           push(0);
       }
       if(userchosencol[3] == coloredPeg[0] ||
       userchosencol[3] == coloredPeg[1] ||
       userchosencol[3] == coloredPeg[2])
           {
               cout << "W" << " ";
               push(0);
           }
           cout << "Mastermind B/W content:" << endl;
display();
      

       if(userchosencol[0] == coloredPeg[0] &&
       userchosencol[1] == coloredPeg[1] &&
       userchosencol[2] == coloredPeg[2] &&
       userchosencol[3] == coloredPeg[3])
       {
           cout << "you WON, with TRIES: " << maxtries << endl;
           maxtries = 10;
           haveIWon = true;
          
       }else
       {
           cout << "Sorry didnt match try again." << endl << endl;
       }

   }
   if(maxtries == 10 && haveIWon == false)
   {
       cout << "SORRY YOU LOST." << endl;
   }

   cin.get();
   cin.get();
   return 0;
}
