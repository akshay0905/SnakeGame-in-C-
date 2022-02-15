//snake game

#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
#include<fstream.h>

int flag=0,co=6,sp=100,sc=0,lim=11,sec=0,min=0,hr=0,sco,hs=0,st=0;
char ch,chh,chx,p[60]="akshay";
int count =1,bonus=0;
int m[50][80]={0},a[5000]={0},b[5000]={0},a2[5000]={0},b2[5000]={0},i,j,k=2,l=0,k2=2,
l2=0,ca,ra,c=10,r=10,c2=50,r2=30,s=1,s2=1;
char lastloop='z',lastloop2='z';

void game(void);
void menu2(void);
void background(int co,int sr,int sc,int er,int ec);
void box(int co,int sr,int sc,int er,int ec,int ch,int tb);
void help();
void printmenublink(int sel);
void printmenu(int sel);
void printmenublink2(int sel);
void printmenu2(int sel);
void menu2();
void backcolor();
void settings();
void level();
void clock();
void print();
void point();
void screensaver();
void snaker();
void password();
void loading();
void topic();
void pass();
void quit();
void showdate();
void showtime();
void lost();
void initialise();
void init();
void takevalues();
void changepass();
void thanx();
void firstscreen();
void main()
{    clrscr();
     textmode(C4350);

firstscreen();
   topic();

       initialise();

     background(co,1,1,50,80);

     textcolor(7);

     pass();
     loading();
     menu2();
}

void initialise()
{

      for(i=0;i<=50;i++)
	 for(j=0;j<=80;j++)
	  {m[i][j]=0;
	  }

	  for(j=0;j<5000;j++)
	  {a[j]=b[j]=0;
	  }
	  for(j=0;j<5000;j++)
	  {a[j]=b[j]=a2[j]=b2[j]=0;
	  }



       }


void init()
{
      s=0,c=10,r=10,min=0,sec=0,hr=0,sc=0;
				 for(i=0;i<50;i++)
				   for(j=0;j<80;j++)
				    m[i][j]=0;

				 k=k2=2;
				 l=l2=0;
}

void stages()
{

  for(i=0;i<=50;i++)
    for(j=0;j<=80;j++)
    if(m[i][j]==2)
    m[i][j]=0;


  if(st==2)
  {  for(i=6;i<15;i++)
     {m[5][i]=2;
      m[6][i]=2;
      m[39][i]=2;
      m[38][i]=2;
     }

     for(i=5;i<15;i++)
     {m[i][6]=2;
      m[i][7]=2;
      m[i][70]=2;
      m[i][69]=2;
     }

     for(i=70-9;i<70;i++)
     {m[5][i]=2;
      m[6][i]=2;
      m[39][i]=2;
      m[38][i]=2;
     }


     for(i=30;i<40;i++)
     { m[i][6]=2;
      m[i][7]=2;
      m[i][70]=2;
      m[i][69]=2;
     }


     for(i=30;i<47;i++)
     { m[20-2][i]=2;
       m[24+2][i]=2;
       m[20-3][i]=2;
       m[24+3][i]=2;
     }

  }

  if(st==1)
  {  for(i=3;i<42;i++)
     { m[i][5]=2;
       m[i][71]=2;
     }

     for(i=5;i<71;i++)
     { m[3][i]=2;
       m[41][i]=2;
     }

 }

   if(st==3)
  {  for(i=3;i<27;i++)
     { m[i][20]=2;
       m[i][21]=2;
     }

     for(i=5;i<20;i++)
     { m[35][i]=2;
       m[36][i]=2;
     }

     for(i=17;i<42;i++)
     { m[i][55]=2;
       m[i][56]=2;
     }

     for(i=55;i<72;i++)
     { m[8][i]=2;
       m[9][i]=2;
     }

 }

  if(st==4)
  {  for(i=5;i<72;i++)
     m[3][i]=2,m[4][i]=2;
     for(i=3;i<18;i++)
     m[i][5]=2,m[i][6]=2;
     for(i=3;i<18;i++)
     m[i][71]=2,m[i][70]=2;

     for(i=5;i<72;i++)
     m[41][i]=2,m[40][i]=2;
     for(i=42-15;i<42;i++)
     m[i][5]=2,m[i][6]=2;
     for(i=42-15;i<42;i++)
     m[i][71]=2,m[i][70]=2;
  }

    if(st==5)
  {  for(i=7;i<10;i++)
     m[4][i]=2;
     for(i=14;i<72-10;i++)
     m[4][i]=2;
     for(i=5;i<72;i++)
     m[28][i]=2;
     for(i=5;i<31;i++)
     m[19][i]=2;

     for(i=42;i<72;i++)
     m[19][i]=2;

     for(i=4;i<9;i++)
     m[i][7]=2;
     for(i=4;i<20;i++)
     m[i][30]=2;
     for(i=28;i<42;i++)
     m[i][72-20]=2;
  }

}
void game2()

