//
//  DataSource.h
//  Blocstagram
//
//  Created by Stephen Kaiser on 7/13/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error); //defined completion block that tells us if there is an error basically (I think).


@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, strong, readonly) NSString *accessToken;

- (void) deleteMediaItem:(Media *)item; //enables us to modify the array. otherwise trapped in DataSoruce.
- (void) requestNewItemWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

+ (NSString *) instagramClientID;



@end
