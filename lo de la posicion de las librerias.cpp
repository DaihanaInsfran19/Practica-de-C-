 int posi_mat_val_igual_max=0;
    
    cout<<"posision de las cantidades de libros igual al valor maximo entre los de matematica:";
    
	for(int f=0;f<3;f++){
	for(int c=0;c<5;c++){
	  posi_mat_val_igual_max=0;
       if(libreria[f][c] ==val_maximo){
         if(c==1){
         	if(f<3){
         	 posi_mat_val_igual_max=c+1;
      val_maximo=posi_mat_val_igual_max ;
     	
         	cout<<posi_mat_val_igual_max<<endl;	
			 }
		 }
       
    } 
    
    }
}
    cout<<endl;  
	
	
	int posi_his_val_igual_max=0;
    
    cout<<"posision de las cantidades de libros igual al valor maximo entre los de historia:";
    
	for(int f=0;f<3;f++){
	for(int c=0;c<5;c++){
	  posi_his_val_igual_max=0;
       if(libreria[f][c] ==val_maximo){
         if(c==2){
         	if(f<3){
         	 posi_his_val_igual_max=c+1;
      val_maximo=posi_his_val_igual_max ;
     	
         	cout<<posi_his_val_igual_max<<endl;	
			 }
		 }
       
    } 
    
    }
}
    cout<<endl;
	
	int posi_est_val_igual_max=0;
    
    cout<<"posision de las cantidades de libros igual al valor maximo entre los de estadistica:";
    
	for(int f=0;f<3;f++){
	for(int c=0;c<5;c++){
	  posi_est_val_igual_max=0;
       if(libreria[f][c] ==val_maximo){
         if(c==3){
         	if(f<3){
         	 posi_est_val_igual_max=c+1;
      val_maximo=posi_est_val_igual_max ;
     	
         	cout<<posi_est_val_igual_max<<endl;	
			 }
		 }
       
    } 
    
    }
}
    cout<<endl;	 
    
    	int posi_inf_val_igual_max=0;
    
    cout<<"posision de las cantidades de libros igual al valor maximo entre los de informatica:";
    
	for(int f=0;f<3;f++){
	for(int c=0;c<5;c++){
	  posi_inf_val_igual_max=0;
       if(libreria[f][c] ==val_maximo){
         if(c==4){
         	if(f<3){
         	 posi_inf_val_igual_max=c+1;
      val_maximo=posi_inf_val_igual_max ;
     	
         	cout<<posi_inf_val_igual_max<<endl;	
			 }
		 }
       
    } 
    
    }
}
    cout<<endl;
