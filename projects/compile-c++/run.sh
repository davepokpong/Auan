echo "Compiling $1 ..."
g++ $1 -o run
if [ $2 != "" ]
then
    ./run < "$2"
else
    ./run
fi
rm run
echo "Done!"
