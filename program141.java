import java.lang.*;
import java.util.*;

// 0000 0000 0000 0000 0000 0010 0100 0000
//   0    0    0    0    0    2    4    0

class Bitwise
{

	public int OffBit(int no)
	{
		int result = 0;

		int iMask = 0X00000240;
		
		result = no ^ iMask;

		return result;
	}

}

class program2
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		Bitwise bobj = new Bitwise();

		System.out.println("Enter The No : ");
		int value = sobj.nextInt();

		int iRet = bobj.OffBit(value);

		System.out.println("After Updatation : "+ iRet);
	}
}