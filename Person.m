//
//  Person.m
//  MicroEDAD
//
//  Created by Estudiante on 14/08/14.
//  Copyright (c) 2014 Diego Zapata Murillo. All rights reserved.
//

#import "Person.h"

@implementation Person

-(void)setAge: (int)value;{
    age=value;
}


-(int)age  {
    return age;
}

-(void)setName: (NSString*)value {
    name=value;
}


-(NSString*)name {
    return name;
}

-(BOOL)IsUserAdult  {
    if (age>=18) {
        return YES;
    }
    return NO;

}



@end
