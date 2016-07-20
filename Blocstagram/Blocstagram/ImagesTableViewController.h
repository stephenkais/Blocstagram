//
//  ImagesTableViewController.h
//  Blocstagram
//
//  Created by Stephen Kaiser on 7/12/16.
//  Copyright © 2016 Bloc. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MediaTableViewCell.h"

@interface ImagesTableViewController : UITableViewController

- (void) cell:(MediaTableViewCell *)cell didLongPressImageView:(UIImageView *)imageView;

@end
