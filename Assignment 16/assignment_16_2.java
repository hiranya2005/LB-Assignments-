// 2. Write a program to check wether given program is even or odd

class Logic
{
    void checkEvenOdd(int iNo)
    {
        if(iNo % 2 == 0)
        {
            System.out.println("Given number is Even...");
        }
        else
        {
            System.out.println("Given number is Odd...");
        }
    }
}

public class assignment_16_2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkEvenOdd(7);
    }
}
