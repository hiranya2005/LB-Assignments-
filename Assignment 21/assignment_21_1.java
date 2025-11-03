// 1. Write a program to calculate product of digits of number

class Logic
{
    void productOfDigits(int iNo)
    {
        int iDigit = 0;
        int iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct *= iDigit;

            iNo = iNo / 10;
        }

        System.out.println(iProduct);
    }
}

public class assignment_21_1 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
    }
}
