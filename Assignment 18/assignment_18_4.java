// 4. Write a program to find sum of even and odd digits separately in a number

class Logic
{
    void SumEvenSumOdd(int iNo)
    {
        int iEven = 0;
        int iOdd = 0;
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit % 2 == 0)
            {
                iEven += iDigit;
            }
            else
            {
                iOdd += iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Sum of even digits in given number: " + iEven);
        System.out.println("Sum of odd digits in given number: " + iOdd);
    }
}

public class assignment_18_4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.SumEvenSumOdd(123456);
    }
}
