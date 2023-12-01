#!/bin/bash
# This script sends a POST request to a URL with specific parameters using curl
curl -sX POST -d "email=test@gmail.com&subject=I will always be here for PLD" "$1"
