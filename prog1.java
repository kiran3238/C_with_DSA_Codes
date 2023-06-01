import java.util.*;
import java.IO.*;

class Core2web{


	public static void main(String[]args)throws IOException{


		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));


		System.out.println("Mobile Name,Mobile Series,Mobile count,per Mobile price");

		String mobile=br.readline();

		System.out.println(mobile);

		StringTokenizer obj=new StringTokenizer(mobile," ");


		String token1=obj.nextToken();
		char token2=obj.token2charAt(0);

		int token3=Integer.parseInt(obj.nextToken());
		float token4=Float.parseFloat(obj.nextToken());

		System.out.println("Mobile Name="+ token1);
		System.out.println("Mobile Series="+ token2);
		System.out.println("Mobile Count="+ token3);
		System.out.println("Per Mobile price="+ token4);
	}
}


