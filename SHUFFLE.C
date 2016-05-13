#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include <graphics.h>
#include"design.h"
#include<string.h>

void generate(int [][4]);
void generatech(int [][4]);
void generatesy(int [][4]);
void cheatno(int [][4],int );
void cheatle(int [][4],int );
void cheatsy(int [][4],int );

void main()
{
  int a[4][4];
  int i,j,r,c,count=0,p=2,s=20;
  char ch,cheat[20];
  int gdriver = EGA, gmode = EGAHI, errorcode;
   initgraph(&gdriver, &gmode, "");
   errorcode = graphresult();
   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
   cleardevice();
  _setcursortype(_NOCURSOR);
   do
   {
   sound(440+s);
   s+=40;
   delay(5);
   setcolor(12);
   ellipse(150,60,75,265,50,40);
   ellipse(150,140,245,0,50,40);
   ellipse(165,60,95,180,50,40);
   ellipse(135,140,275,85,50,40);
   ellipse(165,60,180,265,50,40);
   ellipse(150,140,0,80,50,40);
   delay(50);
   setcolor(0);
   ellipse(150,60,75,265,50,40);
   ellipse(150,140,245,0,50,40);
   ellipse(165,60,95,180,50,40);
   ellipse(135,140,275,85,50,40);
   ellipse(165,60,180,265,50,40);
   ellipse(150,140,0,80,50,40);
   delay(50);
   setcolor(12);
   ellipse(190,125,345,175,40,50);
   ellipse(110,110,175,355,40,50);
   ellipse(190,110,90,175,40,50);
   ellipse(190,110,355,90,40,50);
   ellipse(110,95,270,355,40,50);
   ellipse(110,95,175,270,40,50);
   delay(50);
   setcolor(0);
   ellipse(190,125,345,175,40,50);
   ellipse(110,110,175,355,40,50);
   ellipse(190,110,90,175,40,50);
   ellipse(190,110,355,90,40,50);
   ellipse(110,95,270,355,40,50);
   ellipse(110,95,175,270,40,50);
   p++;
   delay(50);
   }while(p<18);
   nosound();
  settextstyle(GOTHIC_FONT, HORIZ_DIR, 8);
  setcolor(12);
  ellipse(150,60,75,265,50,40);
  ellipse(150,140,245,0,50,40);
  ellipse(165,60,95,180,50,40);
  ellipse(135,140,275,85,50,40);
  ellipse(165,60,180,265,50,40);
  ellipse(150,140,0,80,50,40);
  setcolor(3);
  delay(600);
  outtextxy(220,50,"H");
  setcolor(5);
  delay(250);
  outtextxy(275,50,"U");
  setcolor(1);
  delay(250);
  outtextxy(330,50,"F");
  setcolor(2);
  delay(250);
  outtextxy(385,50,"F");
  setcolor(14);
  delay(250);
  outtextxy(440,50,"L");
  setcolor(4);
  delay(250);
  outtextxy(495,50,"E");
  settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 3);
  setcolor(10);
  delay(400);
  outtextxy(298,180,"BY");
  setcolor(11);
  delay(250);
  outtextxy(55,230,"Y8EM210");
  setcolor(13);
  delay(250);
  outtextxy(195,230,"Y8EM216");
  setcolor(14);
  delay(250);
  outtextxy(335,230,"Y8EM220");
  setcolor(8);
  delay(250);
  outtextxy(475,230,"Y7EM208");
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  setcolor(3);
  nosound();
  delay(400);
  outtextxy(184,300,"Press any Key to Continue...");
  getch();
  menu :
  cleardevice();
  setbkcolor(10);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
  setcolor(15);
  outtextxy(235,50,"SHUFFLE");
  rectangle(245,145,378,180);
  rectangle(245,195,378,230);
  rectangle(245,245,378,280);
  setfillstyle(SOLID_FILL,5);
  bar(246,146,377,179);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  outtextxy(290,150,"PLAY");
  outtextxy(258,200,"INSTRUCTIONS");
  outtextxy(292,250,"EXIT");
  line(285,173,298,173);
  line(254,223,260,223);
  line(290,273,300,273);
  ch=getch();
  switch(ch)
  {
    case 'p' :
    case 'P' :
		goto play;

    case 'i' :
    case 'I' :
		 cleardevice();
		 setbkcolor(10);
		 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
		 setcolor(15);
		 outtextxy(235,50,"SHUFFLE");
		 rectangle(245,145,378,180);
		 rectangle(245,195,378,230);
		 rectangle(245,245,378,280);
		 setfillstyle(SOLID_FILL,10);
		 bar(246,146,377,179);
		 setfillstyle(SOLID_FILL,5);
		 bar(246,196,377,229);
		 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
		 outtextxy(290,150,"PLAY");
		 outtextxy(258,200,"INSTRUCTIONS");
		 outtextxy(292,250,"EXIT");
		 line(285,173,298,173);
		 line(254,223,260,223);
		 line(290,273,300,273);
		 getch();

		 goto instru;

    case 'e' :
    case 'E' :
	       cleardevice();
	       setbkcolor(10);
	       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,5);
	       setcolor(15);
	       outtextxy(235,50,"SHUFFLE");
	       rectangle(245,145,378,180);
	       rectangle(245,195,378,230);
	       rectangle(245,245,378,280);
	       setfillstyle(SOLID_FILL,10);
	       bar(246,146,377,179);
	       setfillstyle(SOLID_FILL,5);
	       bar(246,246,377,279);
	       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
	       outtextxy(290,150,"PLAY");
	       outtextxy(258,200,"INSTRUCTIONS");
	       outtextxy(292,250,"EXIT");
	       line(285,173,298,173);
	       line(254,223,260,223);
	       line(290,273,300,273);
	       getch();

	       exit(0);
   }
    instru :
  cleardevice();
  setbkcolor(6);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,1);
  outtextxy(254,50,"INSTRUCTIONS");
  gotoxy(4,8);
  printf("Welcome to SHUFFLE. You have to arrange the given arrangement according to\n\t   the sample before the number of moves exceeds the limit.");
  printf("\n\n\t\t       Limit for ROOKIE LEVEL is 350 moves");
  printf("\n\n\t\t      Limit for CHAMPION LEVEL is 250 moves");
  printf("\n\n\t\t       Limit for LEGEND LEVEL is 150 moves");
  gotoxy(25,20);
  printf("Press Esc to Return to Main Menu");
  getch();
  goto menu;
  play :
  cleardevice();
  setbkcolor(9);
  rectangle(206,95,430,132);
  rectangle(206,145,430,182);
  rectangle(206,195,430,232);
  setfillstyle(SOLID_FILL,5);
  bar(207,96,429,131);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
  outtextxy(242,36,"DIFFICULTY");
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
  outtextxy(284,100,"ROOKIE");
  outtextxy(270,150,"CHAMPION");
  outtextxy(282,200,"LEGEND");
  line(282,126,294,126);
  line(268,176,282,176);
  line(276,226,292,226);
  gotoxy(25,20);
  printf("Press Esc to Return to Main Menu");
  ch=getch();
  switch(ch)
  {
    case 'r' :
    case 'R' :
	      closegraph();
	      clrscr();
	      generate(a);
	      while(1)
	      {
		_setcursortype(_NOCURSOR);
		textbackground(BLUE);
		clrscr();
		gotoxy(68,3);
		printf("SAMPLE");
		box(63,4,79,9);
		gotoxy(64,5);
		printf(" 1   2   3   4");
		gotoxy(64,6);
		printf(" 5   6   7   8");
		gotoxy(64,7);
		printf(" 9  10  11  12");
		gotoxy(64,8);
		printf(" 13  14  15   ");
		box(14,4,52,20);
		hline(8,15,51);
		hline(12,15,51);
		hline(16,15,51);
		vline(23,5,19);
		vline(33,5,19);
		vline(43,5,19);
		gotoxy(66,12);
		printf("Key Strokes");
		gotoxy(71,14);
		printf("%d",count);
		gotoxy(66,17);
		printf("Esc to Exit");
		gotoxy(63,20);
		printf("Alt+S to Shuffle");
		for(i=0;i<4;i++)
		{
		  for(j=0;j<4;j++)
		  {
		    gotoxy(18+j*10,6+i*4);
		    if(a[i][j]!=0)
		    {
		      printf("%d",a[i][j]);
		    }
		    else
		    {
		      r=i;
		      c=j;
		    }
		  }
		}
		ch=getch();
		if(ch==0)
		ch=getch();
		count++;
		if(count>350)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME OVER");
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
		switch(ch)
		{
		  case 80 : if(r>0)
			    {
			      a[r][c]=a[r-1][c];
			      a[r-1][c]=0;
			    }
			    break;

		  case 72 : if(r<3)
			    {
			      a[r][c]=a[r+1][c];
			      a[r+1][c]=0;
			    }
			    break;

		  case 77 : if(c>0)
			    {
			      a[r][c]=a[r][c-1];
			      a[r][c-1]=0;
			    }
			    break;

		  case 75 : if(c<3)
			    {
			      a[r][c]=a[r][c+1];
			      a[r][c+1]=0;
			    }
			    break;

		  case 31 : generate(a);
			    count=0;
			    break;

		  case 27 : exit(0);



		  case 'a':
		  case 'A':
			   clrscr();
			   gotoxy(22,10);
			   printf("Enter the Cheat Code : ");
			   gets(cheat);
			   if(strcmp(cheat,"wanna win")==0)
			   {
			     cheatno(a,count);
			   }
			   else
			   {
			     gotoxy(30,13);
			     printf("Wrong Cheat Code");
			     getch();
			   }

		}
		if(a[0][0]==1 && a[0][1]==2 && a[0][2]==3 && a[0][3]==4 && a[1][0]==5 && a[1][1]==6 && a[1][2]==7 && a[1][3]==8 && a[2][0]==9 && a[2][1]==10 && a[2][2]==11 && a[2][3]==12 && a[3][0]==13 && a[3][1]==14 && a[3][2]==15 && a[3][3]==0)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME SUCCESS");
		  gotoxy(30,15);
		  printf("No: of Key Strokes : %d",count);
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
	      }


    case 'c' :
    case 'C' :
		 cleardevice();
		 setbkcolor(9);
		 rectangle(206,95,430,132);
		 rectangle(206,145,430,182);
		 rectangle(206,195,430,232);
		 setfillstyle(SOLID_FILL,9);
		 bar(207,96,429,131);
		 setfillstyle(SOLID_FILL,5);
		 bar(207,146,429,181);
		 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
		 outtextxy(242,36,"DIFFICULTY");
		 settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
		 outtextxy(284,100,"ROOKIE");
		 outtextxy(270,150,"CHAMPION");
		 outtextxy(282,200,"LEGEND");
		 line(282,126,294,126);
		 line(268,176,282,176);
		 line(276,226,292,226);
		 gotoxy(25,20);
		 printf("Press Esc to Return to Main Menu");
		 getch();
	      closegraph();
	      _setcursortype(_NOCURSOR);
	      generatech(a);
	      while(1)
	      {
		textbackground(BROWN);
		clrscr();
		gotoxy(67,3);
		printf("SAMPLE");
		box(63,4,76,9);
		gotoxy(64,5);
		printf(" a  b  c  d");
		gotoxy(64,6);
		printf(" e  f  g  h");
		gotoxy(64,7);
		printf(" i  j  k  l");
		gotoxy(64,8);
		printf(" m  n  o   ");
		box(14,4,52,20);
		hline(8,15,51);
		hline(12,15,51);
		hline(16,15,51);
		vline(23,5,19);
		vline(33,5,19);
		vline(43,5,19);
		gotoxy(65,12);
		printf("Key Strokes");
		gotoxy(70,14);
		printf("%d",count);
		gotoxy(65,17);
		printf("Esc to Exit");
		gotoxy(63,20);
		printf("Alt+S to Shuffle");
		for(i=0;i<4;i++)
		{
		  for(j=0;j<4;j++)
		  {
		    gotoxy(18+j*10,6+i*4);
		    if(a[i][j]!=0)
		    {
		      printf("%c",a[i][j]);
		    }
		    else
		    {
		      r=i;
		      c=j;
		    }
		  }
		}
		ch=getch();
		if(ch==0)
		  ch=getch();
		  count++;
		if(count>250)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME OVER");
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
		switch(ch)
		{
		  case 80 : if(r>0)
			    {
			      a[r][c]=a[r-1][c];
			      a[r-1][c]=0;
			    }
			    break;

		  case 72 : if(r<3)
			    {
			      a[r][c]=a[r+1][c];
			      a[r+1][c]=0;
			    }
			    break;

		  case 77 : if(c>0)
			    {
			      a[r][c]=a[r][c-1];
			      a[r][c-1]=0;
			    }
			    break;

		  case 75 : if(c<3)
			    {
			      a[r][c]=a[r][c+1];
			      a[r][c+1]=0;
			    }
			    break;

		  case 31 : generatech(a);
			    count=0;
			    break;

		  case 27 : exit(0);


		  case 'a':
		  case 'A':
			   clrscr();
			   gotoxy(22,10);
			   printf("Enter the Cheat Code : ");
			   gets(cheat);
			   if(strcmp(cheat,"wanna win")==0)
			   {
			     cheatle(a,count);
			   }
			   else
			   {
			     gotoxy(30,13);
			     printf("Wrong Cheat Code");
			     getch();
			   }

		}
		if(a[0][0]=='a' && a[0][1]=='b' && a[0][2]=='c' && a[0][3]=='d' && a[1][0]=='e' && a[1][1]=='f' && a[1][2]=='g' && a[1][3]=='h' && a[2][0]=='i' && a[2][1]=='j' && a[2][2]=='k' && a[2][3]=='l' && a[3][0]=='m' && a[3][1]=='n' && a[3][2]=='o' && a[3][3]==0)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME SUCCESS");
		  gotoxy(32,15);
		  printf("No: of Key Strokes : %d",count);
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
	      }

    case 'l' :
    case 'L' :
		 cleardevice();
	       setbkcolor(9);
	       rectangle(206,95,430,132);
	       rectangle(206,145,430,182);
	       rectangle(206,195,430,232);
	       setfillstyle(SOLID_FILL,9);
	       bar(207,96,429,131);
	       setfillstyle(SOLID_FILL,5);
	       bar(207,196,429,231);
	       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,4);
	       outtextxy(242,36,"DIFFICULTY");
	       settextstyle(SANS_SERIF_FONT,HORIZ_DIR,2);
	       outtextxy(284,100,"ROOKIE");
	       outtextxy(270,150,"CHAMPION");
	       outtextxy(282,200,"LEGEND");
	       line(282,126,294,126);
	       line(268,176,282,176);
	       line(276,226,292,226);
	       gotoxy(25,20);
	       printf("Press Esc to Return to Main Menu");
	       getch();
	      closegraph();
	      _setcursortype(_NOCURSOR);
	      generatesy(a);
	      while(1)
	      {
		textbackground(LIGHTRED);
		clrscr();
		gotoxy(67,3);
		printf("SAMPLE");
		box(63,4,76,9);
		gotoxy(64,5);
		printf(" %c  %c  %c  %c",3,4,5,6);
		gotoxy(64,6);
		printf(" %c  %c  %c  %c",40,1,2,41);
		gotoxy(64,7);
		printf(" %c  %c  %c  %c",218,191,192,217);
		gotoxy(64,8);
		printf(" %c  %c  %c   ",224,225,236,41);
		box(14,4,52,20);
		hline(8,15,51);
		hline(12,15,51);
		hline(16,15,51);
		vline(23,5,19);
		vline(33,5,19);
		vline(43,5,19);
		gotoxy(65,12);
		printf("Key Strokes");
		gotoxy(70,14);
		printf("%d",count);
		gotoxy(65,17);
		printf("Esc to Exit");
		gotoxy(63,20);
		printf("Alt+S to Shuffle");
		for(i=0;i<4;i++)
		{
		  for(j=0;j<4;j++)
		  {
		    gotoxy(18+j*10,6+i*4);
		    if(a[i][j]!=0)
		    {
		      printf("%c",a[i][j]);
		    }
		    else
		    {
		      r=i;
		      c=j;
		    }
		  }
		}
		ch=getch();
		if(ch==0)
		  ch=getch();
		  count++;
		if(count>150)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME OVER");
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
		switch(ch)
		{

		  case 80 : if(r>0)
			    {
			      a[r][c]=a[r-1][c];
			      a[r-1][c]=0;
			    }
			    break;

		  case 72 : if(r<3)
			    {
			      a[r][c]=a[r+1][c];
			      a[r+1][c]=0;
			    }
			    break;

		  case 77 : if(c>0)
			    {
			      a[r][c]=a[r][c-1];
			      a[r][c-1]=0;
			    }
			    break;

		  case 75 : if(c<3)
			    {
			      a[r][c]=a[r][c+1];
			      a[r][c+1]=0;
			    }
			    break;

		  case 31 : generatesy(a);
			    count=0;
			    break;

		  case 27 : exit(0);


		  case 'a':
		  case 'A':
			   clrscr();
			   gotoxy(22,10);
			   printf("Enter the Cheat Code : ");
			   gets(cheat);
			   if(strcmp(cheat,"wanna win")==0)
			   {
			     cheatsy(a,count);
			   }
			   else
			   {
			     gotoxy(30,13);
			     printf("Wrong Cheat Code");
			     getch();
			   }

		}
		if(a[0][0]==3 && a[0][1]==4 && a[0][2]==5 && a[0][3]==6 && a[1][0]==40 && a[1][1]==1 && a[1][2]==2 && a[1][3]==41 && a[2][0]==218 && a[2][1]==191 && a[2][2]==192 && a[2][3]==217 && a[3][0]==224 && a[3][1]==225 && a[3][2]==236 && a[3][3]==0)
		{
		  clrscr();
		  textcolor(15);
		  gotoxy(35,12);
		  cprintf("GAME SUCCESS");
		  gotoxy(32,15);
		  printf("No: of Key Strokes : %d",count);
		  getch();
		  initgraph(&gdriver, &gmode, "");
		  goto menu;
		}
	      }


    case 27 : goto menu;

  }
}


