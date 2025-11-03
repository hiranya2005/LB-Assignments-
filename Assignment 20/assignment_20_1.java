// 1. Write a program to find sum of all even numbers upto N

class Logic
{
    void displaySumOfEven(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        System.out.println(iSum);
    }
}

public class assignment_20_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displaySumOfEven(10);
    }    
}
