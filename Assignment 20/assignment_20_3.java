// 3. Write a program to check whether the number is perfect number or not

class Logic
{
    void checkPerfectNum(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1 ; iCnt <= iNo/2 ; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum += iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println(iNo + " is a perfect number..");
        }
        else
        {
             System.out.println(iNo + " is not a perfect number..");
        }
    }
}

public class assignment_20_3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPerfectNum(6);
    }
}