{ clrscr();
  textmode(C4350);

  background(0,1,1,50,80);
  background(co,3,5,41,71);

      box(7,2,4,42,72,4,0);

				 textcolor(7);
				 clock();
				 print();

  stages();

		       do{

			   ra=(rand()%(42-4))+4;
			   ca=(rand()%(72-6))+6;
		       }while(m[ra][ca]==2);



				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }

				   }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");



      while(1)
      {    sound(1000);
	   delay(20);
	   nosound();

       count=1;

      ch=getch();
	 if((ch=='M'||ch=='d')&&lastloop!='a')
			   {
				 while(!kbhit())
			       {  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

		  box(7,2,4,42,72,4,0);

				   if(m[r][c+1])
				  { //exit(1);           //lost
				    if(hs<sc)
				    {	flag=1;

				      hs=sc;
				    }
				    lost();
				    return;
				  }
				  background(co,3,5,41,71);
				   m[r][++c]=1;

				  if(c>71)
				 c=5;





				  for(i=2;i<42;i++)
				   for(j=4;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  	  gotoxy(j,i);
					  textbackground(co+7);
					  cprintf(" ");;

				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				   }

				   k++;

				   a[k]=r,b[k]=c;

				   for(i=l;i<k-s;i++)
				  {m[a[i]][b[i]]=0;
				  }

				  l=k-s;
				 if(bonus%5==0)
				 { gotoxy(ca,ra);
				   textcolor(4+BLINK);
				   textbackground(co);
				   cprintf("Û");
				   gotoxy(ca,ra);

				 }
				 else
				 {gotoxy(ca,ra);
				 cout<<(char)4;
				 }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();


				 point();

		  }

			    lastloop='d';
			   }

			   if((ch=='P'||ch=='s')&&lastloop!='w')
			   {

				 while(!kbhit())
			       {  background(co,3,5,41,71);

				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;
				  box(7,2,4,42,72,4,0);

				   if(m[r+1][c])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[++r][c]=1;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }

				   }


				   k++;

				   a[k]=r,b[k]=c;

				   for(i=l;i<k-s;i++)
				    m[a[i]][b[i]]=0;

				  l=k-s;

				 if(bonus%5==0)
				 { gotoxy(ca,ra);
				   textcolor(4+BLINK);
				   textbackground(co);
				   cprintf("Û");
				   gotoxy(ca,ra);

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");

				 point();

				 if(r>41)
				 r=3;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='s';
			   }

			   if((ch=='K'||ch=='a')&&lastloop!='d')
			   {

				 while(!kbhit())
			       { background(co,3,5,41,71);

				 gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				 box(7,2,4,42,72,4,0);

				   if(m[r][c-1])
				  { if(hs<sc)
					flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				 m[r][--c]=1;


				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }

				   }

				   k++;

				   a[k]=r,b[k]=c;

				   for(i=l;i<k-s;i++)
				   m[a[i]][b[i]]=0;

				  l=k-s;

				 if(bonus%5==0)
				 { gotoxy(ca,ra);
				   textcolor(4+BLINK);
				   textbackground(co);
				   cprintf("Û");
				   gotoxy(ca,ra);

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");

				 point();
				  if(c<5)
				 c=71;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='a';
			   }


			   if((ch=='H'||ch=='w')&&lastloop!='s')
			   {
				 while(!kbhit())
			       {
				  background(co,3,5,41,71);

				  gotoxy(2,49);
				   cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r-1][c])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[--r][c]=1;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				       textbackground(co+7);
				       cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }

				   }


				   k++;

				   a[k]=r,b[k]=c;

				   for(i=l;i<k-s;i++)

				   m[a[i]][b[i]]=0;


				  l=k-s;
				 if(bonus%5==0)
				 { gotoxy(ca,ra);
				   textcolor(4+BLINK);
				   textbackground(co);
				   cprintf("Û");
				   gotoxy(ca,ra);

				 }

				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");

				 point();

				  if(r<3)
				 r=41;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			     lastloop='w';
			   }

			   if(ch==(char)27)
			  { if(sc>hs)
			    {hs=sc;
			    //flag=1;
				 //if(flag==1)
	 box(10,20,28,24,50,4,co);
	  background(co+10,21,29,23,49);
	  gotoxy(30,22);
	  cout<<"HIGHEST SCORE :- "<<hs;
	  flag=0;
	 getch();

			}


			    return;

			  }
			   if(ch=='k')
			   sp+=10;

			   if(ch=='l')
			   sp-=10;

			   if(ch=='j')
			   co++;

			   if(ch=='h')
			   co--;

			   if(ch=='g')
			   sc++;

			   if(ch=='f')
			   sc--;

			   if(ch=='m')
			   sec++;

			   if(ch=='n')
			   sec--;

			   if(ch=='b')
			   min++;

			   if(ch=='v')
			   min--;

			   if(ch=='c')
			   hr++;

			   if(ch=='x')
			   hr--;


			    if(ch=='o')
			   s++;

			    if(ch=='p')
			   s--;


       }


}


void game()

