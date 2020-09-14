line=IO.readlines("input.csv")
$count= line.length
$i=1

while $i < $count do
    names=line.at($i).split(",")
    fname=names[1].split("\r\n")
    print("\nWelcome, ")
    print(fname[0]+" ")
    print(names[0])
    $i =$i+ 1
end





