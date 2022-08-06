#include <stdio.h>
#include <stdlib.h>
struct student
{
    char country[50];
        float Neighty;
        float Neightyone;
        float Neightytwo;
        float Neightythree;
        float Neightyfour;
        float Neightyfive;
        float Neightysix;
        float Neightyseven;
        float Neightyeight;
        float Neightynine;
        float Nninety;
        float Nninetyone;
        float Nninetytwo;
        float Nninetythree;
        float Nninetyfour;
        float Nninetyfive;
        float Nninetysix;
        float Nninetyseven;
        float Nninetyeight;
        float Nninetynine;
        float two;
        float two1;
        float two2;
        float two3;
        float two4;
        float two5;        float two6;
        float two7;
        float two8;
    struct student *next;
} ;
struct node
{
    int data;
    struct student *next;
};
struct node s[5];
struct student *temp,*p,*temp1,*temp2;
int hkey;
int ch=1;
char k[100];
int x,y,z;
float z1;
FILE *fp;
struct node *getarray()
{
    int i;
    for(i=0;i<5;i++)
    {
        s[i].data=i;
        s[i].next=NULL;
    }

}
/*struct node *getnode()
{
    while(ch)
    {

    p=malloc(sizeof(struct student));
    printf("enter roll no,name,USN,sem\n");
    scanf("%d\n%s\n%s\n%d",&p->rno,p->name,p->usn,&p->sem);
    p->next=NULL;
    hkey=p->sem%3;
    temp1=temp=s[hkey].next;

    if(s[hkey].next==NULL)
    {
        s[hkey].next=p;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }
    printf("do you want to continue?(0/1)\n");
    scanf("%d",&ch);
}*/