{ clrscr();
  textmode(C4350);
//  box(7,4,5,45,75);

  background(0,1,1,50,80);
  background(co,3,5,41,71);

      box(7,2,4,42,72,4,0);

				 textcolor(7);
				 clock();
				 print();

  stages();

		       do{
			   ra=(rand()%(42-4))+4;
			   ca=(rand()%(72-6))+6;
		       }while(m[ra][ca]==2);



				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

       chh='a';
       ch='M';

      while(1)
      {    sound(500);
	   delay(50);
	   nosound();
       count=1;

      chx=getch();

      if(chx=='a'||chx=='s'||chx=='d'||chx=='w')
      chh=chx;

      if(chx=='M'||chx=='P'||chx=='K'||chx=='H')
      ch=chx;


	 if((ch=='M'&&chh=='d')&&(lastloop!='K'&&lastloop2!='a'))
			   {
				 while(!kbhit())
			       {
				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r][c+1]||m[r2][c2+1])
				  { if(hs<sc)
				    {	flag=1;

				      hs=sc;
				    }
				    lost();
				    return;
				  }
				  background(co,3,5,41,71);
				   m[r][++c]=1;
				   m[r2][++c2]=3;

				  if(c>71)
				  c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;
				  for(i=2;i<42;i++)
				   for(j=4;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  	  gotoxy(j,i);
					  textbackground(co+7);
					  cprintf(" ");;

				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  	  gotoxy(j,i);
					  textbackground(7);
					  cprintf(" ");;

				    }
				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				  {m[a[i]][b[i]]=0;
				  }
				  for(i=l2;i<k2-s2;i++)
				  {m[a2[i]][b2[i]]=0;
				  }

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;
}
				 else
				 {gotoxy(ca,ra);
				 cout<<(char)4;
				 }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 print();
				 clock();
				  delay(sp);

				   count++;

				  if(count==100)
				  screensaver();

				 point();

		  }

			    lastloop='M';
			    lastloop2='d';
			   }

		 if((ch=='M'&&chh=='a')&&(lastloop!='K'&&lastloop2!='d'))
			   {
				 while(!kbhit())
			       {
				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r][c+1]||m[r2][c2-1])
				  { if(hs<sc)
				    {	flag=1;

				      hs=sc;
				    }
				    lost();
				    return;
				  }
				  background(co,3,5,41,71);
				   m[r][++c]=1;
				   m[r2][--c2]=3;

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				  for(i=2;i<42;i++)
				   for(j=4;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  	  gotoxy(j,i);
					  textbackground(co+7);
					  cprintf(" ");

				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  	  gotoxy(j,i);
					  textbackground(7);
					  cprintf(" ");;

				    }
				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				  {m[a[i]][b[i]]=0;
				  }
				  for(i=l2;i<k2-s2;i++)
				  {m[a2[i]][b2[i]]=0;
				  }

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;
}
				 else
				 {gotoxy(ca,ra);
				 cout<<(char)4;
				 }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 print();
				 clock();
				  delay(sp);

				   count++;

				  if(count==100)
				  screensaver();

				 point();

		  }

			    lastloop='M';
			    lastloop2='a';
			   }

		 if((ch=='M'&&chh=='w')&&(lastloop!='K'&&lastloop2!='s'))
			   {
				 while(!kbhit())
			       {
				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r][c+1]||m[r2-1][c2])
				  { if(hs<sc)
				    {	flag=1;

				      hs=sc;
				    }
				    lost();
				    return;
				  }
				  background(co,3,5,41,71);
				   m[r][++c]=1;
				   m[--r2][c2]=3;

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				  for(i=2;i<42;i++)
				   for(j=4;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  	  gotoxy(j,i);
					  textbackground(co+7);
					  cprintf(" ");

				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  	  gotoxy(j,i);
					  textbackground(7);
					  cprintf(" ");;

				    }
				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				  {m[a[i]][b[i]]=0;
				  }
				  for(i=l2;i<k2-s2;i++)
				  {m[a2[i]][b2[i]]=0;
				  }

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;
				 }
				 else
				 {gotoxy(ca,ra);
				 cout<<(char)4;
				 }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 print();
				 clock();
				  delay(sp);

				   count++;

				  if(count==100)
				  screensaver();

				 point();

		  }

			    lastloop='M';
			    lastloop2='w';
			   }

		 if((ch=='M'&&chh=='s')&&(lastloop!='K'&&lastloop2!='w'))
			   {
				 while(!kbhit())
			       {
				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r][c+1]||m[r2+1][c2])
				  { if(hs<sc)
				    {	flag=1;

				      hs=sc;
				    }
				    lost();
				    return;
				  }
				  background(co,3,5,41,71);
				   m[r][++c]=1;
				   m[++r2][c2]=3;

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				  for(i=2;i<42;i++)
				   for(j=4;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  	  gotoxy(j,i);
					  textbackground(co+7);
					  cprintf(" ");

				    }

				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  	  gotoxy(j,i);
					  textbackground(7);
					  cprintf(" ");

				    }
				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				  {m[a[i]][b[i]]=0;
				  }
				  for(i=l2;i<k2-s2;i++)
				  {m[a2[i]][b2[i]]=0;
				  }

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;
}
				 else
				 {gotoxy(ca,ra);
				 cout<<(char)4;
				 }

				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 print();
				 clock();
				  delay(sp);

				   count++;

				  if(count==100)
				  screensaver();

				 point();

		  }

			    lastloop='M';
			    lastloop2='s';
			   }

			   if((ch=='P'&&chh=='s')&&(lastloop!='H'&&lastloop2!='w'))
			   {

				 while(!kbhit())
			       {  background(co,3,5,41,71);

				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;
				  box(7,2,4,42,72,4,0);

				  if(m[r+1][c]||m[r2+1][c2])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[++r][c]=1;
				   m[++r2][c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				    m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				    m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='P';
			    lastloop2='s';
			   }

			   if((ch=='P'&&chh=='w')&&(lastloop!='H'&&lastloop2!='s'))
			   {

				 while(!kbhit())
			       {  background(co,3,5,41,71);

				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;
				  box(7,2,4,42,72,4,0);

				  if(m[r+1][c]||m[r2-1][c2])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[++r][c]=1;
				   m[--r2][c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				    m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				    m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 textcolor(7);
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='P';
			    lastloop2='w';
			   }
			   if((ch=='P'&&chh=='a')&&(lastloop!='H'&&lastloop2!='d'))
			   {

				 while(!kbhit())
			       {  background(co,3,5,41,71);

				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;
				  box(7,2,4,42,72,4,0);

				  if(m[r+1][c]||m[r2][c2-1])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[++r][c]=1;
				   m[++r2][c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				    m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				    m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='P';
			    lastloop2='a';
			   }

			   if((ch=='P'&&chh=='d')&&(lastloop!='H'&&lastloop2!='a'))
			   {

				 while(!kbhit())
			       {  background(co,3,5,41,71);

				  gotoxy(2,49);
				  cout<<c<<" ³ "<<r;
				  box(7,2,4,42,72,4,0);

				  if(m[r+1][c]||m[r2][c2-1])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;// cout<<"akshay";
				    //lost();
				   // return;
				  }

				   m[++r][c]=1;
				   m[r2][++c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				    m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				    m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='P';
			    lastloop2='d';

			   }

			   if((ch=='K'&&chh=='a')&&(lastloop!='M'&&lastloop2!='d'))
			   {

				 while(!kbhit())
			       { background(co,3,5,41,71);

				 gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				 box(7,2,4,42,72,4,0);

				   if(m[r][c-1]||m[r2][c2-1])
				  { if(hs<sc)
					flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				 m[r][--c]=1;
				 m[r2][--c2]=3;


				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				   m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;
				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='K';
			    lastloop2='a';
			   }

			   if((ch=='K'&&chh=='d')&&(lastloop!='M'&&lastloop2!='a'))
			   {

				 while(!kbhit())
			       { background(co,3,5,41,71);

				 gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				 box(7,2,4,42,72,4,0);

				   if(m[r][c-1]||m[r2][c2+1])
				  { if(hs<sc)
					flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				 m[r][--c]=1;
				 m[r2][++c2]=3;


				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				   m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();
				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='K';
			    lastloop2='d';
			   }

			   if((ch=='K'&&chh=='s')&&(lastloop!='M'&&lastloop2!='w'))
			   {

				 while(!kbhit())
			       { background(co,3,5,41,71);

				 gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				 box(7,2,4,42,72,4,0);

				   if(m[r][c-1]||m[r2+1][c2])
				  { if(hs<sc)
					flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				 m[r][--c]=1;
				 m[++r2][c2]=3;


				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				   m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='K';
			    lastloop2='s';
			   }

			   if((ch=='K'&&chh=='w')&&(lastloop!='M'&&lastloop2!='s'))
			   {

				 while(!kbhit())
			       { background(co,3,5,41,71);

				 gotoxy(2,49);
				  cout<<c<<" ³ "<<r;

				 box(7,2,4,42,72,4,0);

				   if(m[r][c-1]||m[r2-1][c2])
				  { if(hs<sc)
					flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				 m[r][--c]=1;
				 m[--r2][c2]=3;


				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				 textbackground(co+7);
				    cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }

				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)
				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)
				   m[a2[i]][b2[i]]=0;

				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				textcolor(4);
				 cout<<(char)3;

				 }
				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();
				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='K';
			    lastloop2='w';
			   }

			   if((ch=='H'&&chh=='w')&&(lastloop!='P'&&lastloop2!='s'))
			   {
				 while(!kbhit())
			       {
				  background(co,3,5,41,71);

				  gotoxy(2,49);
				   cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r-1][c]&&m[r2-1][c2])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[--r][c]=1;
				   m[--r2][c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				       textbackground(co+7);
				       cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)

				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)

				   m[a2[i]][b2[i]]=0;


				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }

				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;
				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='H';
			    lastloop2='w';
			   }
			   if((ch=='H'&&chh=='s')&&(lastloop!='P'&&lastloop2!='w'))
			   {
				 while(!kbhit())
			       {
				  background(co,3,5,41,71);

				  gotoxy(2,49);
				   cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r-1][c]&&m[r2+1][c2])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[--r][c]=1;
				   m[++r2][c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				       textbackground(co+7);
				       cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)

				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)

				   m[a2[i]][b2[i]]=0;


				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }

				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;


				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='H';
			    lastloop2='s';
			   }
			   if((ch=='H'&&chh=='a')&&(lastloop!='P'&&lastloop2!='d'))
			   {
				 while(!kbhit())
			       {
				  background(co,3,5,41,71);

				  gotoxy(2,49);
				   cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r-1][c]&&m[r2][c2-1])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[--r][c]=1;
				   m[r2][--c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				       textbackground(co+7);
				       cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)

				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)

				   m[a2[i]][b2[i]]=0;


				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;
								 }

				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='H';
			    lastloop2='a';
			   }

			   if((ch=='H'&&chh=='d')&&(lastloop!='P'&&lastloop2!='a'))
			   {
				 while(!kbhit())
			       {
				  background(co,3,5,41,71);

				  gotoxy(2,49);
				   cout<<c<<" ³ "<<r;

				  box(7,2,4,42,72,4,0);

				   if(m[r-1][c]&&m[r2][c2+1])
				  { if(hs<sc)
				     flag=1;

				    hs=sc;
				    lost();
				    return;
				  }

				   m[--r][c]=1;
				   m[r2][++c2]=3;

				  for(i=3;i<42;i++)
				   for(j=5;j<72;j++)
				   {
				    if(m[i][j]==1)
				    {  gotoxy(j,i);
				       textbackground(co+7);
				       cprintf(" ");
				    }
				    if(m[i][j]==2)
				    {  gotoxy(j,i);
				      textbackground(co+10);
				      cprintf(" ");

				    }
				    if(m[i][j]==3)
				    {  gotoxy(j,i);
				      textbackground(7);
				      cprintf(" ");

				    }

				   }


				   k++;
				   k2++;

				   a[k]=r,b[k]=c;
				   a2[k2]=r2,b2[k2]=c2;

				   for(i=l;i<k-s;i++)

				   m[a[i]][b[i]]=0;
				   for(i=l2;i<k2-s2;i++)

				   m[a2[i]][b2[i]]=0;


				  l=k-s;
				  l2=k2-s2;

				 if(bonus%5==0)
				 {  gotoxy(ca,ra);
				 textcolor(4);
				 cout<<(char)3;

				 }

				 else
				 {
				 gotoxy(ca,ra);
				 cout<<(char)4;
				 }
				 textbackground(co);
				 textcolor(co+7);

				 gotoxy(c,r);
				 cprintf("");
				 gotoxy(c2,r2);
				 cprintf("");

				 point();

				  if(c>71)
				 c=5;
				  if(c<5)
				  c=71;
				  if(r<3)
				  r=41;
				  if(r>41)
				  r=3;

				  if(c2>71)
				 c2=5;
				  if(c2<5)
				  c2=71;
				  if(r2<3)
				  r2=41;
				  if(r2>41)
				  r2=3;

				 print();
				 clock();
				  delay(sp);


				   count++;

				  if(count==100)
				  screensaver();

				 }

			    lastloop='H';
			    lastloop2='d';
			   }

			   if(chx==(char)27)
			  { if(sc>hs)
			    {hs=sc;
	 box(10,20,28,24,50,4,co);
	  background(co+10,21,29,23,49);
	  gotoxy(30,22);
	  cout<<"HIGHEST SCORE :- "<<hs;
	  flag=0;
	    getch();

			}

			    return;

			  }
			   if(chx=='k')
			   sp+=10;

			   if(chx=='l')
			   sp-=10;

			   if(chx=='j')
			   co++;

			   if(chx=='h')
			   co--;

			   if(chx=='g')
			   sc++;

			   if(chx=='f')
			   sc--;

			   if(chx=='m')
			   sec++;

			   if(chx=='n')
			   sec--;

			   if(chx=='b')
			   min++;

			   if(chx=='v')
			   min--;

			   if(chx=='c')
			   hr++;

			   if(chx=='x')
			   hr--;

			    if(chx=='o')
			   s++;

			    if(chx=='p')
			   s--;


       }


}

