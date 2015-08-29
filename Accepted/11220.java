import java.util.Scanner;
import java.util.StringTokenizer;
 
class Decode
{
	public static void main(String args[])
	{
		Scanner inp = new Scanner(System.in);
		String str;
		char [] ans = new char[1000]; 
		int tc,counter,c,u;
		str = inp.nextLine();
		tc = Integer.parseInt(str);
		inp.nextLine();
		u = 1;
		while(tc > 0)
		{
			c = 0;
			while(true)
			{
				str = inp.nextLine();
				if(str.equals(""))break;						
				StringTokenizer stk = new StringTokenizer(str," ");
				counter = 0;				
				while(stk.hasMoreTokens())
				{
					String st = stk.nextToken();
					if(st.length() < counter+1)continue;
					ans[c] = st.charAt(counter);
					counter++;
					c++;
				}
				ans[c] = '$';
				c++;				
			}
			int x;
			System.out.println("Case #" + u + ":");
			for(x = 0; x < c; x++)
			{
				if(ans[x] == '$')
				{
					System.out.println("");					
				}
				else System.out.print(ans[x]);
			}
			if(tc != 1)System.out.println("");
			tc--;
			u++;
		}
	}
}
