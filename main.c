#include<stdio.h>

#include<stdlib.h>

#include<conio.h>

#include<string.h>
int main()


{
	login();

    int ch;
    printf("\n\n\t***********************************\n");
    printf("\t\t*PRISONER RECORD*\n");
    printf("\t***********************************");

    while(1)
    {

        printf("\n\n\t\tMAIN MENU:");
        printf("\n\n\tADD RECORD\t[1]");
        printf("\n\tSEARCH RECORD\t[2]");
        printf("\n\tEDIT RECORD\t[3]");
        printf("\n\tVIEW RECORD\t[4]");
		printf("\n\tDELETE RECORD\t[5]");
        printf("\n\tEXIT\t\t[6]");
        printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);

        switch(ch)
        {

        case 1:
            addrecord();
            break;

        case 2:
            searchrecord();
            break;

        case 3:
            editrecord();
            break;

        case 4:
            viewrecord();
            break;

        case 5:
            deleterecord();
            break;

        case 6:
        	system("cls");
            printf("\n\n\t\tTHANK YOU FOR USING THIS SOFTWARE \n\t\t THIS PROJECT IS BROUGHT TO YOU BY code-projects.org ");
            getch();
            exit(0);

        default:
            printf("\nYOU ENTERED WRONG CHOICE.");
            printf("\nPRESS ANY KEY TO TRY AGAIN");
            getch();
            break;

        }

        system("cls");

    }
    return 0;

}