void menu2()
{  clrscr();
	    while(1)
	    {

		int sel =26;

		char ch3='a';
		flag=2;

		background(0,1,1,50,80);

		    while(ch3!=(char)13)
		       {
			  printmenu2(sel);

			 ch3=getch();

			 switch(ch3)
			 {case 'P': sel+=2;
				    break;

			 case 'H':  sel-=2;
				    break;
			 case (char)27:
			     for(i=0;i<=50;i++)
			       for(j=0;j<=80;j++)
				m[i][j]=0;

				       exit(1);

			 }
			 if(sel>36)
			 sel=26;


			 if(sel<26)
			 sel=36;

		       }


			switch(sel)
			{
		       case 26:
			       game2();
				break;


		       case 28:  c=10,r=10,c2=50,r2=30,min=0,sec=0,hr=0,
				 sc=0,co=6,lastloop=lastloop2='z',s=2,s2=2;
				 for(i=0;i<50;i++)
				   for(j=0;j<80;j++)
				    m[i][j]=0;

				 k=2;
				 l=0;
				 k2=2;
				 l2=0;
				  game();
				break;

		     case 30:	settings();
				 break;

		     case 32:  	background(0,1,1,50,80);
				background(1,19,29,34,49);

			   //	box(7,18,28,35,50);

				gotoxy(30,26);
				textbackground(10);
				cout<<"HIGHEST SCORE  -> "<<hs;

				getch();
			       break;


		     case 34: { help();
			       }
			       break;

		     case 36:
			      quit();
		      }
	     }

}

