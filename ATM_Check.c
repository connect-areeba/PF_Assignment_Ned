#include <stdio.h>
int main(){
	
	int Balance = 2000, Deposit, Withdraw, Check;
	int Choice;
    printf("Enter the choice\n");
	printf("1:Check balance\n");
	printf("2:Deposit Money\n");
	printf("3:Withdraw Money\n");
	
	scanf("%d", &Choice);
	
	switch(Choice){
	
		
		case 1:
	    	printf("Your balance is %d" , Balance);
	    	break;
		
		case 2:
			printf("Enter amount to be deposited:");
			scanf("%d", &Deposit);
			Balance = (Deposit + Balance);
			printf("Your new balance is %d", Balance );
			break;
			
        case 3:
        	printf("Enter amount to withdraw:");
        	scanf("%d", &Withdraw);
        	Balance = (Balance - Withdraw);
        	printf("Your new balance is %d", Balance);
        	break;
        	
        default:
        	printf("Invalid option");
        	break;
	}
	    return 0;
}
