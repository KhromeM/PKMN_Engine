import json

file = open("../data/gen1.json", "r")

obj = json.load(file)
mons = obj["species"]
i = 0
for name,mon in mons.items():
    mon["id"] = i
    i += 1

file.close()

file = open("../data/gen1.json", "w")
file.write(json.dumps(obj))
file.close()



    
