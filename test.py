import os
import subprocess

def play_sound(file_path):
    subprocess.call(["paplay",file_path])

file_path = "/home/god/code/pomodoro/pomo/al1.wav"
play_sound(file_path)
