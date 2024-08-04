class Pattern11A{
    public static void main(String[] args){
        for(int i=1; i<=5; i++){
            for(int j=1 ; j<=5; j++){
                if(i==1 || i==5 || j==1 || j==5){
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


// * * * * * 
// * _ _ _ * 
// * _ _ _ * 
// * _ _ _ * 
// * * * * * 