#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<windows.h>
#include<conio.h>
void winner();
typedef struct voter_information{
char id[10];
char name[20];
char birth_date[15];
char father_name[20];
char mother_name[20];
struct voter_information *next;
}node;
node *head;
int cunt1=0,cunt2=0,cunt3=0,cunt4=0,cunt5=0;
int main()
{
    system("cls");
    printf("\n\n\n");
    printf("\t      -------WELCOME TO ONLINE VOTING SYSTEM--\n\n\n\n");

printf("\t             ---********************************----\n\n\n");
printf("                 \t\t-------please enter one(1) for logging vote main loges---------\n\n\n");
int b;
scanf("%d",&b);
if(b==1){
    main_loges();
}
    return 0;
}
void main_loges(){
system("cls");

printf("\n\n\n");
printf("      \t\t\t\t1. FOR VOTE ENTRY  ------|||\n");
Sleep(300);
printf("      \t\t\t\t2. FOR ADMIN PANEL  -----|||\n");
Sleep(300);
printf("     \t\t\t\t3.  FOR WINNER       -----|||\n");
Sleep(300);
printf("     \t\t\t\t4.   FOR EXIT        ------|||\n\n\n\n");
printf("     \t- - - -After Voter Entry You can give your vote Otherwise you can Not------\n");
Sleep(500);
printf("   \t------------So Please Enter (1) ------------\n\n\n");
int t;
scanf("%d",&t);
if(t==1){
    voter_insert();
}
if(t==2){
    admin();
}
if(t==3){
    winner();
}
if(t==4){
    exi();
}
}

