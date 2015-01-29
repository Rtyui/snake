#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
union REGS *i,*o;
const char *borda = "borda.bmp";
const char *mancare = "egg.jpg";
const char *su = "head_up.bmp";
const char *joss = "head_down.bmp";
const char *st = "head_left.bmp";
const char *dreapt = "head_right.bmp";
const char *corp = "corpo.bmp";
//const char *black = "black.jpg";
#define max_x 500
#define max_y 500
void bars()
     {
            readimagefile(borda,40,40,460,50);
            readimagefile(borda,40,50,50,460);
            readimagefile(borda,50,450,460,460);
            readimagefile(borda,450,50,460,450);
            }
struct segment {
       int x;
       int y;
       };
void bulina(int &x,int &y)
{int c,i,j,a;
                     eticheta5:
                     x=rand()%339+51;
                     y=rand()%339+51;
                     for(i=x;i<=x+9;i++)
                     for(j=y;j<=y+9;j++)
                     {a=getpixel(i,j);
                     if(a!=0) goto eticheta5;}
                     readimagefile(mancare,x,y,x+9,y+9);
                     }
void sterge_bulina(int x,int y)
{int i,j;
     for(i=x;i<x+10;i++)
     for(j=y;j<y+10;j++)
     putpixel(i,j,0);
     }
