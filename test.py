import os
import subprocess

def play_sound(file_path):
    subprocess.call(["paplay",file_path])

file_path = "file_path_for_sound_file"
play_sound(file_path)
