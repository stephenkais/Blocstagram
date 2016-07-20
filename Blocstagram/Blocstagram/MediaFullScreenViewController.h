//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Stephen Kaiser on 7/19/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>


@class Media, MediaTableViewCell;

@protocol MediaTableViewCellDelegate <NSObject>

- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;

@end

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end


