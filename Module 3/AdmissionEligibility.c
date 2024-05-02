// Write a C program to determine eligibility for admission to a professional course based on the following criteria Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>

int main()
{
	int mathsMarks, physicsMarks, chemistryMarks, totalMarksAllSubjects, totalMarksMathsPhysics ;
	
	printf("Enter marks obtained in Physics: ");
	scanf("%d", &physicsMarks);
	
	printf("Enter marks obtained in Chemistry: ");
	scanf("%d", &chemistryMarks);
	
	printf("Enter marks obtained in Marks: ");
	scanf("%d", &mathsMarks);
	
	totalMarksAllSubjects = physicsMarks + chemistryMarks + mathsMarks;
	printf("Total marks of Maths, Physics, and Chemistry is %d", totalMarksAllSubjects);
	
	totalMarksMathsPhysics = physicsMarks + mathsMarks;
	printf("\nTotal marks of Maths and Physics is %d", totalMarksMathsPhysics);
	
	if (physicsMarks >= 65 && chemistryMarks >= 55 && mathsMarks >= 50 && totalMarksAllSubjects >= 190
				|| totalMarksMathsPhysics >= 140) {
			printf("\nThe candidate is eligible for admission.");
		} else {
			printf("The candidate is not eligible for admission.");
		}
	
	return 0;
}