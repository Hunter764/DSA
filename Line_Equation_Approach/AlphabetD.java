public class AlphabetD {
    public static void main(String args[]){
        int  n = 7;
        for(int i=0; i<=n-1; i++){
            for(int j=0 ;j<=n-1; j++){
                if((i==0 && j!=6) || (i==6 && j!=6)  || (j==6 && i!=0 && i!=6) || (j==0)){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }
}

// ****** 
// *     *
// *     *
// *     *
// *     *
// *     *
// ****** 