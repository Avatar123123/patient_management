#include <stdio.h>


struct Patient{
    char name[40];
    int age;
    float BMI; 
};


void printInformation(struct Patient *patient)
{
    printf("Name: %s\n", patient->name);
    printf("Patient age: %d\n", patient->age);
    printf("BMI: %f\n", patient->BMI);
}


void getPatientData(struct Patient *patient)
{
    printf("What is the patient name?\n");
    scanf("%s", patient->name);


    printf("How old is the patient?\n");
    scanf("%d", &patient->age);


    printf("What is the patient's BMI?\n");
    scanf("%f", &patient->BMI);
}

int main()
{

    printf("\n********* This program is used to store the patient's name, age and body mass index(BMI) in a hospital ward. *********\n\n");
    int numberOfPatients; 
    printf("How many patients are admitted to the ward?\n");
    scanf("%d", &numberOfPatients);

    struct Patient patients[numberOfPatients];

    for (int i = 0; i < numberOfPatients; i++) {
        printf("********* Enter information for patient %d *********\n\n", i + 1);
        getPatientData(&patients[i]);
        printf("\n");
    }

    for (int i = 0; i < numberOfPatients; i++) {
        printf("Patient %d Information:\n", i + 1);
        printInformation(&patients[i]);
        printf("\n");
    }
    return 0;
}