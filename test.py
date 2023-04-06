#this program is used to play the sound file which acts as an alarm
#mp3 or .wav files may be used
#sample .wav files is provided

import os
import subprocess


def play_sound(file_path):
    subprocess.call(["paplay",file_path])

#place the filepath for the sound file you want as your alarm
file_path = "file_path_for_sound_file"
play_sound(file_path)
