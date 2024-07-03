#!/bin/bash



####


####




# Set the game path environment variable
AUTOGAME_PATH="/home/pi/git/AutoCodeQuest/"

# The function that suspends and runs the game
function interrupt_and_run 
{
	    echo -e "\n--- Time for a CQuest challenge! ---"


# Check if a tmux session named autogame already exists
	if tmux has-session -t autogame 2>/dev/null; then
	        echo "Session 'autogame' already exists. Switching to it. Use: tmux attach -t autogame"
    	else tmux new-session -d -s autogame    "$AUTOGAME_PATH/main"
	fi

# Switch to the session
	tmux switch-client -t autogame
}

# Infinite loop that runs the game at random intervals
while true; do

# Wait a random number of seconds between (3 to 5 minutes)
    sleep_time=$(((RANDOM % 2 + 3)*60))
    echo "Sleeping for $sleep_time seconds" > "$AUTOGAME_PATH/nohup.out"
    sleep $sleep_time

# Exit the program and run the game
    interrupt_and_run
done
