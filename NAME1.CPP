#include<iostream.h>
#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
class name
{public: int i,j,len,T,ch,S;
	 char name11[40],name1[40];
	 name()
	 {gotoxy(4,2);
	  cout<<"Enter the name=";
	  gets(name11);
	  len=strlen(name11);i=2;j=3; T=2; S=2;
	  for(int k=0;k<len;k++)
	  {name1[k]=toupper(name11[k]);
	   if(k==len-1)
	    name1[len]='\0';
	  }
	  cout<<"    Name="<<name1;
	 }
	 int choice();
	  void time(double x)
	     {double h,n;
	     h=x*29999;
	     for(int m=0;m<=h;m++)
	       {n++;
		n--;
		}
	     }
	 void design();
	 void sp(){i=i+3;}
	 void m(); void n(); void a(); void I(); void s(); void h();
	 void b(); void c(); void d(); void e(); void f(); void g();
	 void J(); void K(); void l(); void o(); void p(); void q();
	 void r(); void t(); void u(); void v(); void w(); void x();
	 void y(); void z(); void cho();
	 ~name(){i=1;}
};
int name ::choice()
{ int C='0',i,j,k=0,p=1;
 while(1)
{if(C==13){break;}
 clrscr();
 cout<<"\n\nDisplay mode...";j=wherey();
 if(C==48)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 gotoxy(4,j+3);cprintf("3.Down flow ");
 gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 gotoxy(4,j+7);cprintf("7.Exit");
 }
 if(C==49)
 {if(p==1)
  {textbackground(k+7); textcolor(k);gotoxy(4,j+1); cprintf("1.Simple");
  textbackground(k); textcolor(k+7);
  gotoxy(4,j+2);cprintf("2.Flow \n");
  gotoxy(4,j+3);cprintf("3.Down flow \n");
  gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
  gotoxy(4,j+7);cprintf("7.Exit\n");
  }
  if(p==2)
   {gotoxy(4,j+1); cprintf("1.Simple");
 textbackground(k+7); textcolor(k); gotoxy(4,j+2);cprintf("2.Flow ");
 textbackground(k); textcolor(k+7);
 gotoxy(4,j+3);cprintf("3.Down flow ");
 gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 gotoxy(4,j+7);cprintf("7.Exit");
  }
  if(p==3)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 textbackground(k+7); textcolor(k);gotoxy(4,j+3);cprintf("3.Down flow ");
 textbackground(k); textcolor(k+7);
 gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 gotoxy(4,j+7);cprintf("7.Exit");
 }
 if(p==4)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 gotoxy(4,j+3);cprintf("3.Down flow ");
 textbackground(k+7);textcolor(k);gotoxy(4,j+4);cprintf("4.Simple color");
 textbackground(k); textcolor(k+7);
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 gotoxy(4,j+7);cprintf("7.Exit");
 }
 if(p==5)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 gotoxy(4,j+3);cprintf("3.Down flow ");
 gotoxy(4,j+4);cprintf("4.Simple color");
 textbackground(k+7);textcolor(k);gotoxy(4,j+5);cprintf("5.Color Flow");
 textbackground(k); textcolor(k+7);
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 gotoxy(4,j+7);cprintf("7.Exit");
 }
 if(p==6)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 gotoxy(4,j+3);cprintf("3.Down flow ");
 gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 textbackground(k+7);textcolor(k);gotoxy(4,j+6);cprintf("6.Color Down flow");
 textbackground(k); textcolor(k+7);
 gotoxy(4,j+7);cprintf("7.Exit");
 }
 if(p==7)
 {gotoxy(4,j+1); cprintf("1.Simple");
 gotoxy(4,j+2);cprintf("2.Flow ");
 gotoxy(4,j+3);cprintf("3.Down flow ");
 gotoxy(4,j+4);cprintf("4.Simple color");
 gotoxy(4,j+5);cprintf("5.Color Flow");
 gotoxy(4,j+6);cprintf("6.Color Down flow");
 textbackground(k+7);textcolor(k);gotoxy(4,j+7);cprintf("7.Exit");
 textbackground(k); textcolor(k+7);
 }
 p++;
 if(p>8){ p=1;}
}
i=getch(); C=i;
}
getch(); return(p-1);
}
void name::design()
{if((ch==2)||(ch==1)||(ch==5)){i=S-1; S++; j=3;}
 if((ch==3)||(ch==6)){i=2; j=T-1; T++;}
  for(int k=0;k<len;k++)
  { if(name1[k]==' ')
	{j=j+7; if(ch==2) i=S-1; else i=2;}
    if(name1[k]=='A') a();
    if(name1[k]=='B') b();
    if(name1[k]=='C') c();
    if(name1[k]=='D') d();
    if(name1[k]=='E') e();
    if(name1[k]=='F') f();
    if(name1[k]=='G') g();
    if(name1[k]=='H') h();
    if(name1[k]=='I') I();
    if(name1[k]=='J') J();
    if(name1[k]=='K') K();
    if(name1[k]=='L') l();
    if(name1[k]=='M') m();
    if(name1[k]=='N') n();
    if(name1[k]=='O') o();
    if(name1[k]=='P') p();
    if(name1[k]=='Q') q();
    if(name1[k]=='R') r();
    if(name1[k]=='S') s();
    if(name1[k]=='T') t();
    if(name1[k]=='U') u();
    if(name1[k]=='V') v();
    if(name1[k]=='W') w();
    if(name1[k]=='X') x();
    if(name1[k]=='Y') y();
    if(name1[k]=='Z') z();
  }
}
void name::a()
{gotoxy(i,j);   cprintf("   ##   ");
 gotoxy(i,j+1); cprintf("  ####  ");
 gotoxy(i,j+2); cprintf(" ##  ## ");
 gotoxy(i,j+3); cprintf("########");
 gotoxy(i,j+4); cprintf("##    ##");
 i=i+10;
}
void name::b()
{gotoxy(i,j);   cprintf("#####  ");
 gotoxy(i,j+1); cprintf("##  ## ");
 gotoxy(i,j+2); cprintf("#####  ");
 gotoxy(i,j+3); cprintf("##  ## ");
 gotoxy(i,j+4); cprintf("#####  ");
 i=i+8;
}
void name::c()
{gotoxy(i,j);   cprintf(" #####");
 gotoxy(i,j+1); cprintf("##    ");
 gotoxy(i,j+2); cprintf("##    ");
 gotoxy(i,j+3); cprintf("##    ");
 gotoxy(i,j+4); cprintf(" #####");
 i=i+8;
}
void name::d()
{gotoxy(i,j);   cprintf("##### ");
 gotoxy(i,j+1); cprintf("##  ##");
 gotoxy(i,j+2); cprintf("##  ##");
 gotoxy(i,j+3); cprintf("##  ##");
 gotoxy(i,j+4); cprintf("##### ");
 i=i+8;
}
void name::e()
{gotoxy(i,j);   cprintf("######");
 gotoxy(i,j+1); cprintf("##   #");
 gotoxy(i,j+2); cprintf("####  ");
 gotoxy(i,j+3); cprintf("##   #");
 gotoxy(i,j+4), cprintf("######");
 i=i+8;
}
void name::f()
{gotoxy(i,j);   cprintf("######");
 gotoxy(i,j+1); cprintf("##    ");
 gotoxy(i,j+2); cprintf("##### ");
 gotoxy(i,j+3); cprintf("##    ");
 gotoxy(i,j+4); cprintf("##    ");
 i=i+8;
}
void name::g()
{gotoxy(i,j);   cprintf(" ##### ");
 gotoxy(i,j+1); cprintf("##     ");
 gotoxy(i,j+2); cprintf("##  ###");
 gotoxy(i,j+3); cprintf("##   ##");
 gotoxy(i,j+4); cprintf(" ##### ");
 i=i+9;
}
void name::h()
{gotoxy(i,j);   cprintf("##   ##");
 gotoxy(i,j+1); cprintf("##   ##");
 gotoxy(i,j+2); cprintf("#######");
 gotoxy(i,j+3); cprintf("##   ##");
 gotoxy(i,j+4); cprintf("##   ##");
 i=i+9;
}
void name:: I()
{gotoxy(i,j);   cprintf("####");
 gotoxy(i,j+1); cprintf(" ## ");
 gotoxy(i,j+2); cprintf(" ## ");
 gotoxy(i,j+3); cprintf(" ## ");
 gotoxy(i,j+4); cprintf("####");
 i=i+6;
}
void name::J()
{gotoxy(i,j);   cprintf("  ####");
 gotoxy(i,j+1); cprintf("   ## ");
 gotoxy(i,j+2); cprintf("   ## ");
 gotoxy(i,j+3); cprintf("## ## ");
 gotoxy(i,j+4); cprintf(" #### ");
 i=i+8;
}
void name::K()
{gotoxy(i,j);   cprintf("##  ###");
 gotoxy(i,j+1); cprintf("## ##  ");
 gotoxy(i,j+2); cprintf("###    ");
 gotoxy(i,j+3); cprintf("## ##  ");
 gotoxy(i,j+4); cprintf("##  ###");
 i=i+9;
}
void name::l()
{gotoxy(i,j);   cprintf("##    ");
 gotoxy(i,j+1); cprintf("##    ");
 gotoxy(i,j+2); cprintf("##    ");
 gotoxy(i,j+3); cprintf("##    ");
 gotoxy(i,j+4); cprintf("######");
 i=i+8;
}
void name::m()
{  gotoxy(i,j);  cprintf("##     ##");
 gotoxy(i,j+1);  cprintf("###   ###");
 gotoxy(i,j+2);  cprintf("## # # ##");
 gotoxy(i,j+3);  cprintf("##  #  ##");
 gotoxy(i,j+4);  cprintf("##     ##");
 i=i+11;
}
void name::n()
{gotoxy(i,j);   cprintf("##     ##");
 gotoxy(i,j+1); cprintf("####   ##");
 gotoxy(i,j+2); cprintf("## ##  ##");
 gotoxy(i,j+3); cprintf("##   ####");
 gotoxy(i,j+4); cprintf("##    ###");
 i=i+11;
}
void name::o()
{gotoxy(i,j);   cprintf(" #### ");
 gotoxy(i,j+1); cprintf("##  ##");
 gotoxy(i,j+2); cprintf("##  ##");
 gotoxy(i,j+3); cprintf("##  ##");
 gotoxy(i,j+4); cprintf(" #### ");
 i=i+8;
}
void name::p()
{gotoxy(i,j);   cprintf("######");
 gotoxy(i,j+1); cprintf("##   #");
 gotoxy(i,j+2); cprintf("######");
 gotoxy(i,j+3); cprintf("##    ");
 gotoxy(i,j+4); cprintf("##    ");
 i=i+8;
}
void name::q()
{gotoxy(i,j);   cprintf(" #####  ");
 gotoxy(i,j+1); cprintf("##   ## ");
 gotoxy(i,j+2); cprintf("##   ## ");
 gotoxy(i,j+3); cprintf(" #####  ");
 gotoxy(i,j+4); cprintf("      ##");
 i=i+10;
}
void name::r()
{gotoxy(i,j);   cprintf("##### ");
 gotoxy(i,j+1); cprintf("##   #");
 gotoxy(i,j+2); cprintf("##### ");
 gotoxy(i,j+3); cprintf("## ## ");
 gotoxy(i,j+4); cprintf("##  ##");
 i=i+8;
}


