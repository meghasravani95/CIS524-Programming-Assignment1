
# read.csv function will read the data from the csv file into data frame type
data <- read.csv("C:\\Users\\srava\\OneDrive\\Desktop\\input.csv")

i<- 1

#nrow calculates the number of rows
# paste function is used to combine the arguments
while(i< nrow(data))
{
  a<-"Welcome, "
  c <-data[c(i),c(1)]
  b <-data[c(i),c(2)]
  print(paste(a,b,c))
  i=i+1 
}

