""" usage: copy_dir.py [-h] [-c cdir] [-d dest_dir]

Copy "copy_dir" to destination directory with all files. ovewrite enabled.

optional arguments:
  -h, --help            show this help message and exit
  -c cdir, --copy_dir cdir
  -d dest_dir, --destination_dir dest_dir
"""
import os
import shutil
import argparse
from pathlib import Path

def copy_folder(c_path,d_path):
    if not os.path.exists(c_path):
        print('Path not found: {}'.format(c_path))
        return    
    shutil.copytree(Path(c_path),Path(d_path)) 
    return(print('{} created'.format(d_path))) 

def main():
    # Initiate argument parser
    parser = argparse.ArgumentParser(
        description="Copy dir to destination dir with all files. ovewrite enabled.",
        formatter_class=argparse.RawTextHelpFormatter
    )
    parser.add_argument(
        '-c','--copy_dir',
        type=str,
        help='Copy dir'
    )    
    parser.add_argument(
        '-d', '--destination_dir',
        help='destination dir',
        type=str
    )
    args = parser.parse_args()
    # Now we are ready to start the iteration
    copy_folder(args.copy_dir,args.destination_dir)

print("python started")
if __name__ == '__main__':
    main()