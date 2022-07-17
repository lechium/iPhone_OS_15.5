//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/_SKUIStatusBarAlertViewControllerDelegate-Protocol.h>

@class NSString, _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController;

__attribute__((visibility("hidden")))
@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>
{
    double _duration;	// 8 = 0x8
    CDUnknownBlockType _actionBlock;	// 16 = 0x10
    _SKUIClickThroughWindow *_window;	// 24 = 0x18
    _SKUIStatusBarAlertViewController *_rootViewController;	// 32 = 0x20
}

+ (id)sharedCenter;	// IMP=0x00000000002aef79
- (void).cxx_destruct;	// IMP=0x00000000002af9e9
@property(readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) _SKUIClickThroughWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;	// IMP=0x00000000002af926
- (void)dismiss;	// IMP=0x00000000002af78f
- (void)scheduleDismiss;	// IMP=0x00000000002af74c
- (void)unscheduleDismiss;	// IMP=0x00000000002af726
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000002af1fc
@property(readonly, copy, nonatomic) NSString *message;
@property(nonatomic, getter=isVisible) _Bool visible;
- (id)init;	// IMP=0x00000000002aefce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
