//password is "password".
//entering wrong password for three times will exit the program.
//and then you cannot execute program again.
#include<process.h>
#include<dos.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>

class flts
{
  float flno,fr;
  int hh1,mm1,hh2,mm2;
  char s[20],d[20],airp1[70],airp2[70];
  public:
  void getd();
  void putd();
  float retf()
  {
    return(flno);
  }

  float retfr()
  {
    return(fr);
  }
  char* rets()
  {
    return(s);
  }
  char* retd()
  {
    return(d);
  }
  int rethh1()
  {
    return(hh1);
  }
  int rethh2()
  {
    return(hh2);
  }
  int retmm1()
  {
    return(mm1);
  }
  int retmm2()
  {
    return(mm2);
  }
};
void flts :: getd()
  {
    cout<<"\n\n\tEnter flight number : ";
    cin>>flno;
    cout<<"\n\n\tEnter Boarding city : ";
    gets(s);
    strlwr(s);
    if(!strcmp(s,"mumbai"))
    strcpy(airp1,"chhatrapati shivaji international airport");
    if(!strcmp(s,"delhi"))
    strcpy(airp1,"indira gandhi national airport");
    if(!strcmp(s,"chennai"))
    strcpy(airp1,"chennai airport");
    if(!strcmp(s,"ahmadabad"))
    strcpy(airp1,"ahmadabad airport");
    if(!strcmp(s,"bangalore"))
    strcpy(airp1,"bengaluru international airport");
    if(!strcmp(s,"pune"))
    strcpy(airp1,"lohegaon airport");
    if(!strcmp(s,"kolkata"))
    strcpy(airp1,"netaji subash chandra bose international airport");
   if(!strcmp(s,"chandigarh"))
   strcpy(airp1,"chandigarh airport");

    cout<<"\n\n\tEnter destination city : ";
    gets(d);
    strlwr(d);
    if(!strcmp(d,"mumbai"))
    strcpy(airp2,"chhatrapati shivaji international airport");
    if(!strcmp(d,"delhi"))
    strcpy(airp2,"indira gandhi national airport");
      if(!strcmp(d,"chennai"))
    strcpy(airp2,"chennai airport");
    if(!strcmp(d,"ahmadabad"))
    strcpy(airp2,"ahmadabad airport");
    if(!strcmp(d,"bangalore"))
    strcpy(airp2,"bengaluru international airport");
    if(!strcmp(d,"pune"))
    strcpy(airp2,"lohegaon airport");
    if(!strcmp(d,"kolkata"))
    strcpy(airp2,"netaji subash chandra bose international airport");
    if(!strcmp(d,"chandigarh"))
    strcpy(airp2,"chandigarh airport");
    cout<<"\n\n\tBoarding time  ";
    cout<<"\n\n\tEnter hour : ";
    cin>>hh1;
    cout<<"\n\n\tEnter minute : ";
    cin>>mm1;
    cout<<"\n\n\tDestination time  ";
    cout<<"\n\n\tEnter hour : ";
    cin>>hh2;
    cout<<"\n\n\tEnter minute : ";
    cin>>mm2;
    cout<<"\n\n\tEnter fair per person : ";
    cin>>fr;
  }
