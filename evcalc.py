import sys
import glob
import re
from math import floor

def main(args):
  print("Pokemon Calculator")
  print(hpCalc(76, 25, 100, 57))

def hpCalc(base, iv, ev, level):
  return ((2 * base + iv + ev // 4) * level // 100) + level + 10

if __name__ == '__main__':
  args = {}
  lkey = None
  for arg in sys.argv:
    if arg[0] == "-":
      lkey = arg[1:]
      args[lkey] = []
    elif len(args) and lkey is not None:
      args[lkey].append(arg)
  main(args)
