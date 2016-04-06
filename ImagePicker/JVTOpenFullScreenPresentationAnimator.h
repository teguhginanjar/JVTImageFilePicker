//
//  JVTOpenFullScreenPresentationAnimator.h
//  ImagePicker
//
//  Created by Matan Cohen on 4/5/16.
//  Copyright © 2016 Matan Cohen. All rights reserved.
//

#import <Foundation/Foundation.h>
@import UIKit;

@interface JVTOpenFullScreenPresentationAnimator : NSObject <UIViewControllerAnimatedTransitioning>
@property (nonatomic, assign)    CGRect openingFrame;
@end