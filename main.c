#include<stdio.h>
int count=0;

//Structure
struct str{
 	int c; 
    char a[80]; 
    float r; 
    char q[100]; 
} 
str[100];

//Add Function
void add() {
    printf("\n\n\n\t\t\t ADD STUDENT DATA\n "); 
    int i,a=0; char x; struct str s[100]; 
    for (i=0 ; i<100 ; i++){
        while(str[i].c=='\0'){ 
            printf("\n\n\n\t\t Adding student's Data : \n "); 
            count++; 
            printf("\n\t\t Enter roll: "); 
            scanf("%d",&str[i].c);
            fflush(stdin); 
            printf("\n\t\t Enter student Name: "); 
            scanf("%d",&str[i].a);
            fflush(stdin); gets(str[i].a); 
            printf("\n\t\t Enter student CGPA: ");
            scanf("%f",&str[i].r); 
            printf("\n\t\t Enter student address: ");
            scanf("%d",&str[i].q);
            fflush(stdin); 
            gets(str[i].q);
            printf("\n\n\t\t Add more ?(Y/N): ");
            fflush(stdin);
            scanf("%c",&x);
            if(x=='y' || x=='Y') { 
                continue; 
            } 
            else if ( x=='n' || x=='N') { 
                a++; 
                break;
            } 
        } 
        if(a>0) { 
            break;
        } 
    } 
}


//delete data
void delete(){ 
    int y,i,j,flag=0;
    char x;
    printf("\n\n\t\t\t DELETE STUDENT DATA \n");
    while(1) { 
        printf("\n\n\t\t Deleting student data : \n"); 
        printf("\n\t\t Enter student roll: ");
        scanf("%d",&y); 
        for (i=0 ; i<count ; i++) {
            if (y == str[i].c) { 
                flag++;
                break;
                
            } 
            else{
                flag=0;
            } 
        }
        if(flag!=0) { 
            str[i].c = '\0'; 
            for(j=0; j<80; j++) {
                str[i].a[j] = '\0';
            }
            str[i].r = '\0'; 
            for(j=0; j<100; j++) { 
                str[i].q[j] = '\0'; 
            } 
        }
        else{
            printf("\n\t\t Input is not available\n");
        }
        printf("\n\t\t Delete more (Y/N): "); 
        fflush(stdin); 
        scanf("%d",&x);
        if(x=='y' || x=='Y') { 
            continue;
        } 
        if (x=='n' || x=='N') { 
            break;
        } 
    }
} 

//show data
void show(){
    int i; 
    printf("\n\n\t\t\t SHOW ALL STUDENT DATA \n\n\n");
    printf("\n\n\t\t\t Showing All Students Data :\n\n");
    printf("\t\t No.\t roll \t\t Name \t\t cgpa \t\t address \n\n");
    for (i=0 ; i<count ; i++) { 
        printf("\t\t %d \t %d \t\t %s\t\t %.2f \t\t%s \n", i+1, str[i].c, str[i].a, str[i].r, str[i].q); 
    } 
    printf("\n\n"); 
} 

//search data 
void search() { 
    int y,i,j,found=0;
    char x; 
    printf("\n\n\t\t\t SEARCH STUDENT DATA \n\n\n");
    while(1) { 
        printf("\n\t\t Searching Student's Data \n\n");
        printf("\n\t\t Enter student roll: "); 
        scanf("%d",&y); 
        printf("\n"); 
        for (i=0 ; str[i].c!='\0' ; i++) {
            if(y==str[i].c) {
                found++; 
                break;
            }
            else {
                found=0; 
            }
        } 
        if(found != 0) { 
            printf("\n\t No. \t ROLL \t NAME \t CGPA \t ADDRESS \n");
            printf("\n\t %d \t %d \t %s \t %.2f\t\t%s \n", i+1, str[i].c, str[i].a, str[i].r, str[i].q); 
        } 
        else {
            printf("\n\t\t Not Found");
        } 
        printf("\n\n\t\t Search more ? (Y/N): "); 
        fflush(stdin);
        scanf("%c",&x); 
        if(x=='y' || x=='Y') { 
            continue;
        }
    }
}


int main() {
    int n;

    printf("WELCOME to student database\n");
    
    printf("1.add details\n");
    printf("2.delete details\n");
    printf("3.show details\n");
    printf("4.search details\n");
   
    while(1){
        printf("choose your option:\n");
        scanf("%d",&n);
        if(n==1){
            add();
        }
        else if(n==2){
            delete();
        }
        else if(n==3){
            show();
        }
        else if(n==4){
            search();
        }
        else{
            printf("invalid ");
        }
        
    }
    
    return 0;
}
