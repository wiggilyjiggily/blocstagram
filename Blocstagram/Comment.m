//
//  Comment.m
//  Blocstagram
//
//  Created by Matthew Yang on 12/24/14.
//  Copyright (c) 2014 Tmrw, Inc. All rights reserved.
//

#import "Comment.h"
#import "User.h"

@implementation Comment

- (instancetype)initWithDictionary:(NSDictionary *)commentDictionary {
    self = [super init];
    
    if (self) {
        self.idNumber = commentDictionary[@"id"];
        self.text = commentDictionary[@"text"];
        self.from = [[User alloc] initWithDictionary:commentDictionary[@"from"]];
    }
    return self;
}

@end
