#include <stdio.h>

int main(){
	char n[50];
	int a,p,d;
	char add[50];
	
	char na[50];
	int ag,ph,da;
	char addr[50];
	
	printf("Welcome to phone book\n\n");
	
	printf("Menu\n");
	
	printf("Press 1 to add the contact\n\n");
	
	int x;
	printf("Enter\n");
	scanf("%d",&x);
	
	if(x==1){
		int y;
		printf("Enter the number of contact to be added :");
		scanf("%d",&y);
		
		if(y==1){
			printf("--------------------\n");
			printf("Name : ");
			scanf("%s",&n);
			printf("Age : ");
			scanf("%d",&a);
			printf("Phone number : ");
			scanf("%d",&p);
			printf("Date of birth : ");
			scanf("%s",&d);
			printf("Adress : ");
			scanf("%s",&add);
			printf("------------------- \n");
		}
		else if(y==2){
			printf("--------------------\n");
			printf("Name : ");
			scanf("%s",&n);
			printf("Age : ");
			scanf("%d",&a);
			printf("Phone number : ");
			scanf("%d",&p);
			printf("Date of birth : ");
			scanf("%s",&d);
			printf("Adress : ");
			scanf("%s",&add);
			printf("------------------- \n");
			
			printf("--------------------\n");
			printf("Name : ");
			scanf("%s",&na);
			printf("Age : ");
			scanf("%d",&ag);
			printf("Phone number : ");
			scanf("%d",&ph);
			printf("Date of birth : ");
			scanf("%s",&da);
			printf("Adress : ");
			scanf("%s",&addr);
			printf("------------------- \n");
		}
	printf("Press 2 to see the entered contact\n");
	printf("Press 3 to exit the phone book\n");
	
	int z;
	printf("Enter\n");
	scanf("%d",&z);
	
	if(z==2){
		int num;
		printf("Enter the number of contact to be view : ");
		scanf("%d",&num);
		
		if(num==1){
			printf("--------------------\n");
			printf("Name : ");
			printf("%s",n);
			printf("Age : ");
			printf("%d",a);
			printf("Phone number : ");
			printf("%d",p);
			printf("Date of birth : ");
			printf("%s",d);
			printf("Adress : ");
			printf("%s",add);
			printf("------------------- \n");
			}	
			else if(num==2){
					printf("--------------------\n");
				printf("Name : ");
				printf("%s",n);
				printf("Age : ");
				printf("%d",a);
				printf("Phone number : ");
				printf("%d",p);
				printf("Date of birth : ");
				printf("%s",d);
				printf("Adress : ");
				printf("%s",add);
				printf("------------------- \n");
			
				printf("--------------------\n");
				printf("Name : ");
				printf("%s",na);
				printf("Age : ");
				printf("%d",ag);
				printf("Phone number : ");
				printf("%d",ph);
				printf("Date of birth : ");
				printf("%s",da);
				printf("Adress : ");
				printf("%s",addr);
				printf("------------------- \n");
			}
		}
		else if(z==3){
			printf("Are you sure you want to close the phone book\n");
			printf("Press 1 for yes\n");
			printf("Press 2 for no\n");
			
			int ans;
			printf("Enter\n");
			scanf("%d",&ans);
			
			if(ans==1)
			{
				printf("The phone book has closed\n");
				printf("Have a good day\n");
			}
			else if(ans==2){
				printf("The phone book has not closed\n");
				printf("You can continue\n");
				
			}
		}
	}
	else{
		printf("In-Valid");
	}
	return 0;
}
