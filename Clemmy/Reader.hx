package;

import sys.io.File;

class Reader{
	
	var file:Array<String>;

	public function new(data:String){
		var _tempData = File.getContent(data);
		file = _tempData.split(" ");
	}

	public function get(id:String):Dynamic{
		for(i in 0...file.length){
			if(file[i] == id){
				return file[i + 1];
			}
		}

		return "No Property Found";
	}

}