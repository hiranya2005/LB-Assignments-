// 5. Write a program to checck whether number is positive, negetive or zero

class Logic
{
    void checkSign(int iNo)
    {
        if(iNo < 0)
        {
            System.out.println("Negetive Number");
        }
        else if(iNo > 0)
        {
            System.out.println("Positive Number");
        }
        else
        {
            System.out.println("Zero");
        }
    }
}

public class assignment_18_5 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkSign(-8);
    }
}
