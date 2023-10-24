package main
import "fmt"

func main() {
    var inputValue, ft, ot, fh, th, oh int64
    fmt.Scan(&inputValue)
    
    for inputValue > 1 {
        if inputValue >= 5000{
            ft = inputValue / 5000
            inputValue %= 5000
        } else if inputValue >= 1000{
            ot = inputValue / 1000
            inputValue %= 1000
        } else if inputValue >= 500{
            fh = inputValue / 500
            inputValue %= 500
        } else if inputValue >= 200{
            th = inputValue / 200 
            inputValue %= 200
        } else if inputValue >= 100{
            oh = inputValue / 100
            inputValue %= 100
        } 
    }
    fmt.Println(ft, ot, fh, th, oh)
}
