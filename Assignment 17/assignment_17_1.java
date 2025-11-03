// 1. Write a program to find sum of digits of numbers

class Logic
{
    void sumOfDigits(int iNo)
    {
        int iDigit = 0;
        int iSum = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum += iDigit;

            iNo = iNo / 10;
        }

        System.out.println("The sum of Digits is: " + iSum);
    }
}
public class assignment_17_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}
