# ece-309-proj-1
Made by Christian Barron-Anaya
Date: 2026/08/31
Class: ECE 309 001

## Demo of a harness for an LLM
This repo contains a very simple program written in C that demonstrates the role a harness plays as the interface between human input and an AI agent. 
For simplicity, among other reasons, a very simple mock model is used that either prints a hardcoded greeting or echoes the user's input back to them.
The user can end their session by typing "quit" at any time.

## Files and file structure
`harness.c` contains the source code for the program, with `harness` being the compiled output.
`test.sh` is a very simple Bash script (for Linux/mac) that feeds a couple of input strings to the compiled program `harness` to verify its outputs.
`vibe_coding_log.md` is a Markdown file containing the prompts and responses for an AI (in this case GitHub Copilot) to generate the program and Bash script. Throughout the project, specification-driven development (SDD) was used, where a rigorous specification of the program was fed in, and tweaks were made to the specification if a bug was found or a new feature were to be implemented (in this case, the AI-generated "vibe" code worked first try, so no updates were needed).

Last updated: 2026/08/31

*GitHub Copilot was used to vibe-code this project.*