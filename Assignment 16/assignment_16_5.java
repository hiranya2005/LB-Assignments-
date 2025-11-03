// 5. Write a program to count number of digits in given number

class Logic
{
    void countDigits(int iNo)
    {
        int iDigit = 0;
        int iCount = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iCount++;

            iNo = iNo / 10;
        }
        
        System.out.println("Number of digits are: " + iCount);
    }
}
public class assignment_16_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}
