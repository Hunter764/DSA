class Pattern09A{
    public static void main(String[] args){
        for(int i=1; i<=5; i++){
           
            for(int j=1; j<=5-i+1 ; j++){
                System.out.print("* ");
            }
            for(int k=1 ; k<=i-1;k++){
                System.out.print("_ ");
            }
            for(int k=1 ; k<=i-1;k++){
                System.out.print("_ ");
            }   
            for(int j=1; j<=5-i+1 ; j++){
                System.out.print("* ");
            }
            System.out.println();
        }
        
    }
}

// * * * * * * * * * * 
// * * * * _ _ * * * * 
// * * * _ _ _ _ * * * 
// * * _ _ _ _ _ _ * * 
// * _ _ _ _ _ _ _ _ * 