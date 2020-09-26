//inelegant solution to the balanced ish
string a(string input){
    string c{};
    //a for {} , b for () , c for []
for(char b : input){
	if(b == '{'){
		c.push_back('a');
	}else if(b == '('){
		c.push_back('b');
	}else if(b == '['){
		c.push_back('c');
	}else if(b == '}'){
		if(c.back() == 'a'){
		    c.pop_back();
		}else{
		    return "NO";
		}
	}
	else if(b == ']'){
		if(c.back() == 'c'){
		    c.pop_back();
		}else{
		    return "NO";
		}
	}
	else if(b == ')'){
		if(c.back() == 'b'){
		    c.pop_back();
		}
		else{
		    return "NO";
		}
	}
};
return "YES";
};
