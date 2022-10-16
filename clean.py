"""
created by Ruibin Zhang.

Using this script to delete executables
in the current directory and subdirectories.
"""

import os
from stat import *
for fpathe, dirs, fs, in os.walk("."):
    for f in fs:
        file_abs_path = os.path.join(fpathe, f)
        mod = os.lstat(file_abs_path).st_mode
        if oct(mod).__str__()[-3:] == "775":
            os.remove(file_abs_path)
            print("delete file: %s\n" % file_abs_path)

    