void flts :: putd()
{ gotoxy(5,15);
  cout<<"flight number : "<<flno;
  gotoxy(5,18);
  cout<<"Boarding city : "<<s;
  gotoxy(5,21);
  cout<<"Boarding airport : "<<airp1;
  gotoxy(5,24);
  cout<<"Destination city : "<<d;
  gotoxy(5,27);
  cout<<"Destination airport : "<<airp2;
  gotoxy(5,30);
  cout<<"Time duration(24 hrs) : from "<<hh1<<" : "<<mm1;
  if(!mm1)
  cout<<"0";
  cout<<" to "<<hh2<<" : "<<mm2;
  if(!mm2)
  cout<<"0";
  gotoxy(5,33);
  cout<<"Fair per person : ";
  gotoxy(5,36);
  cout<<"Economy class : Rs."<<fr;
  gotoxy(5,39);
  cout<<"First class : Rs."<<2*fr;
}
void box(int a,int b,int c,int d)
{
  for(int i=b;i<=d;i++)
  {
    gotoxy(a,i);
    cout<<"|";
    gotoxy(c,i);
    cout<<"|";
  }
    for(i=a;i<=c;i++)
  {
    gotoxy(i,b);
    cout<<"-";
    gotoxy(i,d);
    cout<<"-";
  }

}
void draw(int x,int y)
{  gotoxy(x,y);
   cout<<"<_____/__/_________________|";
   gotoxy(x+5,y+1);
   cout<<"/__/";
   gotoxy(x+1,y-1);
   cout<<"/     /  /                |";
   gotoxy(x+2,y-2);
   cout<<"/  o o o o o o o o o o   |";
   gotoxy(x+3,y-3);
   cout<<"_____________________/  |";
   gotoxy(x+9,y-4);
   cout<<"/  /            / |";
   gotoxy(x+10,y-5);
   cout<<"/  /            /|";
   gotoxy(x+11,y-6);
   cout<<"__";

}
class passtic
{
  char nm[12],ad[20],ch9,p[10][30],g[10][8],s1[20],d1[20],name[50],add[50],ct[20],st[20];
  int np,d,m,id,age[10],mm1,mm2,hh1,hh2;
  float fair,flno1;
  public:  void getdp(float);
	   void putdp();
	   void modf();
	   float retid()
	   {
	     return (id);
	   }

};
void passtic::modf()
{
   char ct1[20],ad1[12],nm1[20],st1[20],add1[50],name1[50];
   clrscr();
   gotoxy(3,5);
   cout<<"Enter your name(enter '.' to retain old one)";

   box(3,7,27,9);
   gotoxy(3,10);
   cout<<"Enter your permanent adress(enter '.' to retain old one)";
   box(3,12,45,14);

   gotoxy(3,17);
   cout<<"City(enter '.' to retain old one) : ";
   box(39,16,50,18);
   gotoxy(3,21);
   cout<<"State(enter '.' to retain old one) : ";
   box(40,20,51,22);
   gotoxy(4,8);
   gets(name1);
   if(strcmp(name1,"."))
     strcpy(name,name1);
   gotoxy(4,13);
   gets(add1);
   if(strcmp(add1,"."))
     strcpy(add,add1);
   gotoxy(40,17);
   gets(ct1);
   if(strcmp(ct1,"."))
     strcpy(ct,ct1);
   gotoxy(41,21);
   gets(st1);
   if(strcmp(st1,"."))
     strcpy(st,st1);
   clrscr();
   gotoxy(3,2);
   cout<<"Enter your contact number(+91)  (enter '.' to retain old one) : ";
   gets(nm1);
   if(strcmp(nm1,"."))
     strcpy(nm,nm1);
   gotoxy(3,4);
   cout<<"Date of journey (can't be changed.)";
   gotoxy(10,6);
   cout<<" DD     MM     YYYY ";
   gotoxy(10,7);
   cout<<"----   ----   ------";
   gotoxy(9,8);
   cout<<"|    | |    | | 2015 |";
   gotoxy(10,9);
   cout<<"----   ----   ------";
   gotoxy(11,8);
   cout<<d;
   gotoxy(18,8);
   cout<<m;
   gotoxy(3,12);
   cout<<"Enter your valid 12 digit Aadhaar number (enter '.' to retain old one)";
   box(3,14,16,16);
   gotoxy(4,15);
   gets(ad1);
   if(strcmp(ad1,"."))
     strcpy(ad,ad1);



   gotoxy(3,18);
   cout<<"Number of passengers(can't be changed) : "<<np;
   getch();

   clrscr();
   for(int i=0;i<np;i++)
   {
     for(int y=0;y<2*np+2;y++)
     {
       gotoxy(15,y+3);
       cout<<"|";
       gotoxy(30,y+3);
       cout<<"|";
       gotoxy(34,y+3);
       cout<<"|";
       gotoxy(46,y+3);
       cout<<"|";
       gotoxy(1,y+3);
       cout<<"|";
     }
     for(y=1;y<=46;y++)
     {
       gotoxy(y,3);
       cout<<"-";
       gotoxy(y,5);
       cout<<"-";
       gotoxy(y,2*np+5);
       cout<<"-";

     }
     gotoxy(16,4);
     cout<<"First name";
     gotoxy(31,4);
     cout<<"Age";
     gotoxy(35,4);
     cout<<"Gender(M/F)";
     gotoxy(2,2*i+6);
     cout<<"Passenger "<<i+1;
     gotoxy(16,2*i+6);
     gets(p[i]);
     gotoxy(31,2*i+6);
     cin>>age[i];
     gotoxy(35,2*i+6);
     gets(g[i]);
   }
   clrscr();
   gotoxy(15,5);
   cout<<"...Creating your ticket...";
   gotoxy(15,10);
   cout<<"|                        |";
   gotoxy(15,9);
   cout<<"--------------------------";
   gotoxy(15,11);
   cout<<"--------------------------";
   for(int z=0;z<24;z++)
   {
     gotoxy(16+z,10);
     cout<<char(219);
     delay(150);
   }

  clrscr();
  gotoxy(5,5);
  cout<<"Your I.D. is "<<id;
  gotoxy(5,8);
  cout<<"Your reservation is succesfully modified.";
  getch();
}
void modify()
{
  float p;
  int fl5=0;
  char ch5;
  clrscr();
  cout<<"\n\n\tEnter your reservation id : ";
  cin>>p;
  passtic ob;
  fstream file,ofile;
  file.open("pdetails.DAT",ios::in|ios::out|ios::binary);
  file.clear();
  long pos;
  while(!file.eof())
  { pos=file.tellg();
    file.read((char*)&ob,sizeof(ob));
    if(p==ob.retid())
     { fl5++;
       clrscr();
       ob.putdp();
       cout<<"\n\n\n\n\n\tDo you really want to modify your reservation : ";
       ch5=getch();
       if(ch5!='y'&&ch5!='Y')
       {

	 goto down;
       }
       else
       { clrscr();
	 ob.modf();

	 file.seekg(pos);
	 file.write((char*)&ob,sizeof(ob));
	 break;


       }
     }

  }
   if(!fl5)
   { clrscr();
     cout<<"\n\n\tSorry no reservation with this id.";
     getch();
   }
 down:
}
void passtic :: getdp(float f)
{

   clrscr();
   gotoxy(10,5);
   cout<<"Enter your name : ";
   box(28,4,45,6);

   gotoxy(10,10);
   cout<<"Enter your permanent adress ";
   box(10,13,45,15);

   gotoxy(10,20);
   cout<<"City : ";
   box(16,19,30,21);
   gotoxy(10,25);
   cout<<"State : ";
   box(18,24,36,26);
   gotoxy(29,5);
   gets(name);
   gotoxy(11,14);
   gets(add);
   gotoxy(17,20);
   gets(ct);
   gotoxy(19,25);
   gets(st);
   clrscr();
   np=1;
   gotoxy(10,5);
   cout<<"Enter your contact number(+91) : ";
   gets(nm);
   gotoxy(10,10);
   cout<<"Enter date of journey";
   gotoxy(10,12);
   cout<<" DD     MM     YYYY ";
   gotoxy(10,13);
   cout<<"----   ----   ------";
   gotoxy(9,14);
   cout<<"|    | |    | | 2015 |";
   gotoxy(10,15);
   cout<<"----   ----   ------";
   gotoxy(11,14);
   cin>>d;
   gotoxy(18,14);
   cin>>m;
   gotoxy(10,19);
   cout<<"Enter your valid 12 digit Aadhaar number ";
   box(10,21,23,23);
   gotoxy(11,22);
   gets(ad);
   w:

   gotoxy(10,25);
   cout<<"Enter number of passengers ";
   if(np>10||np<1)cout<<"again ";
   cout<<"(max. 10) :     ";
   cout<<"\b\b\b\b";

   cin>>np;
   if(np>10||np<1)
   { goto w;
   }
   clrscr();
   for(int i=0;i<np;i++)
   {
     for(int y=0;y<2*np+2;y++)
     {
       gotoxy(15,y+3);
       cout<<"|";
       gotoxy(30,y+3);
       cout<<"|";
       gotoxy(34,y+3);
       cout<<"|";
       gotoxy(46,y+3);
       cout<<"|";
       gotoxy(1,y+3);
       cout<<"|";
     }
     for(y=1;y<=46;y++)
     {
       gotoxy(y,3);
       cout<<"-";
       gotoxy(y,5);
       cout<<"-";
       gotoxy(y,2*np+5);
       cout<<"-";

     }
     gotoxy(16,4);
     cout<<"First name";
     gotoxy(31,4);
     cout<<"Age";
     gotoxy(35,4);
     cout<<"Gender(M/F)";
     gotoxy(2,2*i+6);
     cout<<"Passenger "<<i+1;
     gotoxy(16,2*i+6);
     gets(p[i]);
     gotoxy(31,2*i+6);
     cin>>age[i];
     gotoxy(35,2*i+6);
     gets(g[i]);
   }

   cout<<"\n\n\tWhich class would prefer";

   cout<<"\n\n\t(a)Economy class\t(b)First class ";
   ch9=getch();
   clrscr();
   gotoxy(15,5);
   cout<<"...Creating your ticket...";
   gotoxy(15,10);
   cout<<"|                        |";
   gotoxy(15,9);
   cout<<"--------------------------";
   gotoxy(15,11);
   cout<<"--------------------------";
   for(int z=0;z<24;z++)
   {
     gotoxy(16+z,10);
     cout<<char(219);
     delay(150);
   }


  fstream file;
  flts ob1;
  flno1=f;

  passtic ob;
  file.open("pdetails.DAT",ios::in|ios::binary);

  while(file.read((char*)&ob,sizeof(ob)));  //empty loop to get id of last element
  id=ob.retid()+1;
  file.close();

  file.open("fdetails.DAT",ios::in|ios::binary);
  while(file.read((char*)&ob1,sizeof(ob1)))
  {
  if(flno1==ob1.retf())
  {
    strcpy(s1,ob1.rets());
    strcpy(d1,ob1.retd());
    hh1=ob1.rethh1();
    hh2=ob1.rethh2();
    mm1=ob1.retmm1();
    mm2=ob1.retmm2();
    fair=ob1.retfr();
    break;
  }
}

if(ch9=='b')
  fair*=2;
  file.close();
  fair*=np;
  clrscr();
  clrscr();
  gotoxy(5,15);
  cout<<"Your I.D. is "<<id;
  getch();

}


