def func():
    hoge = 1000
    if 'foo' in globals():
        print "foo is global"
    if 'hoge' in globals():
        print "hoge is global"

        
if __name__ == "__main__":
    foo = 5
    func()