void generate(int a[][4])
{
  int x[16],n,id=0,i,j;
  char ck;
  randomize();
  while(id<16)
  {
    n=random(16);
    ck=0;
    for(i=0;i<id;i++)
    {
      if(x[i]==n)
      {
	ck=1;
	break;
      }
    }
    if(ck==0)
    {
      x[id]=n;
      id++;
    }
  }
  id=0;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      a[i][j]=x[id];
      id++;
    }
  }
}

void generatech(int a[][4])
{
  int x[16],b[16],c=97,k,n,id=0,i,j;
  char ck;
  for(k=0;k<15;k++)
  {
    b[k]=c;
    c++;
  }
  b[k]=0;
  randomize();
  while(id<16)
  {
    n=random(16);
    ck=0;
    for(i=0;i<id;i++)
    {
      if(x[i]==b[n])
      {
	ck=1;
	break;
      }
    }
    if(ck==0)
    {
      x[id]=b[n];
      id++;
    }
  }
  id=0;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      a[i][j]=x[id];
      id++;
    }
  }
}

void generatesy(int a[][4])
{
  int x[16],b[16],k,n,id=0,i,j;
  char ck;
  b[1]=1;b[2]=3;b[3]=4;b[4]=6;b[5]=5;b[6]=2;
  b[7]=41;b[8]=224;b[9]=225;b[10]=218;b[11]=191;b[12]=192;b[13]=217;b[14]=236;b[15]=40;b[16]=41;
  randomize();
  while(id<16)
  {
    n=random(16);
    ck=0;
    for(i=0;i<id;i++)
    {
      if(x[i]==b[n])
      {
	ck=1;
	break;
      }
    }
    if(ck==0)
    {
      x[id]=b[n];
      id++;
    }
  }
  id=0;
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      a[i][j]=x[id];
      id++;
    }
  }
}


