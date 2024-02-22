#include <stdio.h>
#include <string.h>

struct address{
        char streetName[20];
        char firstName[20];
        float longitude;
        float lattitude;
};

int main(void)
{
	struct address target[2];
	/*Assignning values to the  sructure*/
        strcpy(target[0].firstName, "Lucky");
        strcpy(target[0].streetName, "Glyn Street");
        target[0].longitude = 0.1253;
        target[0].lattitude = 6.3266;

        strcpy(target[1].firstName, "Lahquey");
        strcpy(target[1].streetName, "Brooklyn Street");
        target[1].longitude = 0.3653;
        target[1].lattitude = 3.566;

	/*Display contacts of user whenfirst name is detailed */

        printf("Please enter first name of target person: \n");
        char name[20];
        scanf("%s", name);

        /*check if name exists in database and display details*/
        if (strcmp(target[0].firstName,name)==0){
                /* Display details of Lucky*/
                printf("Name: %s\n",target[0].firstName);
                printf("Street Name: %s\n", target[0].streetName);
                printf("Location: %f %f \n", target[0].longitude,target[0].lattitude);
        }
	else if (strcmp(target[1].firstName,name)==0){
                /* Display details of Lucky*/
                printf("Name: %s\n", target[1].firstName);
                printf("Street Name: %s\n", target[1].streetName);
                printf("Location: %f %f \n", target[1].longitude,target[1].lattitude);
        }

        else {
                printf("Target Does Not Exist in Database\n");
        }
}