void passtic :: putdp()
{


     for(int i=16;i<=(2*np)+18;++i)
   {
     gotoxy(14,i);
     cout<<"|";
     gotoxy(22,i);
     cout<<"|";
     gotoxy(28,i);
     cout<<"|";
   }
   if(np==1)
   {
     gotoxy(14,21);
     cout<<"|";
     gotoxy(14,22);
     cout<<"|";
     gotoxy(14,23);
     cout<<"|";
     gotoxy(22,21);
     cout<<"|";
     gotoxy(22,22);
     cout<<"|";
     gotoxy(22,23);
     cout<<"|";
     gotoxy(28,21);
     cout<<"|";
     gotoxy(28,22);
     cout<<"|";
     gotoxy(28,23);
     cout<<"|";
   }
   for(i=2;i<=6;i++)
   {
     gotoxy(9,i);
     cout<<"|";
     gotoxy(23,i);
     cout<<"|";
     gotoxy(33,i);
     cout<<"|";
   }
   for(i=1;i<=46;i++)
   {
     gotoxy(i,2);
     cout<<"-";
     gotoxy(i,4);
     cout<<"-";
     gotoxy(i,6);
     cout<<"-";

   }
    for(i=1;i<=28;i++)
    {
      gotoxy(i,15);
      cout<<"-";
      gotoxy(i,17);
      cout<<"-";
    }
   if(np<3)
     box(1,2,47,23);
   else
     box(1,2,47,2*np+18);
   gotoxy(2,3);
   cout<<"I.D.";
   gotoxy(10,3);
   cout<<"Flight number";
   gotoxy(24,3);
   cout<<"Date";
   gotoxy(34,3);
   cout<<"Passenger(s)";
   gotoxy(2,5);
   cout<<id;
   gotoxy(10,5);
   cout<<flno1;
   gotoxy(24,5);
   cout<<d<<"-"<<m<<"-"<<"2015";
   gotoxy(34,5);
   cout<<np;
   gotoxy(5,7);
   if(ch9=='a')  cout<<"Economy class";
   if(ch9=='b')  cout<<"First class";
   gotoxy(5,9);
   cout<<"Status : confirmed";
   gotoxy(2,16);
   cout<<"Name";
   gotoxy(15,16);
   cout<<"Gender";
   gotoxy(23,16);
   cout<<"Age";
   for(i=0;i<np;i++)
   {
     gotoxy(2,2*i+18);
     puts(p[i]);
     gotoxy(15,2*i+18);
     puts(g[i]);
     gotoxy(23,2*i+18);
     cout<<age[i];
   }
   gotoxy(30,16);
   cout<<"Fair : Rs."<<fair;
   gotoxy(5,11);
   cout<<"From : "<<s1<<" To : "<<d1;
   gotoxy(30,18);
   cout<<"SCH DEP : "<<hh1<<" : "<<mm1;
   if(!mm1)
   cout<<"0";
   gotoxy(30,20);
   cout<<"SCH ARR : "<<hh2<<" : "<<mm2;
   if(!mm2)
   cout<<"0";

 }

