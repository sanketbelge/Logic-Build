import java.lang.*;
import java.util.*;

// 0000 0000 0000 0000 0000 0000 0000 1111
//   0    0    0    0    0    0    0   15

class Bitwise
{

	public int OnBit(int no)
	{
		int result = 0;

		int iMask = 0X0000000F;
		
		result = no | iMask;

		return result;
	}

}

class program5
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		Bitwise bobj = new Bitwise();

		System.out.println("Enter The No : ");
		int value = sobj.nextInt();

		int iRet = bobj.OnBit(value);

		System.out.println("After Updatation : "+ iRet);
	}
}