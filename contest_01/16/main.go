package main

import (
 "fmt"
)

func main() {
 var array []float64
 var myint float64
 var a int
 var times int
 fmt.Scan(&times)
 for a < times {
  fmt.Scan(&myint)
  array = append(array, myint)
  a++
 }
 fmt.Printf("%.15f ", array[0])
 for i := 1; i < len(array)-1; i++ {
  fmt.Printf("%.15f ", (array[i]+array[i-1]+array[i+1])/3)
 }
 fmt.Printf("%.15f", array[len(array)-1])
}
