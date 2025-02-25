#Duilio Lucio, CS333, Project 4, 10/15/2024

x <- 20

my.function <- function() {
    y <- 10
    print(x + y) # calling into parent environment for x
}

my.function() # 30