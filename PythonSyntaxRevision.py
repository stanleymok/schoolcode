import sys
from Human import Human #from Human.py import Human class

def main(args):
    tom = Human("tom", 23)
    print(tom.toString())

# i.e. public static void main(String args[]) in Java 
# or int main(void) in C
if __name__ == '__main__':
    main(sys.argv);
