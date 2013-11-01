//
//  ViewController.h
//  Test
//
//  Created by Jaison Joseph on 11/1/13.
//  Copyright (c) 2013 Jaison Joseph. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *username;

@property (strong, nonatomic) IBOutlet UITextField *password;

@end
