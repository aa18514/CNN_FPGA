package Net;
import utilities.tuple; 
import java.util.Scanner; 
import java.util.*; 
import java.io.*;

public class network_parameters{
	public int[] parameters = new int[100]; 
	public static int operating_freqeuncy;
	public int[][] conv_layer = new int[100][100]; 
	//boolean sliding_window = false; 
	boolean frequency = false; 
	int i_conv         = 0; 
	int i_pool         = 0; 
	int i_lrn    	   = 0; 
	boolean co = false; 
	boolean ml = false; 
	boolean fl = false; 
	boolean sl = false; 
	public ArrayList<Integer> conv = new ArrayList<Integer>(); 	
	public ArrayList<Integer> sliding_window = new ArrayList<Integer>();
	public ArrayList<Integer> max_pool = new ArrayList<Integer>(); 
	public ArrayList<Integer> fully_connected = new ArrayList<Integer>(); 
	public void readFromFile(){
		try{
			File f = null; 
			f = new File("lenet.prototxt"); 
			if(!f.exists()){ 
				f.createNewFile(); 
			}
			Scanner scanner = new Scanner(f);  
			int i = 0; 
			while(scanner.hasNextLine()){
				String currentLine = scanner.nextLine(); 
				String words[] = currentLine.split(" "); 
				for(String str : words){
					if(str.equals("sliding_window")){
						sl = true; 
						co = false; 
						fl = false; 
						ml = false; 
					}
					else if(str.equals("conv")){
						co = true; 	
						sl = false; 
						fl = false; 
						ml = false;
					}
					else if(str.equals("FC")){
						sl = false; 
						co = false; 	
						fl = true; 
						ml = false; 
					}
					else if(str.equals("pool")){
						sl = false; 	
						co = false; 
						fl = false; 
						ml = true; 
					}

					try{ 
						int num = Integer.parseInt(str); 			
						parameters[i] = num; 
						if(co == true){
							conv.add(num); 
						}
						else if(sl == true){ 
							sliding_window.add(num); 
						}
						else if(ml == true){
							max_pool.add(num); 
						}
						else if(fl == true){
							fully_connected.add(num); 
						}
						i++; 
					}catch(NumberFormatException nfe) {}; 
				}
			}
		}catch(IOException e){
			e.printStackTrace(); 
		}
	}
	private int n_filters, n_multipliers, image_dimension; 	
	public network_parameters(){
	}

	public int get_filters(){
		return n_filters; 
	}
	
	
	public int get_number_of_multipliers(){
		return n_multipliers; 
	}
	
	public int get_image_width(){
		return image_dimension;
	}
};
 

