import java.util.*;

public class mapping {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n;
        n = sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        //precompute
        HashMap<Integer, Integer > mp = new HashMap <>();
        for(int i=0; i<n; i++){
            int key = arr[i];
            int freq = 0;
            if(mp.containsKey(key)) freq = mp.get(key);
            freq++;
            mp.put(key , freq );
        }

        int q;
        q = sc.nextInt();
        while(q-- > 0){
            int number;
            number = sc.nextInt();
            //fetch
            if(mp.containsKey(number)) System.out.println(mp.get(number));
            else System.out.println(0);
        }

    }
}

// Input: 
// 7
// 1 2 3 1 3 2 12
// 5
// 1 2 3 4 12

// Output: 
// 2
// 2
// 2
// 0
// 1

