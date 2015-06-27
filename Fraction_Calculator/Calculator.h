//
//  Calculator.h
//  Fraction_Calculator
//
//  Created by Daniel Rector on 6/3/14.
//  Copyright (c) 2014 Daniel. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "Fraction.h"

@interface Calculator : NSObject

@property (strong, nonatomic) Fraction *operand1, *operand2, *accumulator;

-(Fraction *) performOperation: (char) op;
-(void) clear;

@end
