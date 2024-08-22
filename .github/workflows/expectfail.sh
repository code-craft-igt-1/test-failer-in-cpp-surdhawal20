#!/bin/bash

if $1; then
    echo "Succeeded"
else
    echo "Failed"
    exit 1
fi
