import java.lang.*;
import java.util.*;

// check wheather 1st & last
// 1000 0000 0000 0000 0000 0000 0000 0001
//  8     0   0    0    0    0     0    1

class BitWise
{
	public boolean ChkBit(int no)
	{
		int iMask = 0X80000001;
		int result = 0;

		result = no & iMask;

		if(result == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
}

class program 295
{
	public static void main(String[] args)
	{
		Scanner sobj = new Scanner(System.in);

		System.out.println("Enter The No :");
		int value = sobj.nextInt();

		BitWise obj = new BitWise();

		boolean bret = obj.ChkBit(value);

		if(bret == true)
		{
			System.out.println("Bit Is On");	
		}
		else
		{
			System.out.println("Bit Is Off");
		}
	}
}