float choice()
{
   int i,j,k;
  i=5,j=26;
  char ch2;
  float temp,temp1;

    clrscr();
    gotoxy(5,5);
    cout<<"Use arrow keys to move and press 's' to select";
    getch();
  do
  {


    clrscr();
    gotoxy(5,15);
    cout<<"Choose source city";
    gotoxy(5,27);
    cout<<"mumbai";
    gotoxy(5,32);
    cout<<"delhi";
    gotoxy(18,27);
    cout<<"chennai";
    gotoxy(18,32);
    cout<<"ahmadabad";
    gotoxy(31,27);
    cout<<"bangalore";
    gotoxy(31,32);
    cout<<"pune";
    gotoxy(44,27);
    cout<<"kolkata";
    gotoxy(44,32);
    cout<<"chandigarh";
    if(i>=5&&i<=44&&j>=26&&j<=33)
    {
      gotoxy(i-1,j);
      cout<<"-----------";
      gotoxy(i-1,j+2);
      cout<<"-----------";
      gotoxy(i-2,j+1);
      cout<<"|";
      gotoxy(i+10,j+1);
      cout<<"|";
    }
    else
    {
      switch(ch2)
      {
	case 80:j-=5;
		break;
	case 72:j+=5;
		break;
	case 75:i+=13;
		break;
	case 77:i-=13;
		break;
      }
    gotoxy(i-1,j);
    cout<<"-----------";
    gotoxy(i-1,j+2);
    cout<<"-----------";
    gotoxy(i-2,j+1);
    cout<<"|";
    gotoxy(i+10,j+1);
    cout<<"|";


 }
    ch2=getch();
    switch(ch2)
    {
       case 80:j+=5;
	       break;
       case 72:j-=5;
	       break;
       case 75:i-=13;
	       break;
       case 77:i+=13;
	       break;
    }
   clrscr();
  }while(ch2!='s');
if(i==5&&j==26)
  temp=1000;

if(i==5&&j==31)
  temp=2000;


if(i==18&&j==26)
  temp=3000;


if(i==18&&j==31)
  temp=4000;

if(i==31&&j==26)
  temp=5000;

if(i==31&&j==31)
  temp=6000;

if(i==44&&j==26)
  temp=7000;

if(i==44&&j==31)
  temp=8000;



 i=5;
 j=26;
do
{
 up1:

 clrscr();
 gotoxy(5,15);
 cout<<"Choose destination city";
 gotoxy(5,27);
 cout<<"mumbai";
 gotoxy(5,32);
 cout<<"delhi";
 gotoxy(18,27);
 cout<<"chennai";
 gotoxy(18,32);
 cout<<"ahmadabad";
 gotoxy(31,27);
 cout<<"bangalore";
 gotoxy(31,32);
 cout<<"pune";
 gotoxy(44,27);
 cout<<"kolkata";
 gotoxy(44,32);
 cout<<"chandigarh";
 if(i>=5&&i<=44&&j>=26&&j<=33)
 {
 gotoxy(i-1,j);
 cout<<"-----------";
 gotoxy(i-1,j+2);
 cout<<"-----------";
 gotoxy(i-2,j+1);
 cout<<"|";
 gotoxy(i+10,j+1);
 cout<<"|";
 }
 else
 {
  switch(ch2)
 {
  case 80:j-=5;
	break;
  case 72:j+=5;
	break;
  case 75:i+=13;
	break;
  case 77:i-=13;
	break;
  }
   gotoxy(i-1,j);
 cout<<"-----------";
 gotoxy(i-1,j+2);
 cout<<"-----------";
 gotoxy(i-2,j+1);
 cout<<"|";
 gotoxy(i+10,j+1);
 cout<<"|";


 }
 ch2=getch();
 switch(ch2)
 {
  case 80:j+=5;
	break;
  case 72:j-=5;
	break;
  case 75:i-=13;
	break;
  case 77:i+=13;
	break;
 }
  clrscr();
}while(ch2!='s');
if(i==5&&j==26)
  temp1=10;

if(i==5&&j==31)
  temp1=20;


if(i==18&&j==26)
  temp1=30;


if(i==18&&j==31)
  temp1=40;

if(i==31&&j==26)
  temp1=50;

if(i==31&&j==31)
  temp1=60;

if(i==44&&j==26)
  temp1=70;

if(i==44&&j==31)
  temp1=80;
if(temp1==(temp/100))
{ clrscr();
  cout<<"\n\n\tERROR...You cannot select same city \n\n\tPress any key to select destination place again. ";
  getch();
  clrscr();
  goto up1;
}
   temp+=temp1;
   clrscr();
  return(temp);
}
void bktic()
{
  clrscr();

  char ch3;
  flts ob;
  float q;
  q=choice();
fstream ofile;
ofile.open("fdetails.DAT",ios::in|ios::binary);
while(ofile.read((char*)&ob,sizeof(ob)))
{

if(ob.retf()==q)
{
  gotoxy(15,10);
  cout<<"Flight details ";
  ob.putd();
  cout<<"\n\n\n\n\t\tDo you wish to book ticket(y/n) ";
  ch3=getch();
  clrscr();
  break;

}

}
ofile.close();
if(ch3=='y'||ch3=='Y')
{
  fstream ifile;
  passtic ob2;
  ob2.getdp(q);
  ifile.open("pdetails.DAT",ios::out|ios::app|ios::binary);
  ifile.write((char*)&ob2,sizeof(ob2));
  ob2.putdp();
  getch();
  ifile.close();
}
  for(int z=40;z>=10;z--)
  {
    clrscr();
    draw(z,10);
    draw(z,40);
    delay(50);
  }
  for(z=1;z<=20;z++)
  { clrscr();
    draw(10,10);
    draw(10,40);
    gotoxy(z,30);
    cout<<"Happy";
    gotoxy(46-z,30);
    cout<<"Journey";
    delay(20);

  }
  getch();
}