void cheatle(int a[4][4],int count)
{
  int s=97,i,j;
  a[0][0]='a'; a[0][1]='b'; a[0][2]='c'; a[0][3]='d'; a[1][0]='e'; a[1][1]='f'; a[1][2]='g'; a[1][3]='h' ;a[2][0]='i'; a[2][1]='j'; a[2][2]='k'; a[2][3]='l'; a[3][0]=0; a[3][1]='m'; a[3][2]='n';a[3][3]='o';
  box(58,4,69,15);
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      gotoxy(59+j*3,5+i*3);
      printf("%c",s);
      s++;
    }
  }
  gotoxy(59+9,5+9);
  printf("%c",0);
  box(16,3,52,19);
  hline(7,17,51);
  hline(11,17,51);
  hline(15,17,51);
  vline(24,4,18);
  vline(34,4,18);
  vline(44,4,18);
  gotoxy(32,21);
  printf("Key Strokes : %d",count);
  gotoxy(35,23);
  printf("Esc to Exit");
  gotoxy(35,25);
  printf("Alt+S to Shuffle");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      gotoxy(20+j*10,5+i*4);
      if(a[i][j]!=0)
      {
	printf("%c",a[i][j]);
      }
    }
  }
}


void cheatno(int a[4][4],int count)
{
  int s=1,i,j;
  a[0][0]=1; a[0][1]=2; a[0][2]=3; a[0][3]=4; a[1][0]=5; a[1][1]=6; a[1][2]=7; a[1][3]=8 ;a[2][0]=9; a[2][1]=10; a[2][2]=11; a[2][3]=12; a[3][0]=0; a[3][1]=13; a[3][2]=14;a[3][3]=15;
  box(58,4,69,15);
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      gotoxy(59+j*3,5+i*3);
      printf("%d",s);
      s++;
    }
  }
  gotoxy(59+9,5+9);
  printf("%c",0);
  box(16,3,52,19);
  hline(7,17,51);
  hline(11,17,51);
  hline(15,17,51);
  vline(24,4,18);
  vline(34,4,18);
  vline(44,4,18);
  gotoxy(32,21);
  printf("Key Strokes : %d",count);
  gotoxy(35,23);
  printf("Esc to Exit");
  gotoxy(35,25);
  printf("Alt+S to Shuffle");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      gotoxy(20+j*10,5+i*4);
      if(a[i][j]!=0)
      {
	printf("%d",a[i][j]);
      }
    }
  }
}

