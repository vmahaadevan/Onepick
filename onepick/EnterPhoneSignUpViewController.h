//
//  EnterPhoneSignUpViewController.h
//  onepick
//
//  Created by yiqin on 5/11/14.
//  Copyright (c) 2014 purdue. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "Account.h"

@interface EnterPhoneSignUpViewController : UIViewController <UIAlertViewDelegate, UITextFieldDelegate>

@property (strong, nonatomic) IBOutlet UITextField *phoneNumber;

@end
