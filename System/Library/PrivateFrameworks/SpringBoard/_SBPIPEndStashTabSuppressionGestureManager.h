//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSMutableSet, NSString, UITapGestureRecognizer;

@interface _SBPIPEndStashTabSuppressionGestureManager : NSObject <UIGestureRecognizerDelegate>
{
    NSMutableSet *_targets;	// 8 = 0x8
    UITapGestureRecognizer *_singleTapRecognizer;	// 16 = 0x10
    UITapGestureRecognizer *_doubleTapRecognizer;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00000000005637d0
- (void).cxx_destruct;	// IMP=0x0000000000563f3b
- (void)_removeGestureRecognizers;	// IMP=0x0000000000563d78
- (void)_addSystemRecognizers;	// IMP=0x0000000000563a91
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000563a89
- (void)removeTarget:(id)arg1;	// IMP=0x0000000000563968
- (void)addTarget:(id)arg1;	// IMP=0x0000000000563825

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