void dreapta(int &n,int &s,struct segment v[],int &l,int &e,int &x,int &y,int ss,long &suma)
{ int a,i,j;
char c[20];
     while(!kbhit())
  { 
                 for(i=l;i>=1;i--)
                 {v[i].x=v[i-1].x;
                 v[i].y=v[i-1].y;}
                 v[0].x+=10;
                 if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
                 for(i=1;i<l;i++)
                 if(v[0].x==v[i].x&&v[0].y==v[i].y)
                 { 
                                                   e=0;
                                                   break;
                                                   }
                 if(e==0) break;
                 for(i=v[0].x;i<=v[0].x+9;i++)
                 for(j=v[0].y;j<=v[0].y+9;j++)
                 {
                                              a=getpixel(i,j);
                                              if(a!=0){
                                                       sterge_bulina(x,y);
                                                       bulina(x,y);
                                                       n++;
                                                       s=s-ss;
                                                       l++;
                                                       suma+=n*(61-s);
                                                       sprintf(c,"%d POINTS",suma);
                                                       outtextxy(200,0,c);
                                                       break;
                 }
                 }
                 readimagefile(corp,v[1].x,v[1].y,v[1].x+9,v[1].y+9);
                 for(i=v[l].x;i<v[l].x+10;i++)
                 for(j=v[l].y;j<v[l].y+10;j++)
                 putpixel(i,j,0);
                 readimagefile(dreapt,v[0].x,v[0].y,v[0].x+9,v[0].y+9);
                 delay(s);
                 
                 
  }
  
}
void sus(int &n,int &s,struct segment v[],int &l,int &e,int &x,int &y,int ss,long &suma)
{ int a,i,j;
char c[20];
     while(!kbhit())
  {              
                 for(i=l;i>=1;i--)
                 {v[i].x=v[i-1].x;
                 v[i].y=v[i-1].y;}
                 v[0].y-=10;
                 if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
                 for(i=1;i<l;i++)
                 if(v[0].x==v[i].x&&v[0].y==v[i].y)
                 { 
                                                   e=0;break;
                                                   }
                 if(e==0) break;
                 for(i=v[0].x;i<=v[0].x+9;i++)
                 for(j=v[0].y;j<=v[0].y+9;j++)
                 {
                                              a=getpixel(i,j);
                                              if(a!=0){
                                                       sterge_bulina(x,y);
                                                       bulina(x,y);
                                                       n++;
                                                       s=s-ss;
                                                       l++;
                                                       suma+=n*(61-s);
                                                       sprintf(c,"%d POINTS",suma);
                                                       outtextxy(200,0,c);
                                                       break;
                 }
                 }
                 readimagefile(corp,v[1].x,v[1].y,v[1].x+9,v[1].y+9);
                 for(i=v[l].x;i<v[l].x+10;i++)
                 for(j=v[l].y;j<v[l].y+10;j++)
                 putpixel(i,j,0);
                 readimagefile(su,v[0].x,v[0].y,v[0].x+9,v[0].y+9);
                 delay(s);
  }
  
}
void stanga(int &n,int &s,struct segment v[],int &l,int &e,int &x,int &y,int ss,long &suma)
{ int a,i,j;
char c[20];
     while(!kbhit())
  {              
                 for(i=l;i>=1;i--)
                 {v[i].x=v[i-1].x;
                 v[i].y=v[i-1].y;}
                 v[0].x-=10;
                 if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
                 for(i=1;i<l;i++)
                 if(v[0].x==v[i].x&&v[0].y==v[i].y)
                 { 
                                                   e=0;
                                                   break;
                                                   }
                 if(e==0) break;
                 for(i=v[0].x;i<=v[0].x+9;i++)
                 for(j=v[0].y;j<=v[0].y+9;j++)
                 {
                                              a=getpixel(i,j);
                                              if(a!=0){
                                                       sterge_bulina(x,y);
                                                       bulina(x,y);
                                                       n++;
                                                       s=s-ss;
                                                       l++;
                                                       suma+=n*(61-s);
                                                       sprintf(c,"%d POINTS",suma);
                                                       outtextxy(200,0,c);
                                                       break;
                 }
                 }
                 readimagefile(corp,v[1].x,v[1].y,v[1].x+9,v[1].y+9);
                 for(i=v[l].x;i<v[l].x+10;i++)
                 for(j=v[l].y;j<v[l].y+10;j++)
                 putpixel(i,j,0);
                 readimagefile(st,v[0].x,v[0].y,v[0].x+9,v[0].y+9);
                 delay(s);
  }
  
}
void jos(int &n,int &s,struct segment v[],int &l,int &e,int &x,int &y,int ss,long &suma)
{ int a,i,j;
char c[20];
     while(!kbhit())
  {              
                 for(i=l;i>=1;i--)
                 {v[i].x=v[i-1].x;
                 v[i].y=v[i-1].y;}
                 v[0].y+=10;
                 if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
                 for(i=1;i<l;i++)
                 if(v[0].x==v[i].x&&v[0].y==v[i].y)
                 { 
                                                   e=0;
                                                   break;
                                                   }
                 if(e==0) break;
                 for(i=v[0].x;i<=v[0].x+9;i++)
                 for(j=v[0].y;j<=v[0].y+9;j++)
                 {
                                              a=getpixel(i,j);
                                              if(a!=0){
                                                       sterge_bulina(x,y);
                                                       bulina(x,y);
                                                       n++;
                                                       s=s-ss;
                                                       l++;
                                                       suma+=n*(61-s);
                                                       sprintf(c,"%d POINTS",suma);
                                                       outtextxy(200,0,c);
                                                       break;
                 }
                 }
                 readimagefile(corp,v[1].x,v[1].y,v[1].x+9,v[1].y+9);
                 for(i=v[l].x;i<v[l].x+10;i++)
                 for(j=v[l].y;j<v[l].y+10;j++)
                 putpixel(i,j,0);
                 readimagefile(joss,v[0].x,v[0].y,v[0].x+9,v[0].y+9);
                 delay(s);
  }
  
}
int main()
{   int joaca=1;
    char scor[256];
    FILE *f;
    f=fopen("scoruri.txt","a");
    char nume[30],nume2[30];
    while(joaca){
    char a[20];
    //int gd=DETECT,gm;
    int i,n=0,s,l=1,e=1,c,x,y,dir,ss=0,mode;
    long suma=0,suma2;
    struct segment v[500];
    printf("ENTER YOUR NAME: ");
    scanf("%s",&nume);
    printf("\n");
    eticheta7:
    printf("ENTER YOUR GAME MODE(1=speed upgrade 2=speed selection): ");
    scanf("%d",&mode);
    printf("\n");
    if(mode!=1 && mode!=2) {
               printf("WRONG MODE\n"); 
               goto eticheta7;}
    else if(mode==1) {s=60;
    eticheta9:
    printf("ENTER YOUR SPEED UPGRADE(1-2): ");
    scanf("%d",&ss);
    if(ss!=1 && ss!=2) 
    {
             printf("WRONG UPGRADE\n");
             goto eticheta9;
             }
    goto eticheta8;
    }
    eticheta6:
    printf("ENTER SPEED(1-4): ");
    scanf("%d",&s);
    printf("\n");
    if(s!=1 && s!=2 && s!=3 && s!=4) {
            printf("YOU ENTERED A WRONG SPEED\n"); 
            goto eticheta6;
            }
    else if(s==1) s=60;
    else if(s==2) s=50;
    else if(s==3) s=40;
    else if(s==4) s=30;
    eticheta8:
    
    initwindow(max_x,max_y,"SNAKE");
    readimagefile(borda,0,0,500,500);
    v[0].x=250;
    v[0].y=250;
    outtextxy(200,250,"PRESS S TO START");
    eticheta4:
    c=getch();
    if(c!='s' &&c!='S') goto eticheta4;
    cleardevice();
    setcolor(5);
    bars();
    bulina(x,y); 
    dreapta(n,s,v,l,e,x,y,ss,suma);            
    while(1)
    {
    
    if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
    if(e==0) break;
    eticheta3:
    getch();
    c=getch();  
    if(c=='w' || c==72) {dir=1;sus(n,s,v,l,e,x,y,ss,suma);delay(1);}
    else if(c=='s' || c==80) {dir=2;jos(n,s,v,l,e,x,y,ss,suma);delay(1);}
    else {if (dir==3) {stanga(n,s,v,l,e,x,y,ss,suma);goto eticheta3;delay(1);}
          else if(dir==4) {dreapta(n,s,v,l,e,x,y,ss,suma);goto eticheta3;delay(1);}}
    
    if(v[0].x>=440 || v[0].x<=50 || v[0].y>=440 ||v[0].y<=50)
                 break;
    if(e==0) break;
    eticheta2:
    getch();      
    c=getch();
    if(c=='a' || c==75) {dir=3;stanga(n,s,v,l,e,x,y,ss,suma);delay(1);}
    else if(c=='d' || c==77) {dir=4;dreapta(n,s,v,l,e,x,y,ss,suma);delay(1);}
    else {if(dir==1) {sus(n,s,v,l,e,x,y,ss,suma); goto eticheta2;delay(1);}
          else if (dir==2) {jos(n,s,v,l,e,x,y,ss,suma); goto eticheta2;delay(1);}
          }
       
    }
    cleardevice();
    sprintf(a,"YOU LOST: %s. %d POINTS",nume,suma);
    outtextxy(200,250,a);
    fprintf(f,"%s %d",nume,suma);
    cleardevice();
    outtextxy(200,300,"DO YOU WANT TO SEE THE SCORES? Y/N");
    i=0;
    eticheta11:
    c=getch();
    if(c=='n' || c=='N');
    else if(c=='y' || c=='Y') {fclose(f);
    f=fopen("scoruri.txt","r");
         while(!feof(f)){
                           
                      fscanf(f,"%s",&nume);
                      fscanf(f,"%d",&suma);
                      sprintf(scor,"%s %d",nume,suma);
                      outtextxy(0,i,scor);
                      i+=15;}
                      outtextxy(200,250,"PRESS ANY KEY TO CONTINUE");
                      getch();
                      }
                      else goto eticheta11;
                      cleardevice();
    outtextxy(200,300,"DO YOU WANT TO TRY AGAIN? Y/N");
    eticheta:
    c=getch();
    if(c=='n' || c=='N') joaca=0;
    else if(c=='y' || c=='Y') joaca=1;
    else goto eticheta;
    closegraph();}
    fclose(f);
    return 0;
}
