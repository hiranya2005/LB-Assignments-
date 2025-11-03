// 2. Write a program to print N numbers down to 1 in reverse order

class Logic
{
    void printReverseNum(int iNo)
    {
        int iCnt = 0;

        for(iCnt = iNo ; iCnt >= 1 ; iCnt--)
        {
            System.out.print(iCnt + " ");
        }
    }
}

public class assignment_20_2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.printReverseNum(10);
    }
}
