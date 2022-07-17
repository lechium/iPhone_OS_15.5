//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;	// 8 = 0x8
    UILongPressGestureRecognizer *_longPressGesture;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000103d4f2
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)longPressObserved:(id)arg1;	// IMP=0x000000000103d411
- (void)_createGestureRecognizersIfNecessary;	// IMP=0x000000000103d2cd
- (void)_removeGestureRecognizers;	// IMP=0x000000000103d25d
- (void)_addGestureRecognizers;	// IMP=0x000000000103d1e0
- (void)didMoveToView:(id)arg1;	// IMP=0x000000000103d1a9
- (void)willMoveToView:(id)arg1;	// IMP=0x000000000103d190

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
