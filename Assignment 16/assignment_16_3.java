// 3. Write a program to find factorial of a number using for loop

class Logic
{
    void findFactorial(int iNo)
    {
        int iCnt = 0 , iFact = 1;
        
        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            iFact *= iCnt;
        }

        System.out.println("Factorial of " + iNo + " is " + iFact);
    }
}
public class assignment_16_3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findFactorial(5);
    }
}
