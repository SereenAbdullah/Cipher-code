#include <iostream>
#include<string>
using namespace std;

int get_letter_valuesmall(char letter)
{
  int value;
  if(letter=='a')
   value=0;
  
  if(letter=='b')
	  value=1;
	
	  if(letter=='c')
	  value=2;

	  if(letter=='d')
	  value=9;

	  if(letter=='e')
	  value=10;
	 
	  if(letter=='f')
	  value=11;
	 
	  if(letter=='g')
	  value=6;

	  if(letter=='h')
	  value=7;

	  if(letter=='i')
	  value=8;

	  if(letter=='j')
	  value=3;

	  if(letter=='k')
	  value=4;

	  if(letter=='l')
	  value=5;

	  if(letter=='m')
	  value=15;


	  if(letter=='n')
	  value=16;

	  if(letter=='o')
	  value=17;
	
	  if(letter=='p')
	  value=12;

	  if(letter=='q')
	  value=13;


	  if(letter=='r')
	  value=14;

	  if(letter=='s')
	  value=23;

	  if(letter=='t')
	  value=24;

	  if(letter=='u')
	  value=25;

	  if(letter=='v')
	  value=21;

	  if(letter=='w')
	  value=22;

	  if(letter=='x')
	  value=18;

	  if(letter=='y')
	  value=19;

	  if(letter=='z')
	  value=20;

	  return value;
}
int get_letter_valuecap(char letter)
{
  int value;
  if(letter=='A')
   value=0;
  
  if(letter=='B')
	  value=1;
	
	  if(letter=='C')
	  value=2;

	  if(letter=='D')
	  value=9;

	  if(letter=='E')
	  value=10;
	 
	  if(letter=='F')
	  value=11;
	 
	  if(letter=='G')
	  value=6;

	  if(letter=='H')
	  value=7;

	  if(letter=='I')
	  value=8;

	  if(letter=='J')
	  value=3;

	  if(letter=='K')
	  value=4;

	  if(letter=='L')
	  value=5;

	  if(letter=='M')
	  value=15;


	  if(letter=='N')
	  value=16;

	  if(letter=='O')
	  value=17;
	
	  if(letter=='P')
	  value=12;

	  if(letter=='Q')
	  value=13;


	  if(letter=='R')
	  value=14;

	  if(letter=='S')
	  value=23;

	  if(letter=='T')
	  value=24;

	  if(letter=='U')
	  value=25;

	  if(letter=='V')
	  value=21;

	  if(letter=='W')
	  value=22;

	  if(letter=='X')
	  value=18;

	  if(letter=='Y')
	  value=19;

	  if(letter=='Z')
	  value=20;

	  return value;
}
char get_value_charsmall(int value)
{
	char letter;
	 if(value==0)
     letter='a';
  
     if(value==1)
	  letter='b';
	
	  if(value==2)
	  letter='c';

	  if(value==9)
	  letter='d';

	  if(value==10)
	  letter='e';
	 
	  if(value==11)
	  letter='f';
	 
	  if(value==6)
	  letter='g';

	  if(value==7)
	  letter='h';

	  if(value==8)
	  letter='i';

	  if(value==3)
	  letter='j';

	  if(value==4)
	  letter='k';

	  if(value==5)
	  letter='l';

	  if(value==15)
	  letter='m';

	  if(value==16)
	  letter='n';

	  if(value==17)
	  letter='o';
	
	  if(value==12)
	  letter='p';

	  if(value==13)
	  letter='q';


	  if(value==14)
	  letter='r';

	  if(value==23)
	  letter='s';

	  if(value==24)
	  letter='t';

	  if(value==25)
	  letter='u';

	  if(value==21)
	  letter='v';

	  if(value==22)
	  letter='w';

	  if(value==18)
	  letter='x';

	  if(value==19)
	  letter='y';

	  if(value==20)
	  letter='z';
	return letter;
}

char get_value_charcap(int value)
{
	char letter;
	 if(value==0)
     letter='A';
  
     if(value==1)
	  letter='B';
	
	  if(value==2)
	  letter='C';

	  if(value==9)
	  letter='D';

	  if(value==10)
	  letter='E';
	 
	  if(value==11)
	  letter='F';
	 
	  if(value==6)
	  letter='G';

	  if(value==7)
	  letter='H';

	  if(value==8)
	  letter='I';

	  if(value==3)
	  letter='J';

	  if(value==4)
	  letter='K';

	  if(value==5)
	  letter='L';

	  if(value==15)
	  letter='M';

	  if(value==16)
	  letter='N';

	  if(value==17)
	  letter='O';
	
	  if(value==12)
	  letter='P';

	  if(value==13)
	  letter='Q';


	  if(value==14)
	  letter='R';

	  if(value==23)
	  letter='S';

	  if(value==24)
	  letter='T';

	  if(value==25)
	  letter='U';

	  if(value==21)
	  letter='V';

	  if(value==22)
	  letter='W';

	  if(value==18)
	  letter='X';

	  if(value==19)
	  letter='Y';

	  if(value==20)
	  letter='Z';
	return letter;
}

