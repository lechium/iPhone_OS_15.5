//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/FBSDisplayObserving-Protocol.h>
#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class FBSDisplayMonitor, NSMutableDictionary, NSString;

@interface _UISystemGestureManager : NSObject <UIGestureRecognizerDelegate, FBSDisplayObserving>
{
    NSMutableDictionary *_displayIdentityToManagerMap;	// 8 = 0x8
    FBSDisplayMonitor *_displayMonitor;	// 16 = 0x10
}

+ (id)_sharedInstanceIfExists;	// IMP=0x0000000000799e45
+ (void)_cancelTouchesWithIdentifiers:(id)arg1 forDisplayWithIdentity:(id)arg2;	// IMP=0x0000000000799ad1
+ (id)sharedInstance;	// IMP=0x000000000079922a
- (void).cxx_destruct;	// IMP=0x0000000000799f9c
- (void)displayMonitor:(id)arg1 willDisconnectIdentity:(id)arg2;	// IMP=0x0000000000799f83
- (id)_systemGestureManagerForDisplayWithIdentityCreatingIfNeeded:(id)arg1;	// IMP=0x0000000000799e56
- (void)clearTransformFromDisplayWithIdentity:(id)arg1;	// IMP=0x0000000000799a94
- (void)setTransform:(struct CGAffineTransform)arg1 onDisplayWithIdentity:(id)arg2;	// IMP=0x000000000079998b
- (id)windowForSystemGesturesForDisplayWithIdentity:(id)arg1;	// IMP=0x0000000000799882
- (void)removeGestureRecognizer:(id)arg1 fromDisplayWithIdentity:(id)arg2;	// IMP=0x000000000079969f
- (void)addGestureRecognizer:(id)arg1 recognitionEvent:(long long)arg2 toDisplayWithIdentity:(id)arg3;	// IMP=0x000000000079959c
- (void)addGestureRecognizer:(id)arg1 toDisplayWithIdentity:(id)arg2;	// IMP=0x00000000007994a1
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000007993a6
- (id)init;	// IMP=0x000000000079927f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

