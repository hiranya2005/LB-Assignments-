// 3. Write a program to find Maximum of two numbers

class Logic
{
    void findMaximum(int iNo1 , int iNo2)
    {
       if(iNo1 > iNo2)
       {
        System.out.println(iNo1 + " is greater than " + iNo2);
       }
       else
       {
        System.out.println(iNo2 + " is greater than " + iNo1);
       } 
    }
}
public class assignment_17_3 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.findMaximum(20, 15);
    }
}
