//
//  Person.h
//  MicroEDAD
//
//  Created by Estudiante on 14/08/14.
//  Copyright (c) 2014 Diego Zapata Murillo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    NSString * name;
    int age;
    
    

    
    
}


//set age



-(void)setAge: (int)value;



//get age

-(int)age;


//set name
-(void)setName: (NSString*)value;



//get name
-(NSString*)name;






-(BOOL)IsUserAdult;



@end
