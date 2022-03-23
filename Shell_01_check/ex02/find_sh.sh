find . -type f \( -name "*.sh" \) -print | xargs -n 1 basename -s '.sh'
