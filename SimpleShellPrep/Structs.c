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
	/*declaring a struct*/
	struct address Lucky;
	struct address Griffin;

	/*Assignning values to the  sructure*/
	strcpy(Lucky.firstName, "Lucky");
	strcpy(Lucky.streetName, "Glyn Street");
	Lucky.longitude = 0.1253;
	Lucky.lattitude = 6.3266;

	strcpy(Griffin.firstName, "Lahquey");
        strcpy(Griffin.streetName, "Brooklyn Street");
        Griffin.longitude = 0.3653;
        Griffin.lattitude = 3.566;

	/*Display contacts of user whenfirst name is detailed */

	printf("Please enter first name of target person: \n");
	char name[20];
	scanf("%s", name);

	/*check if name exists in database and display details*/
	if (strcmp(Lucky.firstName,name)==0){
		/* Display details of Lucky*/
		printf("Name: %s\n",Lucky.firstName);
		printf("Street Name: %s\n", Lucky.streetName);
		printf("Location: %f %f \n", Lucky.longitude,Lucky.lattitude);
	}
	else if (strcmp(Griffin.firstName,name)==0){
                /* Display details of Lucky*/
                printf("Name: %s\n", Griffin.firstName);
                printf("Street Name: %s\n", Griffin.streetName);
                printf("Location: %f %f \n", Griffin.longitude,Griffin.lattitude);
	}

	else {
		printf("Target Does Not Exist in Database\n");
	}
}


	






