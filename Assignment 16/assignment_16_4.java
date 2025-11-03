// 4. Write a program to reverse a number

class Logic
{
    void reverseNumber(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;

            System.out.print(iDigit);
        }
        
        System.out.println();
    }
}
public class assignment_16_4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}
