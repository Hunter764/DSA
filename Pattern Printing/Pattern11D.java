class Pattern11D{
    public static void main(String[] args){
        for(int i=1; i<=5; i++){
            for(int k=1; k<=5-i+1 ;k++){
                System.out.print("_ ");
            }
            for(int j=1 ;j<=2*i-1; j++){
                if( i ==1 || j == 1|| j== 2*i-1){
                    System.out.print("* ");
                }
                else{
                    System.out.print("_ ");
                }
            }
            System.out.println();
        }
        for(int i=2; i<=5; i++){
            for(int k=1; k<=i ;k++){
                System.out.print("_ ");
            }
            for(int j=1 ;j<=2*(5-i+1)-1; j++){
                if( i ==1 || j == 1|| j== 2*(5-i+1)-1){
                    System.out.print("* ");
                }
                else{
                    System.out.print("_ ");
                }
            }
            System.out.println();
        }

    }
}

//Hollow Diamond
// _ _ _ _ _ * 
// _ _ _ _ * _ * 
// _ _ _ * _ _ _ * 
// _ _ * _ _ _ _ _ * 
// _ * _ _ _ _ _ _ _ * 
// _ _ * _ _ _ _ _ * 
// _ _ _ * _ _ _ * 
// _ _ _ _ * _ * 
// _ _ _ _ _ * 