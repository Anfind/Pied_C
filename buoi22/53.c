#include<stdio.h>
#include<string.h>

void printMenu(void);
void addNewStudent(char sId[][100], char fName[][100],
    char lName[][100], int yoB[], 
    float gpa[], int *size);
void printStudentList(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int size);
int searchStudentBySId(char sId[][100], int size, char key[]);
void delStudentBySId(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int *size);
void updateStudentBySId(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int size);
void addNewStudent(char sId[][100], char fName[][100],
    char lName[][100], int yoB[], 
    float gpa[], int *size);

int main(){
    //properties
    printf("Hello world!\n");
    char sId[100][100];
    char fName[100][100];
    char lName[100][100];
    int  yoB[100];
    float gpa[100];
    int size = 0;
    int choice;
    char buffer;
    do{
        printMenu();
        do{
            printf("\nInput your choice: ");
            scanf("%d", &choice);
            scanf("%c", &buffer);
            fflush(stdin);
            if(buffer != '\n'){
                printf("Your choice is invalid, pls input integer number ");
            }
        }while(buffer != '\n');
        //nhap so nguyen roi ms kt sau
        switch (choice){
            case 1:
                printf("\nCommand 1");
                printStudentList(sId, fName, lName, yoB, gpa, size);
                break;
                
            case 2:
                printf("\nCommand 2");
                addNewStudent(sId, fName, lName, yoB, gpa, &size);
                break;

            case 3:
                printf("\nCommand 3");
                delStudentBySId(sId, fName, lName, yoB, gpa, &size);
                break;

            case 4:
                printf("\nCommand 4");
                updateStudentBySId(sId, fName, lName, yoB, gpa, size);
                break;

            case 5:
                printf("\nCommand 5");
                break;

            case 6:
                printf("\nCommand 6");
                break;

            case 7:
                printf("\nCommand 7");
                break;

            default:
                printf("\nYour choice is required between 1 and 7");
                break;
        }
    }while(choice != 7);
        
    
    
    return 0;
}

void printMenu(void){
    printf("Student management application");
    printf("\n1. Print Students List      2.Add new Student");
    printf("\n3. Delete student by sId    4.Update student In4");
    printf("\n5. Sort Students List order by firstName ascending");
    printf("\n6. Sort Students List order by GPA descending");
    printf("\n7. Quit");

}

void addNewStudent(char sId[][100], char fName[][100], char lName[][100],
    int yoB[], float gpa[], int *size){
        printf("\nAdd new student");
        printf("\nInput new student in4");
        printf("\nsId: ");
        gets(sId[*size]);
        fflush(stdin);

        printf("\nInput Last name");
        printf("\nlName: ");
        gets(lName[*size]);
        fflush(stdin);

        printf("\nInput new First name");
        printf("\nfName: ");
        gets(fName[*size]);
        fflush(stdin);

        printf("\nInput Year of birth");
        printf("\nyoB: ");
        scanf("%d", &yoB[*size]);
        fflush(stdin);

        printf("\nInput GPA");
        printf("\nGPA: ");
        scanf("%f", &gpa[*size]); // Changed from %d to %f for float value
        fflush(stdin);
        (*size)++;
        printf("\nAdding is successfully!");
}

void printStudentList(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int size){
    if(size == 0){
        printf("\nNothing to print");
        return;
    }
    printf("\n%5s|%10s|%10s|%4s|%5s", "SID", "FNAME", "LNAME", "YOB", "GPA");
    for (int i = 0; i < size; i++){
        printf("\n%-5s|%-10s|%-10s|%4d|%5.2f", sId[i], fName[i], lName[i], yoB[i], gpa[i]);    
    }
}   

int searchStudentBySId(char sId[][100], int size, char key[]){
    for (int i = 0; i < size; i++) {
        if (strcmp(key, sId[i]) == 0) {
            return i;
        }
    }
    return -1; // Return -1 if student not found
}

void delStudentBySId(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int *size){
    char key[100];
    //tim
    printf("\nInput studentID, u want to delete: ");
    gets(key);

    int pos = searchStudentBySId(sId, *size, key);
    if(pos == -1){
        printf("\nStudent is not existed");
    }else{
        for(int i = pos; i < *size - 1; i++){
            strcpy(sId[i], sId[i+1]);
            strcpy(fName[i], fName[i+1]);
            strcpy(lName[i], lName[i+1]);
            yoB[i] = yoB[i+1];
            gpa[i] = gpa[i+1];
        }
        (*size)--;
        printf("\nStudent deleted successfully!");
    }
} // Added missing closing brace

void updateStudentBySId(char sId[][100], char fName[][100], char lName[][100], int yoB[], float gpa[], int size){
    char key[100];
    // Find the student
    printf("\nInput studentID, you want to update: ");
    gets(key);

    int pos = searchStudentBySId(sId, size, key);
    if (pos == -1) {
        printf("\nStudent does not exist");
    } else {
        printf("\nNew Year of Birth: ");
        scanf("%d", &yoB[pos]);
    } else {
        printf("\nNew Year of Birth: ");
        scanf("%d", &yoB[pos]);
        fflush(stdin);

        printf("\nNew GPA: ");
        scanf("%f", &gpa[pos]);
        fflush(stdin);

        printf("\nStudent information updated successfully!");
    }
}
