#include <stdio.h>
#include <string.h>
struct Student
{
   char reg[20], name[50];
   float m1,m2,m3,total,per;
   char result[10];
};

int main()
{
   struct Student s[100];
   int ch,n=0,i,found;
   char search[20];
   FILE *fp;

   do
   {
      printf("\n\n1.Add Record");
      printf("\n2.Display Records");
      printf("\n3.Search Record");
      printf("\n4.Write File");
      printf("\n5.Read File");
      printf("\n6.Exit");

      printf("\nEnter choice: ");
      scanf("%d",&ch);

      switch(ch)
      {
        case 1:
            printf("Enter Reg No and Name: ");
            scanf("%19s %49s",s[n].reg,s[n].name);

            printf("Enter 3 marks: ");
            scanf("%f%f%f",&s[n].m1,&s[n].m2,&s[n].m3);
            s[n].total=s[n].m1+s[n].m2+s[n].m3;
            s[n].per=s[n].total/3;

            if(s[n].m1>=35 && s[n].m2>=35 && s[n].m3>=35)
                strcpy(s[n].result,"Pass");
            else
                strcpy(s[n].result,"Fail");

                n++;
                printf("Record added successfully");
                break;
        case 2:
            for(i=0;i<n;i++)
                printf("\n%s %s Total=%.2f Percentage=%.2f Result=%s",
                s[i].reg,s[i].name,s[i].total,s[i].per,s[i].result);
                break;
        case 3:
            printf("Enter Reg No: ");
            scanf("%19s",search);
            found=0;

            for(i=0;i<n;i++)
              if(strcmp(s[i].reg,search)==0)
              {
                printf("\nFound: %s %s Total=%.2f Result=%s",
                s[i].reg,s[i].name,s[i].total,s[i].result);
                found=1;
              }

            if(!found) printf("Record not found");
            break;

        case 4:
          fp=fopen("students.txt","w");

          if(fp==NULL)
          {
              printf("File opening failed");
              break;
          }

          for(i=0;i<n;i++)
               fprintf(fp,"%s %s %.2f %.2f %.2f %.2f %.2f %s\n",
               s[i].reg,s[i].name,s[i].m1,s[i].m2,s[i].m3,
               s[i].total,s[i].per,s[i].result);

          fclose(fp);
          printf("Recordssaved successfully");
          break;

        case 5:
          fp=fopen("students.txt","r");

          if(fp==NULL)
          {
             printf("File not found");
             break;
          }

          while(fscanf(fp,"%19s %49s %f %f %f %f %f %9s",
          s[0].reg,s[0].name,&s[0].m1,&s[0].m2,&s[0].m3,
          &s[0].total,&s[0].per,s[0].result)==8)
          {
             printf("\n%s %s Total=%.2f Percentage=%.2f Result=%s",
             s[0].reg,s[0].name,s[0].total,s[0].per,s[0].result);
          }

          fclose(fp);
          break;

        case 6:
          printf("Exiting program");
          break;

        default:
          printf("Invalid choice");
    }

  }while(ch!=6);

   return 0;
}
