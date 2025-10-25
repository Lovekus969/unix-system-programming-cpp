# won3
# won version 3 - The user-friendly version
# Displays the current date and time, # of users currently
# logged in, and your current working directory

echo                         # skip a line
echo "Date and Time:\c"
date                         # displays current date
echo "Number of users on the system:\c"
who | wc -l                  # displays # of users logged in
echo "Your current directory:\c"
pwd                          # displays your current directory
echo                         # skip a line
