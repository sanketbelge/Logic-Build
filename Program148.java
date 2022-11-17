import java.lang.*;
import java.util.*;

//  0000    0000    0000    0000    0010    0000    0000    0000
//      0       0           0         0          2          0           0       0
class Bitwise
{
        public int ToggleBit(int iNo, int iPos)
        {
            if((iPos <=0) || (iPos > 32))
            {
                System.out.println("Invalid position");
                return 0;
            }

            int iMask = 0X00000004;
            int iResult = 0;

            

            iResult = iNo ^ iMask;
            return iResult;
        }
}

class code4
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);  // 9th July

        System.out.println("Enter number ");
        int value = sobj.nextInt();

        System.out.println("Enter position ");
        int pos = sobj.nextInt();

        Bitwise bobj = new Bitwise();
        int iRet = bobj.ToggleBit(value,pos);
        System.out.println("Updated number is : "+iRet);
    }
}

