//
//  ViewController.h
//  MicroEDAD
//
//  Created by Estudiante on 14/08/14.
//  Copyright (c) 2014 Diego Zapata Murillo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UITextField *userText;

@property (strong, nonatomic) IBOutlet UITextField *userAgeText;



@property (strong, nonatomic) IBOutlet UILabel *responseUser;



- (IBAction)validateUserAge:(id)sender{

    NSlog(@"El usuario es: %@", _userNameText.text);
    
    NSLog(@"la edad es: %i", -[userAgeText.text invalue]);



}




@end
