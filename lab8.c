#include<stdio.h>

struct book {
	
	int no;
	char title[20];
	char name[20];
	float price;
	char id[20];
	int number;
	
};

int main(){
	
	int i;
	struct book rec[5];
	printf("Enter record of 5 books");
	
	for(i=0;i<5;i++){
		
		printf("\n\nEnter no: ");
		scanf("%d",&rec[i].no);
		printf("title >> ");
		scanf("%s",&rec[i].title);
		printf("Author >> ");
		scanf("%s",&rec[i].name);
		printf("Price >> ");
		scanf("%f",&rec[i].price);
		printf("Book ID >> ");
		scanf("%s",&rec[i].id);
		printf("Bookshelf number >> ");
		scanf("%d",&rec[i].number);
	}
	printf("\n------------------------------------------------------------------------");
	printf("\n\nBook information list : \n");
	for(i=0;i<5;i++){
		printf("\nRECORD NO %d\n\ntitle: %s\nAuthor: %s\nPrice: %.2f\nBook ID: %s\nBookshelf ID: %d\n",rec[i].no,rec[i].title,rec[i].name,rec[i].price,rec[i].id,rec[i].number);
	}
	
}