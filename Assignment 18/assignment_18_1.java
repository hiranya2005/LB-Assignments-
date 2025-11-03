// 1. Write a program to check whether a program is prime or not

class Logic
{
    void checkPrime(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 2 ; iCnt <= iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }
        if(iCount == 0)
        {
            System.out.println("Given number is prime number...");
        }
        else
        {
            System.out.println("Given number is not a prime number...");
        }
    }
}

public class assignment_18_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPrime(15);
    }
}
