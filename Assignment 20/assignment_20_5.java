// 5. Write a program to find samllest in given number

class Logic
{
    void findSmallest(int iNo)
    {
        int iDigit = 0;
        int iSmall = 9;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit <= iSmall)
            {
                iSmall = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println(iSmall);
    }   
}

public class assignment_20_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findSmallest(2341456);
    }
}
