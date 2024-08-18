public class AlphabetK {
    public static void main(String args[]){
        int  n = 7;
        for(int i=0; i<=n-1; i++){
            for(int j=0 ;j<=n-1; j++){
                if((j==0) || (i+j==n/2) || (i-j==n/2)){
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


// *  *   
// * *    
// **     
// *      
// **     
// * *    
// *  * 