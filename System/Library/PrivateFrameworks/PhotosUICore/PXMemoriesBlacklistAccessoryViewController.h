//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSArray, PXMemoriesBlacklistAccessoryViewSpec, UIView;

@interface PXMemoriesBlacklistAccessoryViewController : UIViewController
{
    UIView *_accessoryView;	// 8 = 0x8
    PXMemoriesBlacklistAccessoryViewSpec *_viewSpec;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e38a3
@property(copy, nonatomic, setter=_setConstraints:) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) PXMemoriesBlacklistAccessoryViewSpec *viewSpec; // @synthesize viewSpec=_viewSpec;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)updateViewConstraints;	// IMP=0x00000000001e35f7
- (struct CGSize)preferredContentSize;	// IMP=0x00000000001e34f7
- (void)didReceiveMemoryWarning;	// IMP=0x00000000001e34c8
- (void)viewDidLoad;	// IMP=0x00000000001e342e
- (id)initWithAccessoryView:(id)arg1 viewSpec:(id)arg2;	// IMP=0x00000000001e3388
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e3305
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001e3275

@end

