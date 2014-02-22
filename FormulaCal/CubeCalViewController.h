//
//  CubeCalViewController.h
//  FormulaCal
//
//  Created by wp on 14-2-21.
//  Copyright (c) 2014年 wp. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CubeCalViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *cubeLength;
@property (weak, nonatomic) IBOutlet UITextField *cubeWidth;
@property (weak, nonatomic) IBOutlet UITextField *cubeHeight;
@property (weak, nonatomic) IBOutlet UITextView *cubeOutput;
@property (weak, nonatomic) IBOutlet UIButton *show;

- (IBAction)calculate:(id)sender;
- (IBAction)showResults:(id)sender;
- (IBAction)clear:(id)sender;
- (IBAction)hideKeyboard:(id)sender;
@end