void lost()
{  while(!kbhit())
  {    for(i=3;i<42;i++)
	for(j=5;j<72;j++)
	 {  if(m[i][j]==1)
	    {  gotoxy(j,i);
	       textbackground(co);

	       cprintf(" ");
	    }
	}


      box(7,2,4,42,72,4,0);

      clock();
      print();

      delay(200);

      for(i=3;i<42;i++)
	for(j=5;j<72;j++)
	 {  if(m[i][j]==1)
	    {  gotoxy(j,i);
	       textbackground(4);
	       cprintf(" ");
	    }

	    if(m[i][j]==2)
	    {  gotoxy(j,i);
	       textbackground(co+10);
	       cprintf(" ");
	    }
	}

	 textbackground(co);
	 textcolor(4);

	 if(co==4)
	 textcolor(0);

	 gotoxy(c,r);
	 cprintf("");

	 delay(200);
  }


    s=0,c=10,r=10,min=0,sec=0,hr=0,sc=0,lastloop='z';
				 for(i=0;i<50;i++)
				   for(j=0;j<80;j++)
				    m[i][j]=0;


				 k=2;
				 l=0;
  getch();


	 if(flag==1)
	 {box(10,20,28,24,50,4,co);
	  background(co+10,21,29,23,49);
	  gotoxy(30,22);
	  cout<<"HIGHEST SCORE :- "<<hs;
	  flag=0;
	 getch();
	 }
	  textcolor(7);

}

void box(int co,int sr,int sc,int er,int ec,int ch=1,int tb=0)
{textcolor(co);
 textbackground(tb);

 if(ch==1)
 {
 gotoxy(sc,sr);
 cprintf("É");

 for(i=sc+1;i<ec;i++)
 {gotoxy(i,sr);
  cprintf("Í");
  gotoxy(i,er);
  cprintf("Í");
 }
 gotoxy(ec,sr);
 cprintf("»");

 for(i=sr+1;i<er;i++)
 {gotoxy(sc,i);
  cprintf("º");
  gotoxy(ec,i);
  cprintf("º");
 }

 gotoxy(ec,er);
 cprintf("¼");

 gotoxy(sc,er);
 cprintf("È");
 }

 if(ch==2)
 {
 gotoxy(sc,sr);
 cprintf("Ü");

 for(i=sc+1;i<ec;i++)
 {gotoxy(i,sr);
  cprintf("Ü");
  gotoxy(i,er);
  cprintf("Ü");
 }
 gotoxy(ec,sr);
 cprintf("Ü");

 for(i=sr+1;i<er;i++)
 {gotoxy(sc,i);
  cprintf("Û");
  gotoxy(ec,i);
  cprintf("Û");
 }

 gotoxy(ec,er);
 cprintf("Û");

 gotoxy(sc,er);
 cprintf("Û");
 }


  if(ch==3)
 {
 gotoxy(sc,sr);
 cprintf(" ");

 for(i=sc+1;i<ec;i++)
 {gotoxy(i,sr);
  cprintf(" ");
  gotoxy(i,er);
  cprintf(" ");
 }
 gotoxy(ec,sr);
 cprintf(" ");

 for(i=sr+1;i<er;i++)
 {gotoxy(sc,i);
  cprintf(" ");
  gotoxy(ec,i);
  cprintf(" ");
 }

 gotoxy(ec,er);
 cprintf(" ");

 gotoxy(sc,er);
 cprintf(" ");
 }

  if(ch==4)
 {
 gotoxy(sc,sr);
 cprintf("Ú");

 for(i=sc+1;i<ec;i++)
 {gotoxy(i,sr);
  cprintf("Ä");
  gotoxy(i,er);
  cprintf("Ä");
 }
 gotoxy(ec,sr);
 cprintf("¿");

 for(i=sr+1;i<er;i++)
 {gotoxy(sc,i);
  cprintf("³");
  gotoxy(ec,i);
  cprintf("³");
 }

 gotoxy(ec,er);
 cprintf("Ù");

 gotoxy(sc,er);
 cprintf("À");
 }

 textcolor(7);
}

