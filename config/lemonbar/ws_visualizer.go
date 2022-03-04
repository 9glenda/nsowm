package main

import (
	"fmt"
	"os"
	"strings"
)

func main() {
	var wslist string = strings.Replace(os.Args[1], os.Args[2], "[ "+os.Args[2]+" ]", 1)
	fmt.Println(wslist)
}
