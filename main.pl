open(file,'<','input.txt');

my @names=<file>;

$length=@names;
$i=1;

while($i < $length)
{
    my @sname=split(',',$names[$i]);
     
     my $fname=$sname[0];
      @lname= split('\r\n',$sname[1]);
     
     print("Welcome, ");
     print($lname[0]); #first name
     print(" ");
     print($fname);
     print("\n");
    
    $i=$i+1;
}

close(file)
