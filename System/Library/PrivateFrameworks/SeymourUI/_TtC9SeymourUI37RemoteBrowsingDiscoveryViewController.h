//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class MISSING_TYPE, NSArray, UILabel;

__attribute__((visibility("hidden")))
@interface _TtC9SeymourUI37RemoteBrowsingDiscoveryViewController : UIViewController
{
    MISSING_TYPE *layout;	// 8 = 0x8
    MISSING_TYPE *presenter;	// 64 = 0x40
    MISSING_TYPE *dataSource;	// 72 = 0x48
    MISSING_TYPE *collectionView;	// 80 = 0x50
    MISSING_TYPE *currentlyConnectingCell;	// 88 = 0x58
    MISSING_TYPE *titleLabel;	// 96 = 0x60
    MISSING_TYPE *indicatorView;	// 104 = 0x68
    MISSING_TYPE *menuGestureRecognizer;	// 112 = 0x70
    MISSING_TYPE *playPauseGestureRecognizer;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000010e300
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000010e2a0
@property(nonatomic, readonly) UILabel *accessibilityTitleLabel;
- (void)handleMenuButtonTapped;	// IMP=0x000000000010df50
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000010df10
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000010dd60
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000010da50
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000010da30
- (void)viewDidLoad;	// IMP=0x000000000010da00
- (void)handleKohnahmiCodeSequence;	// IMP=0x000000000010d070
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000010d050
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;

@end
