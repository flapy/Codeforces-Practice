import java.util.*;
public class Only
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.next();
		String arr[]=str.split("WUB");
		int l=arr.length;
		String ans="";
		for(int i=0;i<l;i++)
		{
			ans+=arr[i]+" ";
		}
		System.out.println(ans.trim());
	}
}