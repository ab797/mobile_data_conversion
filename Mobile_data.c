#include<stdio.h> //summa
int main() 
{ 
   float b,kb,mb,gb,tb; 
   int m,loop;
   printf("\n\t\t1))Welcome to my first conversation");
   printf("\n\t\n\t\tMOBILE DATA CONVERSATION\n");
   printf("\n\tEnter your mobile data");
   do{     
     abdulla:
   printf("\n\n1)byte value      = B "); 
   printf("\n2)kilo byte value = KB"); 
   printf("\n3)mega byte value = MB"); 
   printf("\n4)giga byte value = GB"); 
   printf("\n5)tira byte value = TB");
   printf("\n\nPress any number= ");
   scanf("%d",&m);
   if(m>5 || m<=0){
     printf("\t\nEnter correct value 1 to 5");
     goto abdulla;
   }
   switch (m){
     case 1:
       printf("\t\nYou select byte(B) value");
       printf("\n\nEnter the byte(B) value= ");
       scanf("%f", &b);
             b=b;
             kb=b/1024;
             mb=kb/1024;
             gb=mb/1024;
             tb=gb/1024;
            
       break;
     case 2:
       printf("\t\nYou select kilo byte(KB) value");
       printf("\n\nEnter the kilo byte(KB) value= ");
       scanf("%f", &kb);
             kb=kb;
             b=kb*1024;
             mb=kb/1024;
             gb=mb/1024;
             tb=gb/1024;
             
       break;
             
     case 3 :
       printf("\t\nYou select mega byte(MB) value");
       printf("\n\nEnter the mega byte(MB) value= ");
       scanf("%f", &mb);
             mb=mb;
             kb=mb*1024;
             b=kb*1024;
             gb=mb/1024;
             tb=gb/1024;
       
       break;
     case 4:
       printf("\n\tYou select giga byte(GB) value");
       printf("\n\nEnter the giga byte(GB) value= ");
       scanf("%f", &gb);
             gb=gb;
             mb=gb*1024;
             kb=mb*1024;
             b=kb*1024;
             tb=gb/1024; 
       break;
     case 5:
       printf("\n\tYou select tera byte(TB) value");
       printf("\n\nEnter the tera byte(TB) value= ");
       scanf("%f", &tb);
             tb=tb;
             gb=tb*1024;
             mb=gb*1024;
             kb=mb*1024;
             b=kb*1024;
          
       break;
     default :
       printf("\n\ninvalid input pls correct the input");
       break;           
    }
    
    printf("\n\nbyte value is      = %f B",b);
    printf("\nkilo byte value is = %f KB",kb);
    printf("\nmega byte value is = %f MB",mb);
    printf("\ngiga byte value is = %f GB",gb);
    printf("\ntera byte value is = %f TB",tb);   
    printf("\n\nDo you want continue press 1= ");
    scanf("%d",&loop);
   }while(loop==1);
   printf("\t\tTHANK YOU");
   return 0;
   }
     
     
       

