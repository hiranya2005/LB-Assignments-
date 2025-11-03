// 4. Write a program to find minimum of three numbers

class Logic
{
    void findMinimum(int a , int b , int c)
    {
        if( a <= b && a <= c )
        {
            System.out.println(a + " is smaller.");
        }
        else if( b <= a && b <= c )
        {
            System.out.println(b + " is smaller.");
        }
        else
        {
            System.out.println(c + " is smaller.");
        }
    }
}

public class assignment_17_4 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findMinimum(3, 7, 2);
    }
}
