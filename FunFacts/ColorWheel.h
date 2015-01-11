//
//  ColorWheel.h
//  FunFacts
//
//  Created by Richard Mook on 1/11/15.
//  Copyright (c) 2015 Rick Mook. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

-(UIColor *)randomColor;
@end
