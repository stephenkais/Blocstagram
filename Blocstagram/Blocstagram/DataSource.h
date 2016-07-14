//
//  DataSource.h
//  Blocstagram
//
//  Created by Stephen Kaiser on 7/13/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Media;
@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;

- (void) deleteMediaItem:(Media *)item; //enables us to modify the array. otherwise trapped in DataSoruce.
- (void) deleteAndInsertMediaItem:(Media *)item current_index:(NSUInteger)current_index desiredIndex:(NSUInteger)desired_index;


@end
