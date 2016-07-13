//
//  DataSource.h
//  Blocstagram
//
//  Created by Stephen Kaiser on 7/13/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;


@end
