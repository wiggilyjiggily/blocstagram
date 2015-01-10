//
//  Comment.h
//  Blocstagram
//
//  Created by Matthew Yang on 12/24/14.
//  Copyright (c) 2014 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;

- (instancetype)initWithDictionary:(NSDictionary *)commentDictionary;

@end