char encrypt_vigenere(char key_i,char plaintext_i)
{
  char ciphertext;
  int valueK= get_letter_valuesmall(key_i);
  int valueP= get_letter_valuesmall(plaintext_i);
  int result;
  result=(valueK+valueP)%26;
  ciphertext= get_value_charcap(result);
  return ciphertext;
}

char decrypt_vigenere(char key_i,char ciphertext_i)
{
  char plaintext;
  int valueK= get_letter_valuesmall(key_i);
  int valueC= get_letter_valuecap(ciphertext_i);
  int result;
  result= valueC - valueK ;
  if(result < 0)
  result=(result+26)%26;
  plaintext=get_value_charsmall(result);
  return plaintext;

}
void Algorithm(char key,char text, string operation)
{
	if(operation=="Encryption")
	cout<<encrypt_vigenere(key,text);

	if(operation=="Decryption")
	cout<<decrypt_vigenere(key,text);
}

int main() 
{
  string key;
  cout<<"Please Enter The Key Here: ";
  cin>> key;
  int w;
  cout<<"-----------------------------------------------------------------------------------"<<"\n";
  for(int i=0; i<key.length() ;i++)
  {
   if(!((key[i]>='a' && key[i]<='z')  &&  key.size() < 10))
  { w=0;
	while(w!=1)
     {
	  cout<<"WARNING [Invalid Input]\n";
	  cout<<"Please Enter The Key Here: ";
      cin>> key;
	  if((key[i]>='a' && key[i]<='z')  &&  key.length() < 10)
	  {w=1; break;}
	  cout<<"-----------------------------------------------------------------------------------"<<"\n";
	  }
  }
  }

  string text;
  string operation;
  cout<<"Please choose an operation, Encryption or Decryption: \n";
  cin>>operation;
  cout<<"-----------------------------------------------------------------------------------"<<"\n";
   while(operation!="Encryption" && operation!="Decryption")
  {
     cout<<"Warning[Invalid Input]:Please choose one of thet options, Encryption or Decryption: \n";
     cin>>operation;
	 cout<<"-----------------------------------------------------------------------------------"<<"\n";
  }

  if(operation=="Encryption")
  {
	  cout<<"Please Enter The Plaintext:";
      cin>> text;
	  int w1=0;
	  cout<<"-----------------------------------------------------------------------------------"<<"\n";

    for(int i=0; i<text.length() ;i++)
   {
      if(!((text[i]>='a' && text[i]<='z')  &&  text.length() < 40))
      { w1=0;
	   while(w1!=1)
      {
	  	  cout<<"WARNING [Invalid Input]\n";
	      cout<<"Please Enter The Plaintext Here: ";
          cin>> text;
	      if((text[i]>='a' && text[i]<='z')  &&  text.length() < 40)
	      {w1=1; break;}
	  cout<<"-----------------------------------------------------------------------------------"<<"\n";
	  }
	  }
   }
	 cout<<"The Ciphertext is: ";
	  if(key.length()==text.length())
	  {
	  for(int i=0; i< text.length(); i++)
	  {
	    Algorithm(key[i],text[i],operation);
	  }
	  }
	    else if(key.length() < text.length())
	  {
		int k=0;
        int c=0;
        for (int i=0; i< text.length(); i++)
		{
			Algorithm(key[c],text[i],operation);
			k++;
			c++;
			if(k >= key.length())
			{
				c=0;
				k=0;
			}
		}
	  }
	  else 
	  {
      for(int i=0; i< text.length(); i++)
	  {
	    Algorithm(key[i],text[i],operation);
	  }
	  }

  }

 if(operation=="Decryption")

{
	cout<<"Please Enter The Ciphertext Here: ";
    cin>> text;
	cout<<"-----------------------------------------------------------------------------------"<<"\n";
  for(int i=0; i<text.length() ;i++)
   {
      if(!((text[i]>='A' && text[i]<='Z')  &&  text.length() < 40))
      { w=0;
	   while(w!=1)
      {
	  cout<<"WARNING [Invalid Input]\n";
	  cout<<"Please Enter The Ciphertext Here: ";
      cin>> text;
	  if((text[i]>='A' && text[i]<='Z')  &&  text.length() < 40)
	  {w=1; break;}
	  cout<<"-----------------------------------------------------------------------------------"<<"\n";
	  }
	  }
   }
     cout<<"The Plaintext is: ";
	  if(key.length()==text.length())
	  {
	  for(int i=0; i< text.length(); i++)
	  {
	    Algorithm(key[i],text[i],operation);
	  }
	  }
	     else if(key.length() < text.length())
	  {
		int k=0;
        int c=0;
        for (int i=0; i< text.length(); i++)
		{
			Algorithm(key[c],text[i],operation);
			k++;
			c++;
			if(k >= key.length())
			{
				c=0;
				k=0;
			}
		}
	  }
	    else 
	    {
          for(int i=0; i< text.length(); i++)
	    {
	      Algorithm(key[i],text[i],operation);
	    }
	  }  

  }

}