//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray;

@interface PUAirPlayRootViewController : UIViewController
{
    UIViewController *_childViewController;	// 8 = 0x8
    NSArray *__childViewConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005962a
@property(copy, nonatomic, setter=_setChildViewConstraints:) NSArray *_childViewConstraints; // @synthesize _childViewConstraints=__childViewConstraints;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
- (void)setChildViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000592f2
- (void)updateViewConstraints;	// IMP=0x00000000000590db
- (void)viewDidLoad;	// IMP=0x000000000005901e

@end

