// 4. Write a program to find largest digit of given number

class Logic
{
    void largestDigit(int iNo)
    {
        int iDigit = 0;
        int iLarge = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iLarge)
            {
                iLarge = iDigit;
            }
            iNo = iNo / 10;
        }

        System.out.println(iLarge);
    }
}

public class assignment_20_4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.largestDigit(83429);
    }
}
