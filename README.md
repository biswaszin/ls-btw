# ls-btw

A minimal `ls` clone written in C. Lists files in a directory, with optional support for showing hidden files.

## Usage

```
lsbtw [path]
lsbtw -a [path]
```

If no path is given, it lists the current directory.

## Flags

| Flag | Description |
|------|-------------|
| `-a` | Show all files, including dotfiles (e.g. `.git`, `.bashrc`) |

> `-l` (long format) is not yet supported. Coming soon for POSIX systems.

## Setup (Windows)

```
gcc -Wall -Wextra -o lsbtw main.c
```

Run it:

```
lsbtw
lsbtw -a
lsbtw -a C:\Users
```

## Note

Didn't include -l command yet cuz it's hard, also need POSIX support which Bloatdows (Windows) doesn't have it. Soon for POSIX supported OS too.
