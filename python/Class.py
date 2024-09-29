class person:
    def __init__(self, n , c , s):
        self.name=n
        self.course=c
        self.stream=s
    def info(self):
        print(f"{self.name} {self.course} {self.stream}")
a=person("utkarsh","btech","csai")
a.info()