void name::s()
{gotoxy(i,j);   cprintf("######");
 gotoxy(i,j+1); cprintf("##    ");
 gotoxy(i,j+2); cprintf("######");
 gotoxy(i,j+3); cprintf("    ##");
 gotoxy(i,j+4); cprintf("######");
 i=i+8;
}
void name::t()
{gotoxy(i,j);   cprintf("########");
 gotoxy(i,j+1); cprintf("   ##   ");
 gotoxy(i,j+2); cprintf("   ##   ");
 gotoxy(i,j+3); cprintf("   ##   ");
 gotoxy(i,j+4); cprintf("   ##   ");
 i=i+10;
}
void name::u()
{gotoxy(i,j);   cprintf("##    ##");
 gotoxy(i,j+1); cprintf("##    ##");
 gotoxy(i,j+2); cprintf("##    ##");
 gotoxy(i,j+3); cprintf("##    ##");
 gotoxy(i,j+4); cprintf(" ###### ");
 i=i+10;
}
void name::v()
{gotoxy(i,j);   cprintf("##    ##");
 gotoxy(i,j+1); cprintf("##    ##");
 gotoxy(i,j+2); cprintf("##    ##");
 gotoxy(i,j+3); cprintf(" ##  ## ");
 gotoxy(i,j+4); cprintf("   ##   ");
 i=i+10;
}
void name::w()
{gotoxy(i,j);   cprintf("##     ##");
 gotoxy(i,j+1); cprintf("##  #  ##");
 gotoxy(i,j+2); cprintf("## # # ##");
 gotoxy(i,j+3); cprintf("###   ###");
 gotoxy(i,j+4); cprintf("##     ##");
i=i+4;
}
void name::x()
{gotoxy(i,j);   cprintf("##    ##");
 gotoxy(i,j+1); cprintf(" ##  ## ");
 gotoxy(i,j+2); cprintf("   ##   ");
 gotoxy(i,j+3); cprintf(" ##  ## ");
 gotoxy(i,j+4); cprintf("##    ##");
 i=i+10;
}
void name::y()
{gotoxy(i,j);   cprintf("##    ##");
 gotoxy(i,j+1); cprintf(" ##  ## ");
 gotoxy(i,j+2); cprintf("   ##   ");
 gotoxy(i,j+3); cprintf("   ##   ");
 gotoxy(i,j+4); cprintf("   ##   ");
 i=i+10;
}
void name::z()
{gotoxy(i,j);   cprintf("#######");
 gotoxy(i,j+1); cprintf("    ## ");
 gotoxy(i,j+2); cprintf("   #   ");
 gotoxy(i,j+3); cprintf(" ##    ");
 gotoxy(i,j+4); cprintf("#######");
 i=i+9;
}


