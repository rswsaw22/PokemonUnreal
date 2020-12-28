# PokemonGodot

## Setup

To setup the development environment follow the below steps:
1. Download the Godot Engine Mono Version 64-bit and that it is the current working version which is 3.2.3 (https://godotengine.org/download/windows) [Make sure to choose the OS you are using].
2. Download C# support
    a. You can download VS 2019 Community Version or the MSB 2019 at (https://visualstudio.microsoft.com/downloads/?q=build+tools) Note: This is suggested for Windows only and does not prevent you from setting up a VSCode environment if you can download just the build tools.
    b. You can download Mono SDK (https://www.mono-project.com/download/stable/) Note: This is suggested for Linux/MacOS/Docker builds.
3. `git clone git@github.com:rswsaw22/PokemonUnreal.git` the repo into your workspace. Make sure your ssh key is configured.
4. Startup Godot Engine and build. If you cannot build, make sure to contact a maintainer for help with troubleshooting.

## Design Process

This is a team effort to help learn more about Game Design and off the shelf Game Engines in general. This is not meant to be a saleable product and is purely for enjoyment and experience. If someone wants to contribute to the project, they should be given permission by at least 2/3 of the administrators of the repo and follow the contribution guidelines below.

## Contribution

Because this is an experience only project, contribution guidelines are fairly straightforward. Contributors should create a branch from main to do design/debugging/product work. They should open a ticket in the `Issues` tab describing the work they are doing, the branch, and the OS/build setup and assign the ticket to themselves. An administrator will then add this to the Kanban workflow. Work on this branch should be updated with progress, such as In Progress, Testing, and PR. Only administrators of the product should move it to done, and never their own ticket. Make sure they are alerted to the fact when a PR has been completed which indicates the completion of a ticket.

For non-contributors but people who want to test and contribute in that way, open a ticket as above but assign it to one of the three administrators and the work can be properly coordinated from there. You may be asked to help with the testing of your own ticket however, so make sure in the description you indicate the OS you were on and that this is a test-only ticket so we know you are not planning to contribute development work.

## Trouble Shooting Advice

The maintainers of this repo have found that multipe VS setups can hurt the project. Make sure you are setup to handle .NET framework 4.7.2 or you may run into odd build issues.

## Administrators
  * historybuffjb
  * GoldenBug
  * rswsaw22
