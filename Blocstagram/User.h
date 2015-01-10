//
//  User.h
//  Blocstagram
//
//  Created by Matthew Yang on 12/24/14.
//  Copyright (c) 2014 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface User : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;

- (instancetype)initWithDictionary:(NSDictionary *)userDictionary;

@end
