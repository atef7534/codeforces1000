#!/bin/bash

# Check if a file name is provided
if [ -z "$1" ]; then
  echo "Usage: $0 <KotlinFile.kt>"
  exit 1
fi

# Extract the base name without the extension
base_name=$(basename "$1" .kt)

# Compile the Kotlin file and include the runtime
kotlinc "$1" -include-runtime -d "$base_name.jar"

# Run the generated JAR file
java -jar "$base_name.jar"
