import java.util.*;

public class solution {
	Scanner s = new Scanner(System.in);
	int N = s.nextInt();
	int sum = 0;
	for(int i=0; i<N; i++)
		sum += s.nextInt();
	System.out.println(sum);
}
