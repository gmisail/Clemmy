package;

class Main{
	
	/* File reader; reads and parses the code */
	public static var reader:Reader;

	/* The code that is being read */
	public static var file:String;

	/* Arguments through the clemmy command */
	public static var args:Array<Dynamic>;

	public static function main(){
		args = Sys.args();
		reader = new Reader(args[0]);
		
		if(args[0] == null){
			Output.println("No file found! Make sure the file has an .clem extension or the file exists!");
		}else{
			reader.get("z");
		}
	}

}