//
//  ViewController.h
//  Fraction_Calculator
//
//  Created by Daniel Rector on 6/3/14.
//  Copyright (c) 2014 Daniel. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Calculator.h"

@interface ViewController : UIViewController

@property (strong, nonatomic) IBOutlet UILabel *display;

-(void) processDigit: (int) digit;
-(void) processOp: (char) theOp;
-(void) storeFracPart;

//numeric keys

-(IBAction)clickDigit:(UIButton *)sender;

//arithmetic operation keys

-(IBAction) clickPlus;
-(IBAction) clickMinus;
-(IBAction) clickMultiply;
-(IBAction) clickDivide;

//misc. keys

-(IBAction) clickOver;
-(IBAction) clickEquals;
-(IBAction) clickClear;

@end
