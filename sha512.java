import java.math.BigInteger;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;
class Hash{
    public static String encrypt(String input){
        try{
            MessageDigest md=MessageDigest.getInstance("SHA-512");
            byte[] messagedigest=md.digest(input.getBytes());
            BigInteger n=new BigInteger(1,messagedigest);
            String hash=n.toString(16);
            while(hash.length()<128){
                hash="0"+hash;
            }
            return hash;
        }
        catch(NoSuchAlgorithmException e){
            throw new RuntimeException(e);
        }
    }
    public static void main(String args[])
        throws NoSuchAlgorithmException{
            System.out.println("hashed strings are");
            String s1= "hello world";
            System.out.println(s1+":"+encrypt(s1));
        }
}