void background(int co,int sr,int sc,int er,int ec)
{   textbackground(co);

   for(i=sr;i<=er;i++)
      for(int k=sc;k<=ec;k++)
      {
	gotoxy(k,i);
	cprintf(" ");
      }

}

void help()
{  clrscr();

   cout<<"\n\nUSE W/A/S/D TO CONTROL THE SNAKE.\n\n\n\nEAT THE FOOD TO SCORE POINTS.\n\n\n\nAS THE SCORE WILL INCREASE, THE SNAKE WILL BECOME LONGER.";

   cout<<"\n\n\n\n\t\tpress ESC to exit.";
   cout<<"\n\t\tFor more information, contact rocking.akshay09@gmail.com .";
   box(7,25,1,29,5);
   box(7,25,6,29,10);
   box(7,25,11,29,15);
   box(7,20,6,24,10);

   gotoxy(3,27);
   cout<<"A";
   gotoxy(8,27);
   cout<<"S";
   gotoxy(13,27);
   cout<<"D";
   gotoxy(8,22);
   cout<<"W";
   getch();
}

void printmenu2(int sel)
{
	box(7,16,15,40,62);

	background(10,17,16,39,61);
	textbackground(4);
	gotoxy(18,sel);
	cprintf("              ");
	textbackground(10);
	textcolor(4+BLINK);
	gotoxy(35,18);
	cprintf("MAIN MENU");

	textcolor(7);
	gotoxy(36,21);
	cout<<"OPTIONS ";

	gotoxy(18,26);
	cout<<"SINGLE PLAYER ";

	gotoxy(18,28);
	cout<<"MULTIPLAYER ";

	gotoxy(18,30);
	cout<<"SETTINGS";

	gotoxy(18,32);
	cout<<"HIGH SCORE";

	gotoxy(18,34);
	cout<<"INSTRUCTIONS";

	gotoxy(18,36);
	cout<<"QUIT";

	showdate();

	while(!kbhit())
	 showtime();
}

void backcolor()
{clrscr();
	char ch4;
	int sele=12;
	int ci=33,ri=12;

	while(ch4!=(char)13)
	{  ri=12;
	   clrscr();
	   background(co,1,1,50,80);
	   box(7,8,31,45,50);
	   textbackground(co+4);

	   gotoxy(ci,sele);
	   cprintf("               ");
	   textbackground(co);
	   gotoxy(ci,ri);
	   cout<<"0.black ";
	   gotoxy(ci,ri+=2);
	   cout<<"1.blue ";
	   gotoxy(ci,ri+=2);
	   cout<<"2.green ";
	   gotoxy(ci,ri+=2);
	   cout<<"3.cyan ";
	   gotoxy(ci,ri+=2);
	   cout<<"4.red ";
	   gotoxy(ci,ri+=2);
	   cout<<"5.magenta ";
	   gotoxy(ci,ri+=2);
	   cout<<"6. brown ";
	   gotoxy(ci,ri+=2);
	   cout<<"8.darkgrey ";
	   gotoxy(ci,ri+=2);
	   cout<<"9.lightblue ";
	   gotoxy(ci,ri+=2);
	   cout<<"10.lightgreen";
	   gotoxy(ci,ri+=2);
	   cout<<"11.lightcyan ";
	   gotoxy(ci,ri+=2);
	   cout<<"12.lightred ";
	   gotoxy(ci,ri+=2);
	   cout<<"13.lightmagenta ";
	   gotoxy(ci,ri+=2);
	   cout<<"14.yellow ";

	   ch4=getch();

	   switch(ch4)
	   { case 'P':sele+=2;
		      break;

	     case 'H':sele-=2;
		      break;

	     case 27:
		      return;
	   }

	   if(sele>12+26)
	     sele=12;
	   if(sele<12)
	     sele=26+12;

	}

	  co=(sele-12)/2;

}

void level()
{
	 char ch5;
	 int cl=30,rl=25;

	 clrscr();

	 for(i=1;i<lim;i++)
	 {
	   gotoxy(cl,rl);
	   cout<<(char)178;
	   cl++;

	 }

	 gotoxy(37,28);
	 cout<<"LEVEL";

	 box(7,16,22,34,56);
	 box(7,24,29,26,49);

	 while(ch5!=(char)13)
	 {  if(cl<29)
	    cl++;

	    ch5=getch();

	    switch(ch5)
	    {case 'M': if(cl<49)
		       {
			  gotoxy(cl,rl);
			  cout<<(char)178;

			  cl++;
			  lim++;
			  sp-=10;
			}
			break;
	     case 'K': if(cl>30)
		       {
			 cl--;

			 gotoxy(cl,rl);
			 cout<<' ';
			 lim--;
			 sp+=10;
		       }
			break;
	      case 27:return;
	    }
	    gotoxy(70,49);
	    cout<<sp;
	    gotoxy(37,28);
	    cout<<"LEVEL";
	 }
}

void changepass()
{   	  background(co,1,1,50,80);
	  background(1,19,29,34,59);
	  box(7,18,28,35,60);

	  gotoxy(30,22);

	  cout<<"ENTER NEW PASSWORD ";
	  gets(p);

    ofstream fout("snaker2.txt");
      fout<<p;

    fout.close();

}

