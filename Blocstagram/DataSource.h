//
//  DataSource.h
//  Blocstagram
//
//  Created by Matthew Yang on 12/24/14.
//  Copyright (c) 2014 Tmrw, Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject

+ (instancetype)sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@property (nonatomic, strong, readonly) NSString *accessToken;

- (void)deleteMediaItem:(Media *)item;

- (void)requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

- (void)requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

+ (NSString *)instagramClientID;

@end
