package main 
  
import ( 
    "bufio"
    "fmt"
    "log"
    "os"
    "strings"
) 
  
func main() { 
  
    file,error := os.Open("input.txt") 
  
     if error != nil { 
        log.Fatalf("unable to open the file") 
  
    }
  
    scanner := bufio.NewScanner(file) 
  
   
    scanner.Split(bufio.ScanLines) 
    var text []string 
  
    for scanner.Scan() { 
        text = append(text, scanner.Text()) 
    } 
  var a int=1;
 
    for _, line := range text { 
       // fmt.Println(line) 
     if a!=1 {
         s := strings.Split(line, ",")
        fmt.Print("\nWelcome,");
        fmt.Print(s[1]+" ");
        fmt.Print(s[0]);
         
     }
       a++; 
    } 
    
     file.Close() 
  
}