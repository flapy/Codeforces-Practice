import java.util.*;
public class Cf
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		String str=sc.nextLine();
		int l=str.length();
		str=str.substring(1,l-1);
		StringTokenizer st=new StringTokenizer(str,", ");
		HashSet<String> hs=new HashSet<String>();
		while(st.hasMoreTokens())
		{
			hs.add(st.nextToken());
		}
		System.out.println(hs.size());
	}
}