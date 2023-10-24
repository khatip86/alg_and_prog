package main
import (
    "fmt"
    "math"
)
 
func main() {
    var (
    h float64 = 365 * 0.5 
    o float64 = h / 20
    p float64 = h / 32
    )
    fmt.Println(h, int(math.Ceil(p)), int(math.Ceil(o)))
    
}