void cheatsy(int a[4][4],int count)
{
  int i,j;
  a[0][0]=3; a[0][1]=4; a[0][2]=5; a[0][3]=6; a[1][0]=40; a[1][1]=1; a[1][2]=2; a[1][3]=41 ;a[2][0]=218; a[2][1]=191; a[2][2]=192; a[2][3]=217; a[3][0]=0; a[3][1]=224; a[3][2]=225;a[3][3]=236;
  box(58,4,69,15);
  gotoxy(67,3);
  printf("SAMPLE");
  box(63,4,76,9);
  gotoxy(64,5);
  printf(" %c  %c  %c  %c",3,4,5,6);
  gotoxy(64,6);
  printf(" %c  %c  %c  %c",40,1,2,41);
  gotoxy(64,7);
  printf(" %c  %c  %c  %c",218,191,192,217);
  gotoxy(64,8);
  printf(" %c  %c  %c   ",224,225,236,41);
  gotoxy(59+9,5+9);
  printf("%c",0);
  box(16,3,52,19);
  hline(7,17,51);
  hline(11,17,51);
  hline(15,17,51);
  vline(24,4,18);
  vline(34,4,18);
  vline(44,4,18);
  gotoxy(32,21);
  printf("Key Strokes : %d",count);
  gotoxy(35,23);
  printf("Esc to Exit");
  gotoxy(35,25);
  printf("Alt+S to Shuffle");
  for(i=0;i<4;i++)
  {
    for(j=0;j<4;j++)
    {
      gotoxy(20+j*10,5+i*4);
      if(a[i][j]!=0)
      {
	printf("%c",a[i][j]);
      }
    }
  }
}
