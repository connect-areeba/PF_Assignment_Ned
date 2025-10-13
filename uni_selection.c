#include <stdio.h>
int main(){
	
	float fscMarks, ntsMarks, fscTotal, ntsTotal;
	float fsc_perc, nts_perc;
	
	printf("Enter your F.sc marks:");
	scanf("%f", &fscMarks);
	printf("Enter total F.sc marks:");
	scanf("%f", &fscTotal);
	printf("Enter your NTS marks:");
	scanf("%f", &ntsMarks);
	printf("Enter total NTS marks:");
	scanf("%f", &ntsTotal);
	
	fsc_perc = (fscMarks / fscTotal)*100;
	nts_perc = (ntsMarks / ntsTotal)*100;
	
    // OXFORD UNIVERSITY	
    
	if (fsc_perc > 70 && nts_perc >= 70){
		printf("Eligible for Oxford Uni *IT Dept*\n");
	}
	else if(fsc_perc > 70 && nts_perc >= 60){
		printf("Eligible for Oxford Uni *Electronics Dept*\n");
	}
	else if(fsc_perc > 70 && nts_perc >= 50){
		printf("Eligible for Oxford Uni *Telecommunication Dept*\n");
	}

    // MIT University
    
    else if (fsc_perc >= 60 && fsc_perc <= 70 && nts_perc >= 50) {
        printf("Eligible for MIT <IT Dep>)\n");
    } 
    else if (fsc_perc >= 50 && fsc_perc <= 59 && nts_perc >= 50) {
        printf("Eligible for MIT <Chemical Dept>\n");
    } 
    else if (fsc_perc > 40 && fsc_perc < 50 && nts_perc >= 50) {
        printf("Eligible for MIT <Computer Dept>\n");
    } 

    else {
        printf("Sorry, you are not eligible for admission.\n");
    }

    return 0;
}
