
import java.lang.*;
import java.util.*;


class Bitwise
{
    public int Countone(int iNo)       // 4
    {
        int iMask = 0X00004000;
        int iResult = 0;

        iResult = iNo ^ iMask;
        return iResult;
    }
}

class program201
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iret = bobj.Countone(value);
        System.out.println("Updated number is  : "+iret);
    }
}