void changestage()
{ clrscr();
  char ch2;
  int sel=16;

       ch2='a';
		       while(ch2!=(char)13)
		       {
				background(co,1,1,50,80);
			background(1,11,29,37,49);

			box(7,10,28,38,50);

			gotoxy(30,sel);
			textbackground(4);
			cprintf("                  ");
			textbackground(co);
			gotoxy(35,12);
			cout<<"STAGES ";
			gotoxy(30,16);
			cout<<"NO STAGE";
			gotoxy(30,19);
			cout<<"BOX";


			gotoxy(30,22);
			cout<<"TUNNEL";
			gotoxy(30,25);
			cout<<"MILL";
			gotoxy(30,28);
			cout<<"RAILS";
			gotoxy(30,31);
			cout<<"APARTMENT";
			gotoxy(30,34);
			cout<<"GO BACK";

		       ch2=getch();

		       switch(ch2)
		       {
			 case 'P': sel+=3;
				   break;

			 case 'H': sel-=3;
				   break;
			 case 27: //sel-=3;
				   return;
				//   break;

		       }

		       if(sel<16)
		       sel=34;
		       if(sel>34)
		       sel=16;

			}

			  if(sel>=16&&sel<=34)
				st=(sel-16)/3;


			 init();
}

void settings()
{clrscr();
char ch2;
int sel=24;

     while(1)
     { sel=24;
       ch2='a';
		       while(ch2!=(char)13)
		       {
				background(co,1,1,50,80);
			background(1,19,29,38,49);

			box(7,18,28,39,50);

			gotoxy(30,sel);
			textbackground(4);
			cprintf("                  ");
			textbackground(co);
			gotoxy(35,20);
			cout<<"OPTIONS ";
			gotoxy(30,24);
			cout<<"LEVEL ";
			gotoxy(30,27);
			cout<<"STAGE";


			gotoxy(30,30);
			cout<<"BACKGROUND COLOR";
			gotoxy(30,33);
			cout<<"CHANGE PASSWORD";
			gotoxy(30,36);
			cout<<"BACK";

		       ch2=getch();

		       switch(ch2)
		       {
			 case 'P': sel+=3;
				   break;

			 case 'H': sel-=3;
				   break;
			 case 27:  return;

		       }

		       if(sel<24)
		       sel=36;
		       if(sel>36)
		       sel=24;

			}

			switch(sel)
			{
			  case 24:
				  level();

				     break;

			  case 27:  changestage();
				    break;

			  case 30:  backcolor();
				    break;
			  case 33: changepass();
				   break;
			 case 36:
				return;
			}

      }

}

void clock()
{
	  box(7,46,63,48,79);
	  gotoxy(65,47);

	  cout<<"TIME -"<<hr<<":"<<min<<":"<<sec++;
	  if(sec==60)
	 {sec=0;
	  min++;
	 }
	  if(min==60)
	    { min=0;
	      hr++;
	    }

}

void print()
{        textcolor(7);

	 gotoxy(1,47);
	 cout<<"score = "<<sc;

	 gotoxy(60,50);
	 cout<<"press ESC to exit ";



}

void point()
{
	   if((c==ca&&r==ra))
	   {
	     do
	      {  ra=(rand()%(42-4))+4;
		 ca=(rand()%(72-6))+6;
	      }while(m[ra][ca]==2);

	      gotoxy(ca,ra);
	      cout<<(char)4;

	      for(i=90;i>=sp;i-=10)
	      sc++;

	      s++;

	      sc++;

	if(bonus%5==0)
	 sc+=50;

	   sound(100);
	   delay(20);
	   nosound();
	   bonus++;


	   }
	   if((c2==ca&&r2==ra))
	   {
	     do
	      {  ra=(rand()%(42-4))+4;
		 ca=(rand()%(72-6))+6;
	      }while(m[ra][ca]==2);

	      gotoxy(ca,ra);
	      cout<<(char)4;

	      for(i=90;i>=sp;i-=10)
	      sc++;

	      s2++;

	      sc++;

	if(bonus%5==0)
	 sc+=50;
	   sound(100);
	   delay(20);
	   nosound();
	   bonus++;


	   }
}

void screensaver()
{ clrscr();
	      int a=1,c=5,r=5;

	      while(!kbhit())
	      {  clrscr();

		 if(a==1)
		 { gotoxy(c++,r++);
		   cout<<'*';
		 }

		 if(a==2)
		 { gotoxy(c++,r--);
		   cout<<'*';
		 }

		 if(a==3)
		 { gotoxy(c--,r--);
		   cout<<'*';
		 }

		 if(a==4)
		 { gotoxy(c--,r++);
		   cout<<'*';
		 }

		 if(a==3&&c==1)
		 { a=2;
		   continue;
		 }

		 if(a==4&&r==50)
		 { a=3;
		   continue;
		 }

		 if(a==1&&c==80)
		 { a=4;
		   continue;
		 }

		 if(a==2&&r==1)
		 { a=1;
		   continue;
		 }

		 if(c==1)
		  a=1;

		 if(r==50)
		  a=2;

		 if(c==80)
		  a=3;

		 if(r==1)
		  a=4;

		 delay(70);
	      }
getch();
}

void loading()
{clrscr();

      int ii=29,ij=29;

      background(0,1,1,50,80);
      box(9,2,2,48,78,1);
      box(11,17,26,30,56,2);
      box(10,23,28,25,54,1);
      box(10,19,28,21,54,1);

      textcolor(4);

      while(ij<54)
      { textcolor(6);
	gotoxy(ii,20);
	cprintf("Þ");

	if(ii==53)
	{ ii=29;
	  gotoxy(ii,20);
	  cout<<"                         ";
	  ij++;
	}

	textcolor(2);

	gotoxy(ij,24);
	cprintf("Û");

	textcolor(4+BLINK);
	gotoxy(38,27);
	cprintf("LOADING");

	ii++;

	delay(10);
      }

      textcolor(7);
}

