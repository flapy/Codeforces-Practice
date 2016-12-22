import java.util.*;
import java.lang.*;
import java.io.*;
public class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String s="";
		Scanner sc=new Scanner(System.in);
		for(int i=1;i<500;i++)
		{
			s+=i;
		}
		//System.out.println(s.length());
		int n=sc.nextInt();
		System.out.println(s.charAt(n-1));
	}
}