int cunt=0,count=0,r=3;
void voter_insert(){
node *temp;
char name[25],birth_date[15],f_name[25],m_name[25],id[10];
system("cls");
printf("\n\n\n\n");
printf("\tif national id,your name,birth date,your father name and mother name match you can give youur vote otherwise not\n\n");
Sleep(300);
printf("\t\t\tIF YOU DO WRONG (%d) times ,the programme will be stop automatically",r);
Sleep(300);
printf("\t\tplease----,\n");
Sleep(300);
printf("\t\t\t\tEnter tour national id number  ");
gets(id);
gets(id);
printf("\t\t\t\t enter your name       ");
gets(name);
printf("\t\t\t\tenter your birth date   ");
gets(birth_date);
printf("\t\t\t\tenter your father name   ");
gets(f_name);
printf("\t\t\t\tEnter your mother 's name  ");
gets(m_name);
temp=(node *)malloc(sizeof(node));
strcpy(temp->id,id);
strcpy(temp->name,name);
strcpy(temp->birth_date,birth_date);
strcpy(temp->father_name,f_name);
strcpy(temp->mother_name,m_name);
temp->next=NULL;
head=temp;
while(temp!=NULL){
 if(strcmp(temp->id,"10000001")==0 && strcmp(temp->name,"yogi")==0 && strcmp(temp->birth_date,"15-08-1947")==0 && strcmp(temp->father_name,"fuck")==0 && strcmp(temp->mother_name,"off")==0||
    strcmp(temp->id,"10000002")==0 && strcmp(temp->name,"vishal")==0 && strcmp(temp->birth_date,"15-07-1997")==0 && strcmp(temp->father_name,"aman")==0 && strcmp(temp->mother_name,"shagun")==0
    ||strcmp(temp->id,"10000003")==0 && strcmp(temp->name,"modi")==0 && strcmp(temp->birth_date,"15-08-1948")==0 && strcmp(temp->father_name,"chai")==0 && strcmp(temp->mother_name,"wala")==0
    ||strcmp(temp->id,"10000004")==0 && strcmp(temp->name,"ankit")==0 && strcmp(temp->birth_date,"15-08-1998")==0 && strcmp(temp->father_name,"abc")==0 && strcmp(temp->mother_name,"xyz")==0
    ||strcmp(temp->id,"10000005")==0 && strcmp(temp->name,"prem")==0 && strcmp(temp->birth_date,"30-11-2002")==0 && strcmp(temp->father_name,"bharat")==0 && strcmp(temp->mother_name,"geeta")==0||
    strcmp(temp->id,"10000006")==0 && strcmp(temp->name,"aman")==0 && strcmp(temp->birth_date,"08-07-1998")==0 && strcmp(temp->father_name,"bharat")==0 && strcmp(temp->mother_name,"geeta")==0)
    {
     cunt++;
     if(cunt>1){
        not_again();
        break;
     }
     voting();
    }
    else
    {
        r--;
        count++;
        if(count==3){
            stop();
            break;
        }
        printf("\n\n\n\n");
        printf("\t\tyou voter id or name or date of birth or father 's name is wrong\n\n");
        Sleep(300);
        printf("\t\t\t\t\tPlease re enter\n\n");
        Sleep(300);
        system("pause");
        main_loges();

        }
        temp=temp->next;
}
}
void voting(){
system("cls");
printf("\n\n\n\n");
printf("\t\t     * * * * * List of candidates * * * * *  \n\n\n");
Sleep(300);
printf("\t\t\t 1.Mia Khalifa             1.Banana\n");
Sleep(300);
printf("\t\t\t 2.Narendra modi            2.kamal\n");
Sleep(300);
printf("\t\t\t 3.Arvind kejriwal           3.jhadu\n");
Sleep(300);
printf("\t\t\t 4.Akhilesh yadav            4.cycle\n");
Sleep(300);
printf("\t\t\t 5.Rahul Gandhi              5.Haath\n");
int b,j;
printf("\t\t\tPlease--,\n");
printf("enter your Choice   ");
for(j=1;j<=1;j++){
 scanf("%d",&b);
 if(b==1){
    cunt1++;

 }
 if(b==2){
    cunt2++;
 }
 if(b==3){
    cunt3++;

 }
 if(b==4){
    cunt4++;
 }
 if(b==5){
    cunt5++;
 }
 if(b!=1&&b!=2&&b!=3&&b!=4&&b!=5){
    printf("\t\t\t Your Vote Is Invalid\n");
    main_loges();
 }


}
int r;
system("cls");
printf("\n\n\n\n");
printf("\t\t\t If You want to see present winner Enter one(1)  and two(2) for main loges");
scanf("%d",&r);
if(r==1){
    winner();
}
if(r!=1){
    main_loges();
}

}
void admin()
{
    int b;
    printf("\n\n\n\n");
    printf("\t\t\tEnter password to unlock admin panel\n\n");
    scanf("%d",&b);
    if(b==10715){
        show();
    }
    else{

        printf("Wrong Password\n");
    }

}
void show()
{
    system("cls");
    printf("\n\n\n");
    printf("\t\t\t   How many votes who get\n\n\n");
    Sleep(500);
    printf("\t\t\t Mia Khalifa got %d votes\n",cunt1);
    Sleep(500);
    printf("\t\t\t Narendra modi got %d votes\n",cunt2);
    Sleep(500);
    printf("\t\t\t Arvind kejriwal got %d votes\n",cunt3);
    Sleep(500);
    printf("\t\t\t Akhilesh Yadav   got %d  votes\n",cunt4);
    Sleep(500);
    printf("\t\t\t Rahul Gandhi   got   %d votes",cunt5);
int r;
printf("\t\t\t Enter one for (1) for loges or\n\n\n\t\t\t Zero(0) for Exit\n");
scanf("%d",&r);
if(r==1){
    main_loges();
}
else{
    exi();
}
}
void winner(){
system("cls");
printf("\n\n\n\n");
if(cunt2<cunt1&&cunt3<cunt1&&cunt4<cunt1&&cunt5<cunt1){
    printf("\t\tThe present Winner is Mia Khalifa sign(banana) and she got %d votes\n\n\n\n",cunt1);
    }
if(cunt1<cunt2&&cunt3<cunt2&&cunt4<cunt2&&cunt5<cunt2){
    printf("\t\t\tThe present winner is Narendra Modi sign(kamal) and he got %d votes\n\n\n\n",cunt2);}
if(cunt1<cunt3&&cunt2<cunt3&&cunt4<cunt3&&cunt5<cunt3){

printf("\t\t\tThe present winner is Arvind kejriwal sign(jhadu) and he got %d votes\n\n\n\n",cunt3);
}
if(cunt1<cunt4&&cunt2<cunt4&&cunt3<cunt4&&cunt5<cunt4){
    printf("\t\t\tThe present winner is Akhilesh Yadav sign(cycle) and he got %d votes\n\n\n\n",cunt4);
    }
if(cunt1<cunt5&&cunt2<cunt5&&cunt3<cunt5&&cunt4<cunt5){
    printf("\t\t\tThe present winner is Rahul gandhi sign(haath)and he got %d votes\n\n\n ",cunt5);
}
int t;
printf("\t\t\tEnter one(1) for main loges or\n\n\t\t\tZero(0) For Exit\n");
scanf("%d",&t);
if(t==1){
    main_loges();
}
if(t!=1){
    exi();
}

}
void stop(){
system("cls");
printf("\n\n\n");
printf("\t-------(:-Sorry You can not give your vote for your wrong entry three times-:)---\n\n\n");
Sleep(500);
printf("\t\t\t****----please try again after a few moment------******\n\n\n");
Sleep(500);
printf("\t\t\t\t******-----Thank You------******\n\n\n");
Sleep(500);
}
void not_again(){
    system("cls");
    printf("\n\n\n");
    printf("t\t-----------------YOu HAVE GIVE YOUR VOTE SUCCESSFULLY-------------\n\n");
    Sleep(300);
    printf("   \t\t-----------so,You can not give vote more than one(1) Time------\n\n\n");
    Sleep(300);
    printf("\t\t\t if you want to see present winner Enter one(1) Or \n\t\t\t\tor two(2) for main loges\n");
    Sleep(300);
    printf("\t\t\t\t Zero(0) for Exit\n\n");
    int r;
    scanf("%d",&r);
    if(r==1){
        winner();
    }
    if(r==2){
        main_loges();
    }
    if((r!=1)||(r!=2)){
        exi();
    }

}
void exi(){
system("cls");
printf("\n\n\n");
printf("\t\t----------@ You Give your vote Successfully@-------------\n\n\n");
Sleep(500);
printf("\t\t\t\t****----Thank You---******\n\n\n");
Sleep(500);
}
