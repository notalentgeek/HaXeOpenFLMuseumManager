from wordnik import *
import sys
def WordnikGetPhrase(_searchString):
    searchString = _searchString
    apiURLString = 'http://api.wordnik.com:80/v4'
    apiKeyString = '9ddeb48147ef08e7370070b822809415eaec1f51d3786e7f6'
    clientObject = swagger.ApiClient(apiKeyString, apiURLString)
    wordAPIObject = WordApi.WordApi(clientObject)
    exampleObjectArray = wordAPIObject.getPhrases(searchString, limit = 10, wlmi = 0, useCanonical = False)
    for indexInt in range(0, len(exampleObjectArray)):
        if exampleObjectArray[indexInt].gram1 == searchString:
            print(searchString + " " + exampleObjectArray[indexInt].gram2)
        elif exampleObjectArray[indexInt].gram2 == searchString:
            print(exampleObjectArray[indexInt].gram1 + " " + searchString)

if __name__ == '__main__':
    _searchString = str(sys.argv[1])
    WordnikGetPhrase(_searchString)
