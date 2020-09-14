file=open("input.txt","r")
lines=file.readlines(1500)

i=1
while(i< 53): 
  names=lines[i].split(",")
  lname=names[0]
  fname=names[1].split("\n")
  print("Welcome, "+fname[0]+" "+lname)
  i=i+1
 
  

    