void searchf()
{ float flno2;
  fstream file;
  flts ob;
  char ch;
  u:
  clrscr();
  cout<<"\n\n\tDo you wish to\n\n\t(a)Enter flight number\n\n\t(b)choose source and destination";
  ch=getch();
  switch(ch)
  {
  case 'a':
	   cout<<"\n\n\tEnter flight number you want to search : ";
	   cin>>flno2;
	   break;
  case 'b':clrscr();
	   flno2=choice();
	   break;
  default :cout<<"\n\n\tWrong choice...Enter again";
	   getch();
	   goto u;
  }
  file.open("fdetails.DAT",ios::in|ios::binary);
  int fl=0;
  while(file.read((char*)&ob,sizeof(ob)))
  {
    if(ob.retf()==flno2)
    {  fl++;
    clrscr();
    ob.putd();
    getch();
    break;
    }
  }
  if(!fl)
  {
    cout<<"\n\n\tSorry flight not found.";
    getch();
  }
file.close();
}

void seerd()
{
  passtic ob;
  fstream file;
  file.open("pdetails.DAT",ios::in|ios::binary);
  float id1;
  clrscr();
  cout<<"\n\n\tEnter your reservation id : ";
  cin>>id1;
  clrscr();
  int fl=0;
  while(file.read((char*)&ob,sizeof(ob)))
  { if(ob.retid()==id1)
    {
      ob.putdp();
      getch();
      fl++;
      break;
    }
  }
  file.close();
  if(fl==0)
  {
    cout<<"\n\n\tSorry no reservations with this id. ";
    getch();
  }
}
void cancel()
{ float x;
  int fl=0;
  char ch;
  clrscr();
  cout<<"\n\n\tEnter your reservation id : ";
  cin>>x;
  passtic ob;
  fstream file,ofile;
  file.open("pdetails.DAT",ios::in|ios::binary);
  ofile.open("temp.DAT",ios::out|ios::binary);
  while(file.read((char*)&ob,sizeof(ob)))
  { if(x==ob.retid())
     { fl++;
       clrscr();
       ob.putdp();
       cout<<"\n\n\n\n\tDo you really want to cancel your reservation : ";
       ch=getch();
       if(ch!='y'&&ch!='Y')
       {
	 ofile.write((char*)&ob,sizeof(ob));
       }
       else
       {
	 clrscr();
	 gotoxy(15,5);
	 cout<<"...Cancelling your ticket...";
	 gotoxy(15,10);
	 cout<<"|                        |";
	 gotoxy(15,9);
	 cout<<"--------------------------";
	 gotoxy(15,11);
	 cout<<"--------------------------";
	 for(int z=0;z<24;z++)
	 {
	   gotoxy(16+z,10);
	   cout<<char(219);
	   delay(150);
	 }



	 clrscr();
	 cout<<"\n\n\tReservation succesfully cancelled.";
	 cout<<"\n\n\tPress any key to go back to main menu.";
	 getch();
       }
     }
     else
     {
       ofile.write((char*)&ob,sizeof(ob));
     }
  }
  file.close();
  ofile.close();
  remove("pdetails.DAT");
  rename("temp.DAT","pdetails.DAT");
   if(!fl)
   { clrscr();
     cout<<"\n\n\tSorry no reservations with this id.";
     getch();
   }
}
void about()
{ clrscr();
  gotoxy(10,15);
  delay(200);
  cout<<"C++ ";
  delay(200);
  cout<<"project ";
  delay(200);
  cout<<"on ";
  delay(200);
  cout<<"flight ";
  delay(200);
  cout<<"ticket ";
  delay(200);
  cout<<"booking ";
  delay(200);
  cout<<"system. ";

  gotoxy(10,18);
  delay(200);
  cout<<"Created ";
  delay(200);
  cout<<"by : ";
  delay(200);
  cout<<"Salil ";
  delay(200);
  cout<<"Jain";
  gotoxy(10,21);
  delay(200);
  cout<<"Guided ";
  delay(200);
  cout<<"by : ";
  delay(200);
  cout<<"Miss ";
  delay(200);
  cout<<"Shruti ";
  delay(200);
  cout<<"Deshpandey";
  delay(200);
  gotoxy(10,24);
  delay(200);
  cout<<"Class : ";
  delay(200);
  cout<<"XII , 'B'";
  delay(200);
  gotoxy(10,27);
  cout<<"Press any key to go back to main menu.";
  getch();
}
void show()
{
 for(int r=45;r>=20;r--)
{
 gotoxy(35,r);
 cout<<"Thank you";
 delay(75);
 clrscr();
}
gotoxy(35,22);
cout<<"Visit again";
delay(1000);
}
void main()
{ fstream file;

  file.open("pword.txt",ios::in);
  char s[12],p[12];
  file.getline(s,10);
  file.close();
  file.open("sample.txt",ios::in);
  char y1;
  file.get(y1);
  if(y1=='b')
  { clrscr();
    cout<<"Sorry...you can't open this program as the\n\nwrong password was entered three times.";
    getch();
    exit(0);
  }
  file.close();
  file.open("sample.txt",ios::out);
  char q='a';
  file.put(q);
  file.close();
  int d=0,i=0;
  upp:
  clrscr();
  if(d==3)
  { file.open("sample.txt",ios::out);
    q='b';
    file.put(q);
    file.close();
    cout<<"\n\n\tYou entered password three times wrong.";
    cout<<"program will exit in : ";
    for(i=5;i>0;i--)
     { cout<<i;
       delay(500);
       cout<<"\b";
     }
    exit(0);
  }
  if(d==1)
  {
    gotoxy(5,6);
    cout<<"Only 2 attempts are left.";
  }
  if(d==2)
  {
    gotoxy(5,6);
    cout<<"Only 1 attempt is left.";
  }

  gotoxy(5,10);
  cout<<"Enter password : ";
  for(i=0;s[i]!='\0';i++)
  {
    p[i]=getch();
    cout<<"*";

  }
  getch();
  p[i]='\0';

  if(strcmp(s,p))
  { d++;
    clrscr();
    gotoxy(5,10);
    cout<<"You entered wrong password. ";
    getch();
    goto upp;
  }

  clrscr();
    int p5;
for(p5=1;p5<25;p5++)
{
 gotoxy(p5,25);
 cout<<"Welcome ";
 if(p5==1)
    sleep(1);
 gotoxy(32,p5+1);
 cout<<"To ";
 if(p5==1)
    sleep(1);
 gotoxy(59-p5,25);
 cout<<"SJ ";
 if(p5==1)
    sleep(1);
 gotoxy(38,49-p5);
 cout<<"Airways ";
 if(p5==1)
    sleep(1);
 delay(50);
 if(p5<24)
 clrscr();
}
  delay(1000);

  gotoxy(24,29);
  cout<<"press any key to start";
  getch();


  char ch4;
  while(1)
  { clrscr();

  gotoxy(20,15);
  cout<<"MAIN MENU";
  delay(50);
  gotoxy(15,17);
  cout<<"(a)Book tickets.";
  gotoxy(15,19);
  delay(50);
  cout<<"(b)Search flights.";
  gotoxy(15,21);
  delay(50);
  cout<<"(c)See your reservation details";
  gotoxy(15,23);
  delay(50);
  cout<<"(d)Modify your reservation";
  delay(50);
  gotoxy(15,25);
  cout<<"(e)Cancel your reservation";
  delay(50);
  gotoxy(15,27);
  cout<<"(f)About";
  delay(50);
  gotoxy(15,29);
  cout<<"(g)Exit.";
  delay(50);
  gotoxy(15,31);
  cout<<"Press appropriate choice button.";
  ch4=getch();

  switch(ch4)
  {
  case 'a':  bktic();
	     break;
  case 'b':  searchf();
	     break;
  case 'c':  seerd();
	     break;
  case 'd':  modify();
	     break;
  case 'e':  cancel();
	     break;
  case 'f':  about();
	     break;
  case 'g':  show();
	     exit(0);
	     break;
  }
}


}
