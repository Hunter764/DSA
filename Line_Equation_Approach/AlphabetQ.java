public class AlphabetQ {
    public static void main(String args[]) {
        int n = 7;
        for (int i = 0; i <= n - 1; i++) {
            for (int j = 0; j <= n - 1; j++) {
                
                if ((i==j && i>=n/2)||(i==0 && j!=0 &&j<=n/2) || (j==0 && i!=0 && i<=n/2) ||(i==4 && j<=n/2 && j!=0) ||(j==4 && i!=0 && i<=n/2)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

//  ***   
// *   *  
// *   *  
// *  **  
//  ****  
//      * 
//       *