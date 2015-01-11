//
//  FactBook.h
//  FunFacts
//
//  Created by Richard Mook on 1/10/15.
//  Copyright (c) 2015 Rick Mook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

-(NSString *)randomFact;

@end