void main()
{clrscr();
 name m1;
 getch();
 while(1)
{clrscr();
 textcolor(7);
 int X=1;
 m1.ch=m1.choice();
 clrscr();
 if(m1.ch==1)
  {m1.design(); getch();}
 if(m1.ch==2)
    {for(int A=0;A<79;A++)
      {clrscr();
       if(m1.i>=77)
       { m1.design(); getch();
	  break;}
       else
	{m1.design();
	 m1.time(1);m1.time(1); m1.time(1);  }
  }}
if(m1.ch==3)
 {for(int A=0;A<30;A++)
 {clrscr();
 if(m1.j>=17)
  { m1.design(); getch();
   break;}
 else
  {m1.design();
  m1.time(1);m1.time(1); m1.time(1);
  } }
 }
  if(m1.ch==4)
  {for(X=0;X<200;X++)
   {textcolor(X); m1.design(); m1.time(1);
    m1.i=2; m1.j=3; m1.T=2; m1.S=2;
   }textcolor(7);
   getch();
   }
 if(m1.ch==5)
    {for(int A=0;A<79;A++)
      {clrscr();textcolor(X);
       if(m1.i>=77)
       { m1.design(); getch();
	  break;}
       else
	{m1.design();
	 m1.time(1);m1.time(1);  } X++;
  }textcolor(7);
  }
if(m1.ch==6)
 {for(int A=0;A<30;A++)
 {clrscr();textcolor(X);
 if(m1.j>=17)
  { m1.design(); getch();
   break;}
 else
  {m1.design();
  m1.time(1); m1.time(1);
  }X++; }
  textcolor(7);
 }
 if(m1.ch==7)
 {exit(0);}
 getch();
 clrscr();
 cout<<"\n\n\t  Press 1 to continue OR \n\t    Press 2 to exit=";
 cin>>m1.ch;
 if((m1.ch=='n')||(m1.ch==2))
  {exit(0);}
} textcolor(7);
 getch();
}