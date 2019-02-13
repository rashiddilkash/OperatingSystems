m=$1
case $# in
1)set `date`;
n=$6;;
2)n=$2;;
esac

case $m in
Jan)cal 1 $n;;
Feb)cal 2 $n;;
Mar)cal 3 $n;;
Apr)cal 4 $n;;
May)cal 5 $n;;
Jun)cal 6 $n;;
Jul)cal 7 $n;;
Aug)cal 8 $n;;
Sep)cal 9 $n;;
Oct)cal 10 $n;;
Nov)cal 11 $n;;
Dec)cal 12 $n;;
esac
