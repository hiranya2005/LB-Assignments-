// 1. Write a program to calculate sum of first N natural numbers

class Logic
{
    void calculateSum(int iNo)
    {
        int iSum = 0;
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt ++)
        {
            iSum += iCnt;
        } 

        System.out.println("The sum of N numbers is: " + iSum);
    }
}

public class assignment_16_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.calculateSum(10);
    }
}
