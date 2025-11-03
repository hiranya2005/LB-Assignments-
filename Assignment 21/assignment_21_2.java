// 2. Write a program to count how many even and odd numbers are present between 1 to n

class Logic
{
    void countOddEven(int iNo)
    {
        int iCnt = 0;
        int iEven = 0;
        int iOdd = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                iEven++;
            }
            else
            {
                iOdd++;
            }
        }

        System.out.println("Total number of Even digits are: " + iEven);
        System.out.println("Total number of Odd digits are: " + iOdd);
    }
}

public class assignment_21_2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countOddEven(50);
    }
}
