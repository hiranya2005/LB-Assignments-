// 3. Write a program to print all Odd numbers upto N

class Logic
{
    void printOdd(int iNo)
    {
        int iCnt = 0;

        for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
        {
            if(iCnt % 2 != 0)
            {
                System.out.println(iCnt);
            }
        }
    }
}
public class assignment_18_3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printOdd(20);
    }
}
