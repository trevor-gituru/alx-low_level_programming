#!/bin/bash

# Get the commit message
message="$1"

git add .
git commit -m "$message"
git push
