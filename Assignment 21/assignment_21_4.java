// 4. Write a program to count total number of factors of given number

class Logic
{
    void countFactors(int iNo)
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iCount++;
            }
        }

        System.out.println(iCount);
    }
}

public class assignment_21_4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countFactors(12);
    }
}
