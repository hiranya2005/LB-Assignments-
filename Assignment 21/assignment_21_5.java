// 5. Write a program to print numbers from 1 to N which are divisible by both 2 & 3

class Logic
{
    void displayDvisibleBy2and3(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 == 0 && iCnt % 3 == 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}

public class assignment_21_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.displayDvisibleBy2and3(30);
    }
}
