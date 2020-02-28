#include<iostream.h>
#include<conio.h>
void main()
{
  int c1=0,c2=0,c3=0,c4=0,c5=0,false=0,i;
  int votes[15];
  clrscr();
  cout<<"Press 1 for Candidate 1";
  cout<<"\nPress 2 for Candidate 2";
  cout<<"\nPress 3 for Candidate 3";
  cout<<"\nPress 4 for Candidate 4";
  cout<<"\nPress 5 for candidate 5";
  cout<<"\nEnter Votes: ";
  for(i=0;i<15;i++)
    {
      cin>>votes[i];
	{
	  if(votes[i]==1)
	    c1++;
	  else if(votes[i]==2)
	    c2++;
	  else if(votes[i]==3)
	    c3++;
	  else if(votes[i]==4)
	    c4++;
	  else if(votes[i]==5)
	    c5++;
	  else
	    false++;
	}
    }
  cout<<"\nVote Count for Cadidate 1: "<<c1;
  cout<<"\nVote Count for Cadidate 2: "<<c2;
  cout<<"\nVote Count for Cadidate 3: "<<c3;
  cout<<"\nVote Count for Cadidate 4: "<<c4;
  cout<<"\nVote Count for Cadidate 5: "<<c5;
  cout<<"\nFalse Vote Count: "<<false;
  getch();
}