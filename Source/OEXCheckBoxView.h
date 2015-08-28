//
//  OEXCheckBoxView.h
//  edXVideoLocker
//
//  Created by Jotiram Bhagat on 17/02/15.
//  Copyright (c) 2015 edX. All rights reserved.
//

#import <UIKit/UIKit.h>

IB_DESIGNABLE
@interface OEXCheckBoxView : UIView
- (void)setLabelText:(NSString*)title IBInspectable;

@property (nonatomic) BOOL selected IBInspectable;
@end
