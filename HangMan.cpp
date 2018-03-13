#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> allWords {
  "ability",
  "able",
  "abo",
  "answer",
  "any",
  "anyone",
  "anything",
  "appear",
  "apply",
  "box",
  "boy",
  "break",
  "bring",
  "brother",
  "budget",
  "build",
  "building",
  "business",
  "but",
  "buy",
  "by",
  "call",
  "camera",
  "campaign",
  "can",
  "cancer",
  "candidate",
  "capital",
  "car",
  "c",
  "consider",
  "consumer",
  "contain",
  "continue",
  "control",
  "cost",
  "could",
  "country",
  "couple",
  "cou",
  "doctor",
  "dog",
  "door",
  "down",
  "draw",
  "dream",
  "drive",
  "drop",
  "drug",
  "during",
  "each",
  "early",
  "east",
  "easy",
  "ea",
  "five",
  "floor",
  "fly",
  "focus",
  "follow",
  "fo",
  "heavy",
  "help",
  "her",
  "here",
  "herself",
  "high",
  "h",
  "issue",
  "it",
  "item",
  "its",
  "itself",
  "job",
  "join",
  "just",
  "keep",
  "key",
  "ki",
  "many",
  "market",
  "marriage",
  "material",
  "ma",
  "note",
  "party",
  "pass",
  "past",
  "patient",
  "pattern",
  "pay",
  "peace",
  "peop",
  "probably",
  "problem",
  "process",
  "produce",
  "product",
  "production",
  "professional",
  "professor",
  "progra",
  "reflect",
  "region",
  "relate",
  "relationship",
  "religious",
  "remain",
  "remember",
  "re",
  "sense",
  "series",
  "serious",
  "serve",
  "service",
  "set",
  "seven",
  "several",
  "sex",
  "source",
  "south",
  "southern",
  "space",
  "spe",
  "suddenly",
  "suffer",
  "sugg",
  "total",
  "tough",
  "toward",
  "town",
  "tra",
  "western",
  "what",
  "whatever",
  "when",
  "where",
  "whether",
  "yeah",
  "year",
  "yes",
  "yet",
  "you",
  "young",
  "your",
  "yourself"
};

string randomWord(){
  srand (time(NULL));
  int size = allWords.size();
  int wordCount = rand()%size;
  return allWords[wordCount];
}

int main(){
  string result = "win";
  string word = randomWord();
  cout << endl;
  string hidenWord = "";
  int lifes = 6;
  for(int i = 0; i < word.size(); ++i){
    hidenWord += "_";
  }
  cout<<endl;
  char inputLetter;
  while (hidenWord != word) {
    bool flag = false;
    cin >> inputLetter;
    cout<<endl;
    for (int i = 0; i < word.size(); ++i) {
      if(word[i] == inputLetter){
        flag = true;
        hidenWord[i] = inputLetter;
      }
    }
    if(!flag){
      --lifes;
    }
    system("clear");
    cout << "lifes = " << lifes << endl
          << "hidenWord = " << hidenWord << endl;
    if(lifes == 0){
      result = "loose";
      break;
    }
  }
  cout << result << endl;
  return 0;
}