void search()
{
    int y=0;
    ch=1;
    while(ch)
    {
        y=0;
    printf("enter country \n");
    scanf("%s",k);
    while(y<5)
    {
    temp1=s[y].next;
    if(temp1==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp1!=NULL)
    {
        if(strcmp(temp1->country,k)==0)
        {
        printf("electricity consumption in %s 1980-%f\n1981-%f\n1982-%f\n1983-%f\n1984-%f\n1985-%f\n1986-%f\n1987-%f\n1988-%f\n1989-%f\n1990-%f\n1991-%f\n1992-%f\n1993-%f\n1994-%f\n1995-%f\n1996-%f\n1997-%f\n1998-%f\n1999-%f\n2000-%f\n2001-%f\n2002-%f\n2003-%f\n2004-%f\n2005-%f\n2006-%f\n2007-%f\n2008-%f\n",temp1->country,temp1->Neighty,temp1->Neightyone,temp1->Neightytwo,temp1->Neightythree,temp1->Neightyfour,temp1->Neightyfive,temp1->Neightysix,temp1->Neightyseven,temp1->Neightyeight,temp1->Neightynine,temp1->two,temp1->two1,temp1->two2,temp1->two3,temp1->two4,temp1->two5,temp1->two6,temp1->two7,temp1->two8);
        break;
        }
        else
        temp1=temp1->next;
    }

}
y++;
}
printf("do you want to search again (1/0) \n");
scanf("%d",&ch);
if(ch==0)
    return(main());
}
}
void year()
{
    int y=0;
    ch=1;
    while(ch)
    {
    printf("enter year whose consumption should be displayed \n");
    scanf("%d",&z);
    switch(z)
    {
    case 1980:
        {
        y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neighty);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1981:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightyone);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1982:
        {


          y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightytwo);
        temp2=temp2->next;
    }

}
y++;
}
break;
    }
    case 1983:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neighty);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1984:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightyfour);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1985:
        {

          y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightyfive);
        temp2=temp2->next;
    }

}
y++;
}
break;
}
    case 1986:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightysix);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1987:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightyseven);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }

    case 1988:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightyeight);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1989:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Neightynine);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1990:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninety);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1991:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetyone);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1992:
        {
              y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetytwo);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1993:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetythree);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1994:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetyfour);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1995:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetyfive);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1996:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetysix);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1997:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetyseven);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1998:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetyeight);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 1999:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->Nninetynine);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2000:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2001:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two1);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2002:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two2);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2003:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two3);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2004:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two4);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2005:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two5);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2006:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two6);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2007:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two7);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    case 2008:
        {
            y=0;
        printf("the electricity consumption in the year %d is \n",z);
     while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {
    while(temp2!=NULL)
    {
        printf("country %s-%f\n ",temp2->country,temp2->two8);
        temp2=temp2->next;
    }

}
y++;
}
break;
        }
    default:
        printf("enter year between 1980 to 2008\n");
        return(year());
}
printf("do you want to search again(1/0)\n");
scanf("%d",&ch);
if(ch==0)
    return(main());
    }
}
void highestconsumpinyear()
{

    int i,j;
    int y=0;
    float high[5];
    float temp;
    int x;

    while(j)
    {

    printf("enter year whose highest consumption should be found \n");
    scanf("%d",&x);
    switch(x)
    {
        case 1980:
{
y=0;
    while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neighty;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neighty>high[y])
            high[y]=temp2->Neighty;
            temp2=temp2->next;
    }
    }
    y++;
    }

    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }

    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neighty==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
}
        case 1981:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightyone;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyone>high[y])
            high[y]=temp2->Neightyone;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyone==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1982:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightytwo;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightytwo>high[y])
            high[y]=temp2->Neightytwo;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightytwo==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1983:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightythree;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightythree>high[y])
            high[y]=temp2->Neightythree;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightythree==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1984:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightyfour;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfour>high[y])
            high[y]=temp2->Neightyfour;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfour==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1985:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightyfive;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfive>high[y])
            high[y]=temp2->Neightyfive;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfive==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1986:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightysix;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightysix>high[y])
            high[y]=temp2->Neightysix;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightysix==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1987:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightyseven;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyseven>high[y])
            high[y]=temp2->Neightyseven;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyseven==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1988:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightyeight;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyeight>high[y])
            high[y]=temp2->Neightyeight;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyeight==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1989:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Neightynine;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightynine>high[y])
            high[y]=temp2->Neightynine;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightynine==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1990:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninety;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninety>high[y])
            high[y]=temp2->Nninety;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninety==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1991:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetyone;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyone>high[y])
            high[y]=temp2->Nninetyone;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyone==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1992:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetytwo;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetytwo>high[y])
            high[y]=temp2->Nninetytwo;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetytwo==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1993:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetythree;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetythree>high[y])
            high[y]=temp2->Nninetythree;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetythree==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1994:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetyfour;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfour>high[y])
            high[y]=temp2->Nninetyfour;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfour==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1995:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetyfive;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfive>high[y])
            high[y]=temp2->Nninetyfive;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfive==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1996:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetysix;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetysix>high[y])
            high[y]=temp2->Nninetysix;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetysix==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1997:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetyseven;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyseven>high[y])
            high[y]=temp2->Nninetyseven;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyseven==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1998:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetyeight;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyeight>high[y])
            high[y]=temp2->Nninetyeight;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyeight==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 1999:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->Nninetynine;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetynine>high[y])
            high[y]=temp2->Nninetynine;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetynine==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2000:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two>high[y])
            high[y]=temp2->two;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2001:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two1;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two1>high[y])
            high[y]=temp2->two1;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two1==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2002:
            {
                y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two2;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two2>high[y])
            high[y]=temp2->two2;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two2==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2003:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two3;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two3>high[y])
            high[y]=temp2->two3;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two3==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2004:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two4;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two4>high[y])
            high[y]=temp2->two4;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two4==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2005:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two5;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two5>high[y])
            high[y]=temp2->two5;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two5==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2006:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two6;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two6>high[y])
            high[y]=temp2->two6;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];

    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two6==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2007:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two7;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two7>high[y])
            high[y]=temp2->two7;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two7==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        case 2008:
            {
                 y=0;
                while(y<5)
    {
    temp2=s[y].next;
    high[y]=temp2->two8;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two8>high[y])
            high[y]=temp2->two8;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=high[0];
    for(i=0;i<5;i++)
    {

        if(high[i]>temp)
            temp=high[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two8==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
    }
    break;
            }
        default:
            printf("enter year between 1980 to 2008 \n");
            return(highestconsumpinyear());
    }
    printf("\ndo you want to search again (1/0)\n");
    scanf("%d",&j);
    if(j==0)
        return(main());
    }

}
void lowestconsumpinyear()
{

    int y;
    int i;
    float low[5];
    float temp;
    int ch;
    int x=1;
    while(x)
    {
    printf("enter year whose lowest consumption to be displayed\n");
    scanf("%d",&ch);
    switch(ch)
    {
case 1980:
    {

    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neighty;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neighty<low[y])
            low[y]=temp2->Neighty;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neighty==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
}
case 1981:
    {
     y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightyone;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyone<low[y])
            low[y]=temp2->Neightyone;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyone==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1982:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightytwo;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightytwo<low[y])
            low[y]=temp2->Neightytwo;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightytwo==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1983:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightythree;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightythree<low[y])
            low[y]=temp2->Neightythree;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightythree==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1984:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightyfour;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfour<low[y])
            low[y]=temp2->Neightyfour;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfour==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1985:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightyfive;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfive<low[y])
            low[y]=temp2->Neightyfive;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyfive==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1986:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightysix;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightysix<low[y])
            low[y]=temp2->Neightysix;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightysix==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1987:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightyseven;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyseven<low[y])
            low[y]=temp2->Neightyseven;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyseven==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1988:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightyeight;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyeight<low[y])
            low[y]=temp2->Neightyeight;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightyeight==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1989:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Neightynine;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightynine<low[y])
            low[y]=temp2->Neightynine;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Neightynine==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1990:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninety;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninety<low[y])
            low[y]=temp2->Nninety;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninety==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1991:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetyone;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyone<low[y])
            low[y]=temp2->Nninetyone;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyone==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1992:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetytwo;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetytwo<low[y])
            low[y]=temp2->Nninetytwo;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetytwo==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1993:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetythree;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetythree<low[y])
            low[y]=temp2->Nninetythree;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetythree==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1995:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetyfive;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfive<low[y])
            low[y]=temp2->Nninetyfive;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyfive==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1996:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetysix;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetysix<low[y])
            low[y]=temp2->Nninetysix;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetysix==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1997:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetyseven;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyseven<low[y])
            low[y]=temp2->Nninetyseven;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyseven==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1998:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetyeight;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyeight<low[y])
            low[y]=temp2->Nninetyeight;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetyeight==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 1999:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->Nninetynine;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetynine<low[y])
            low[y]=temp2->Nninetynine;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->Nninetynine==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2000:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two<low[y])
            low[y]=temp2->two;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2001:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two1;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two1<low[y])
            low[y]=temp2->two1;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two1==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2002:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two2;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two2<low[y])
            low[y]=temp2->two2;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two2==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2003:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two3;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two3<low[y])
            low[y]=temp2->two3;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two3==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2004:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two4;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two4<low[y])
            low[y]=temp2->two4;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two4==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2005:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two5;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two5<low[y])
            low[y]=temp2->two5;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {


    while(temp2!=NULL)
    {


        if(temp2->two5==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2006:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two6;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two6<low[y])
            low[y]=temp2->two6;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {

        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else

    {

    while(temp2!=NULL)
    {


        if(temp2->two6==temp)
        {

            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2007:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two7;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(temp2->two7<low[y])
            low[y]=temp2->two7;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {
        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(temp2->two7==temp)
        {
            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
case 2008:
    {
        y=0;
    while(y<5)
    {
    temp2=s[y].next;
    low[y]=temp2->two8;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(temp2->two8<low[y])
            low[y]=temp2->two8;
            temp2=temp2->next;
    }
    }
    y++;
    }
    temp=low[0];
    for(i=0;i<5;i++)
    {
        if(low[i]<temp)
            temp=low[i];
    }
    printf("%f",temp);
    y=0;
    while(y<5)
    {
    temp2=s[y].next;
    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(temp2->two8==temp)
        {
            printf(" in country %s\n",temp2->country);
            break;
        }
        else
            temp2=temp2->next;
    }
    }
    y++;
}
break;
    }
default:
    printf("enter year from 1980 to 2008\n");
    return(lowestconsumpinyear());
    }
    printf("do you want to search again (1/0)\n");
    scanf("%d",&x);
    if(x==0)
        return(main());
    }
}
void analysis()
{

    float a[29];
    float b[29];
    int t[29];
    int y,i,x;
    char a1[50];
    char b1[50];

    float high1,high2;
    float low1,low2;

        y=0;
        printf("enter the names of 2 country whom u want to compare\n");
        scanf("%s%s",a1,b1);
    while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(strcmp(temp2->country,a1)==0)
        {

            a[0]=temp2->Neighty;
            a[1]=temp2->Neightyone;
            a[2]=temp2->Neightytwo;
            a[3]=temp2->Neightythree;
            a[4]=temp2->Neightyfour;
            a[5]=temp2->Neightyfive;
            a[6]=temp2->Neightysix;
            a[7]=temp2->Neightyseven;
            a[8]=temp2->Neightyeight;
            a[9]=temp2->Neightynine;
            a[10]=temp2->Nninety;
            a[11]=temp2->Neightyone;
             a[12]=temp2->Nninetytwo;
              a[13]=temp2->Nninetythree;
               a[14]=temp2->Nninetyfour;
                a[15]=temp2->Nninetyfive;
                 a[16]=temp2->Nninetysix;
                  a[17]=temp2->Nninetyseven;
                   a[18]=temp2->Nninetyeight;
             a[19]=temp2->Nninetynine;
              a[20]=temp2->two;
               a[21]=temp2->two1;
               a[22]=temp2->two2;
               a[23]=temp2->two3;
               a[24]=temp2->two4;
               a[25]=temp2->two5;
               a[26]=temp2->two6;
               a[27]=temp2->two7;
               a[28]=temp2->two8;
               break;
        }
        else
        {
            temp2=temp2->next;

        }
    }
    }
    y++;
    }
    y=0;
    while(y<5)
    {
    temp2=s[y].next;

    if(temp2==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp2!=NULL)
    {
        if(strcmp(temp2->country,b1)==0)
        {

            b[0]=temp2->Neighty;
            b[1]=temp2->Neightyone;
            b[2]=temp2->Neightytwo;
            b[3]=temp2->Neightythree;
            b[4]=temp2->Neightyfour;
            b[5]=temp2->Neightyfive;
            b[6]=temp2->Neightysix;
            b[7]=temp2->Neightyseven;
            b[8]=temp2->Neightyeight;
            b[9]=temp2->Neightynine;
            b[10]=temp2->Nninety;
            b[11]=temp2->Neightyone;
             b[12]=temp2->Nninetytwo;
              b[13]=temp2->Nninetythree;
               b[14]=temp2->Nninetyfour;

                b[15]=temp2->Nninetyfive;

                 b[16]=temp2->Nninetysix;

                  b[17]=temp2->Nninetyseven;

                   b[18]=temp2->Nninetyeight;
             b[19]=temp2->Nninetynine;
              b[20]=temp2->two;
               b[21]=temp2->two1;
               b[22]=temp2->two2;
               b[23]=temp2->two3;
               b[24]=temp2->two4;
               b[25]=temp2->two5;
               b[26]=temp2->two6;
               b[27]=temp2->two7;
               b[28]=temp2->two8;
               break;
        }
        else
        {
            temp2=temp2->next;
        }
    }
    }
    y++;
    }
    printf("electricity consumption in %s is\n",a1);
    for(x=0,i=1980;x<28,i<2009;x++,i++)
    {

        printf("%d=%f\n",i,a[x]);
    }
    printf("electricity consumption in %s is \n",b1);
    for(i=0,x=1980;i<28,x<2009;i++,x++)
    {

        printf("%d=%f\n",x,b[i]);
    }
    high1=a[0];
    for(i=0;i<28;i++)
    {
        if(a[i]>high1)
            high1=a[i];
    }
    printf("the highest consumption in %s is %fbtu\n",a1,high1);
    high2=b[0];
    for(i=0;i<28;i++)
    {
        if(b[i]>high2)
            high2=b[i];
    }
    printf("the highest consumption in %s is %fbtu\n\n",b1,high2);
    low1=a[0];
    for(i=0;i<28;i++)
    {
        if(a[i]<low1)
            low1=a[i];
    }
    printf("lowest consumption in %s is %fbtu \n",a1,low1);
    low2=b[0];
    for(i=0;i<28;i++)
    {
        if(b[i]<low2)
            low2=b[i];
    }
    printf("lowest consumption in %s is %fbtu \n\n",b1,low2);
    for(x=0,i=1980;x<28,i<2009;x++,i++)
    {
        t[x]=i;
    }
    if(high1>high2)
    {
        for(i=0;i<28;i++)
        {
            if(high1==a[i])
                break;
        }
         printf("country %s's highest consumption is %fbtu in %d year than country %s's highest consumption %fbtu\n",a1,high1,t[i],b1,high2);
         if((high1>0.0000)&&(high1<25.0000))
            {
                printf("the country %s has low electricity consumption and is under developed\n",a1);
            }
        else if((high1>25.0000)&&(high1<75.0000))
        {
            printf("the country %s has medium electricity consumption and is under development/developed\n",a1);
        }
        else if(high1>75.000)
        {
            printf("the country %s has high electricity consumption and is developed\n");
        }
        if((high2>0.0000)&&(high2<25.0000))
            {
                printf("the country %s has low electricity consumption and is under developed\n",b1);
            }
        else if((high2>25.0000)&&(high2<75.0000))
        {
            printf("the country %s has medium electricity consumption and is under development/developed\n",b1);
        }
        else if(high2>75.000)
        {
            printf("the country %s has high electricity consumption and is developed\n",b1);
        }
        }


    if(high2>high1)
    {
        for(i=0;i<28;i++)
    {
        if(high2==b[i])
            break;
    }
    printf("country %s's  highest consumption is %fbtu in %d year than country %s's highest consumption %fbtu\n",b1,high2,t[i],a1,high1);

    if((high1>0.0000)&&(high1<25.0000))
            {
                printf("the country %s has low electricity consumption and is under developed\n",a1);
            }
        else if((high1>25.0000)&&(high1<75.0000))
        {
            printf("the country %s has medium electricity consumption and is under development/developed\n",a1);
        }
        else if(high1>75.000)
        {
            printf("the country %s has high electricity consumption and is developed\n",a1);
        }
        if((high2>0.0000)&&(high2<25.0000))
            {
                printf("the country %s has low electricity consumption and is under developed\n",b1);
            }
        else if((high2>25.0000)&&(high2<75.0000))
        {
            printf("the country %s has medium electricity consumption and is under development/developed\n",b1);
        }
        else if(high2>75.000)
        {
            printf("the country %s has high electricity consumption and is developed\n",b1);
        }
    }
    }


    /*while(y<5)
    {
    temp1=s[y].next;
    if(temp1==NULL)
    {
        printf("no data\n");
    }
    else
    {
    while(temp1!=NULL)
    {
        if(strcmp(temp1->country,k)==0)
        {
        printf("electricity consumption in %s 1980-%f 1981-%f 1982-%f 1983-%f 1984-%f 1985-%f 1986-%f 1987-%f 1988-%f 1999-%f 2000-%f 2001-%f 2002-%f 2003-%f 2004-%f 2005-%f 2006-%f 2007-%f 2008-%f\n",temp1->country,temp1->Neighty,temp1->Neightyone,temp1->Neightytwo,temp1->Neightythree,temp1->Neightyfour,temp1->Neightyfive,temp1->Neightysix,temp1->Neightyseven,temp1->Neightyeight,temp1->Neightynine,temp1->two,temp1->two1,temp1->two2,temp1->two3,temp1->two4,temp1->two5,temp1->two6,temp1->two7,temp1->two8);
        break;
        }
        else
        temp1=temp1->next;
    }

}
y++;
}
}
}
*/
void extract()
{
    int i;
    int o;
    fp=fopen("ab.txt","r");
   while(!feof(fp))
    {
        p=malloc(sizeof(struct student));
        fscanf(fp,"%s%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f%f",p->country,&p->Neighty,&p->Neightyone,&p->Neightytwo,&p->Neightythree,&p->Neightyfour,&p->Neightyfive,&p->Neightysix,&p->Neightyseven,&p->Neightyeight,&p->Neightynine,&p->Nninety,&p->Nninetyone,&p->Nninetytwo,&p->Nninetythree,&p->Neightyfour,&p->Nninetyfive,&p->Nninetysix,&p->Nninetyseven,&p->Nninetyeight,&p->Nninetynine,&p->two,&p->two1,&p->two2,&p->two3,&p->two4,&p->two5,&p->two6,&p->two7,&p->two8);
        p->next=NULL;

    hkey=(int)p->country%5;
    temp1=temp=s[hkey].next;

    if(s[hkey].next==NULL)
    {
        s[hkey].next=p;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=p;
    }

    }
    fclose(fp);
}

void putnode()
{
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               }
int main()
{
    int d;
    getarray();
    extract();
    printf("Main menu\n1)enter country name \n2)enter year\n3)display highest consumption in given year\n4)display lowest consumption\n5)analysis between 2 countries electric consumption\n6)exit\nEnter your choice\n");
    scanf("%d",&d);
    switch(d)
    {
    case 1:
         search();
         break;
    case 2:
        year();
        break;
    case 3:
        highestconsumpinyear();
        break;
    case 4:
        lowestconsumpinyear();
        break;
    case 5:
        analysis();
        break;
    case 6:
        return;
        break;

    default:printf("enter proper choice\n");
            return(main());
    }
}

