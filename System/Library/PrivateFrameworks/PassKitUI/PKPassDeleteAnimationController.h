//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKPassGroupView, PKPassView, UIAlertController;
@protocol PKPassDeleteAnimationControllerDelegate;

@interface PKPassDeleteAnimationController : NSObject
{
    UIAlertController *_alertController;	// 8 = 0x8
    id <PKPassDeleteAnimationControllerDelegate> _delegate;	// 16 = 0x10
    PKPassView *_passView;	// 24 = 0x18
    PKPassGroupView *_groupView;	// 32 = 0x20
}

+ (void)performPassbookDeleteWithView:(id)arg1 inSuperview:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d0bc8
- (void).cxx_destruct;	// IMP=0x00000000000d2354
@property(readonly, retain, nonatomic) PKPassGroupView *groupView; // @synthesize groupView=_groupView;
@property(readonly, retain, nonatomic) PKPassView *passView; // @synthesize passView=_passView;
@property(nonatomic) __weak id <PKPassDeleteAnimationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_applicationDidEnterBackground:(id)arg1;	// IMP=0x00000000000d22d7
- (void)_unregisterForEnterBackgroundNotification;	// IMP=0x00000000000d2277
- (void)_registerForEnterBackgroundNotification;	// IMP=0x00000000000d2210
- (void)_startAnimation;	// IMP=0x00000000000d20eb
- (void)finished:(_Bool)arg1;	// IMP=0x00000000000d2094
- (void)forceDeleteAnimation;	// IMP=0x00000000000d2082
- (void)showInViewController:(id)arg1;	// IMP=0x00000000000d1a8e
- (void)dealloc;	// IMP=0x00000000000d1a50
- (id)initWithPassView:(id)arg1 groupView:(id)arg2;	// IMP=0x00000000000d19b7

@end