void thanx()
{clrscr();

    int sr=2,sc=1,er=50,ec=80;

    background(0,1,1,50,80);

    while(sr!=24)
    { box(sr,sr,sc,er,ec,4);
      sr++,sc++,er--,ec--;
      delay(90);
    }

    textcolor(7);

    gotoxy(30,26);
    cprintf("THANX 4 PLAYING D GAME");

    sr=1,sc=1,er=51,ec=80;

    while(sr!=26)
    { box(2,sr,sc,er,ec,3);
      sr++,sc++,er--,ec--;
      delay(90);
    }

delay(100);

exit(1);
}

void quit()
{ int s=32;char chh='q';

  while(chh!=(char)13)
  { clrscr();
    background(co,1,1,50,80);
    background(2,21,22,30,60);

    box(0,19,20,32,62,1);
    box(7,18,19,33,63,4);

    textbackground(2);
    textcolor(0);

    gotoxy(32,23);
    cprintf("DO YOU WANT TO EXIT??");

    textbackground(4);

    gotoxy(s,27);
    cprintf("     ");

    textbackground(4);

    gotoxy(33,27);
    cout<<"YES           NO";

    chh=getch();

    switch(chh)
    {
      case 'K':s-=13;
	       break;
      case 'M':s+=13;
	       break;
    }

    if(s>32+13)
    s-=13;

    if(s<32)
    s+=13;

  }

  switch(s)
  {
    case 32:thanx();

    case 32+13:background(0,1,1,50,80);
	       textcolor(7);
	       return;
  }
}


void topic()
{ clrscr();

  char s[]="SNAKER GAME";

  int c=35,r=27,sr=2,sc=1,er=50,ec=80;

  background(0,1,1,50,80);
  textcolor(6);

  for(int i=0;i<=strlen(s);i++,c++)
  { for(int j=1,l=50;j<=25||l>=25;j++,l--)
    { clrscr();

      gotoxy(35,r);

      for(int k=0;k<i;k++)
      cout<<s[k];

      if(j%2==0)
      { gotoxy(c,j);
	cout<<s[i];
      }

      else
      { gotoxy(c,l);
	cout<<s[i];
      }

      delay(4);
    }

  }

    while(sr!=23)
    { box(10,sr,sc,er,ec);
      sr++,sc++,er--,ec--;
      delay(50);
    }

delay(200);
}

void pass()
{ clrscr();
      char ch,pass[20];
      int i=0;

      background(co,1,1,50,80);
      box(4,2,2,48,78,1);
      box(6,20,20,30,56,4);
      background(1,21,21,29,55);

      textbackground(1);
      textcolor(0);

      gotoxy(25,23);
      cprintf("ENTER PASSWORD  ");

      while(ch!=13)
      {ch=getch();


       if(ch==8)
       {i--;
	cout<<"\b"<<' '<<"\b";
	continue;
       }

       if(ch==27)
       exit(1);

       pass[i++]=ch;
       cprintf("*");
      }

      pass[--i]='\0';

      if(strcmpi(pass,p)==0)
      { gotoxy(30,37);
	textcolor(2);
	textbackground(0);

	cprintf("PASSWORD ACCEPTED");
	delay(200);
      }

      else
      { textbackground(0);
	textcolor(4);
	gotoxy(30,37);
	cprintf("WRONG PASSWORD");
	getch();
	exit(1);
       }
}

void showdate()
{  date dt;

   textcolor(10);

   getdate(&dt);
   gotoxy(5,3);
   cout<<"DATE "<<(int)dt.da_day<<" : "<<(int)dt.da_mon<<" : "<<dt.da_year;

   textcolor(7);
}

void showtime()
{  struct time tm;

   gettime(&tm);

   textcolor(10);

   if(tm.ti_hour>12)
   {tm.ti_hour-=12;
    gotoxy(77,3);
    cout<<"pm";
   }

   else
   {gotoxy(77,3);
    cout<<"am";
   }

   gotoxy(62,3);
   cout<<"TIME "<<(int)tm.ti_hour<<":"<<(int)tm.ti_min<<":"<<(int)tm.ti_sec<<":"<<(int)tm.ti_hund;

   if(tm.ti_hour>12)
   cout<<" pm";

   textcolor(7);
}

void firstscreen()
{clrscr();
      char ch;

     box(6,2,2,48,78,1);
     box(9,3,4,46,76,2);
     box(4,5,17,8,58,1);

	char s[100]="POORNIMA COLLEGE OF ENGINEERING";
	int l=34,c=21+35;
	for(;l>=0;l--)
	{ textcolor(9);
	  gotoxy(c--,7);
	  cprintf("%c",s[l]);
	  delay(80);
	}
	textcolor(2);
	gotoxy(30,21);
	cprintf("YEAR");
	textcolor(6);
	cprintf(" I");
	gotoxy(8,29);
	cprintf("NAME :-");
	gotoxy(8,31);
	cprintf("         AKSHAY MITTAL");
	gotoxy(8,33);
	cprintf("         ABHIJEET KUMAR");
//	gotoxy(8,37);
//	cprintf("SUBMITTED TO :-");


	char b[50]=" AKSHAY TALETIYA";
	int d=0,e=16;
	for(d=0;d<18;d++)
	{ textcolor(11);
	  gotoxy(e++,29);
	  cprintf("%c",b[d]);
	  delay(30);
	}

    //	textcolor(10);
      //	gotoxy(23,37);
  //	cprintf("MR. SUNIL KUMAR SHARMA");


	box(11,26,6,40,74,2);

	textcolor(6);
	gotoxy(7,44);
	cprintf("Press enter to continue..");
	while(ch!=13)
	ch=getch();
}

