

include_path="../include"
src_path="../src"


# Remove tests for now
rm *Test.h > /dev/null 2>&1


# Copy .cc files (don't overwrite them if they exist)
for filename in *.cc; do 
    if [ -f $src_path/$filename ]; then
        echo "File exists; will not overwrite ($filename)";
    else
        mv $filename $src_path/$filename
    fi;
done


# Copy .h files (don't overwrite them if they exist)
for filename in *.h; do
    if [ -f $include_path/$filename ]; then
        echo "File exists; will not overwrite ($filename)";
    else
        mv $filename $include_path/$filename
    fi;
done




