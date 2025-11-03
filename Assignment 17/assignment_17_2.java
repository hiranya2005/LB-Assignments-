// 2. Write program to check whether the program is palindrome or not
// resolve

class Logic
{
    void checkPalindrome(int iNo)
    {
        int iDigit = 0;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
        }
        System.out.println(iDigit);
    }
}
public class assignment_17_2 
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkPalindrome(4455);
    }
}
