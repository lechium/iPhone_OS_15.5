//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISplitViewController.h>

@class MISSING_TYPE, NSArray, NSUndoManager;

@interface _TtC9Reminders22TTRIRootViewController : UISplitViewController
{
    MISSING_TYPE *presenter;	// 8 = 0x8
    MISSING_TYPE *mainNavigationController;	// 24 = 0x18
    MISSING_TYPE *detailNavigationController;	// 32 = 0x20
    MISSING_TYPE *ttrMainViewController;	// 40 = 0x28
    MISSING_TYPE *pendingNavigateToRootPromise;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00400000001b9cc0
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000001b9c90
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000001b9c60
@property(nonatomic, readonly) NSArray *keyCommands;
- (id)targetForAction:(SEL)arg1 withSender:(id)arg2;	// IMP=0x00100000001b9a20
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00100000001b97e0
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000001b97c0
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001b96d0

@end
