import java.util.Scanner

fun main(args: Array<String>) {
    val reader = Scanner(System.`in`)
    var testc: Int = reader.nextInt()
    for (i in 1..testc) {
        var n: Int = reader.nextInt()
        var s: Int = reader.nextInt()
        var bs: Int = reader.nextInt()
        var e: Int = reader.nextInt()
        var be: Int = reader.nextInt()
        var k: Int = reader.nextInt()
        
            
        var res: Int = 0
        if(k <= s + (be - bs)) {
            res = bs + (k - s);
        } else {
            res = be;
        }
        println("$res")
        
        
    }
    // println("Hello, world!!!")
 
    // print("Enter an Integer value: ")
 
    // // .toInt() function converts the string into Integer
    // var integerValue: Int = string1.toInt()
    // println("You entered: $integerValue")
 
    // print("Enter a double value: ")
    // val string2= readLine()!!
 
    // // .toDouble() function converts the string into Double
    // var doubleValue: Double = string2.toDouble()
    // println("You entered: $doubleValue")
}