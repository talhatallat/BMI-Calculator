/****************************************************************************************
Program: BMI Calculator 
Programer Name: Talha Tallat (S00180011)
Program Description: Calculates a BMI of a person when user enters their weight and height
******************************************************************************************/

#include <stdio.h>

float BMICalc(float weight, float height) {
    float bmi;
	bmi = (weight)/(height*height);
    
    return bmi;
}
/******************************************/
int main(void) {
	float weight;
	float height;
	
    int weighttype;
	float bmi;
		  
	printf("\n Enter your weight in kg or lbs = ");
    scanf("%f", &weight);	  
    
    printf("\n Enter the height in metres = ");
    scanf("%f", &height);
    
    printf("\n Enter the 2 for kilograms ans 1 for pounds = ");
    scanf("%d", &weighttype);
    
    
       if(weighttype == 1){
    weight=weight/2.2;
    bmi = BMICalc(weight,height);
    }

        else{
     bmi=BMICalc(weight,height);
    }

    if(bmi <16) {
        printf("bmi:%f /nyour bmi is at a very under weight level /n", bmi);
           }
   
    else if ((bmi > 16)&&(bmi < 18.5)){
        printf("bmi:%f /nyour bmi is at an underweight level/n",bmi);
    }
    
    else if ((bmi > 18.5)&&(bmi < 25)){
        printf("bmi:%f /nyour bmi is at an underweight level/n",bmi);
    }
   
    else{
         printf("bmi:%f /nyour bmi is at an overweight level/n",bmi);
    }
    
    

    
    
 
    system("pause");
    return 0;  
}



