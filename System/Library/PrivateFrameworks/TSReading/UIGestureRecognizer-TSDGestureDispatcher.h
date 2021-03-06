//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

#import <TSReading/TSDGesture-Protocol.h>

@class NSString, TSDRep;
@protocol TSDGestureDelegate, TSDGestureTarget;

@interface UIGestureRecognizer (TSDGestureDispatcher) <TSDGesture>
- (_Bool)isDone;	// IMP=0x00000000001f7b5d
@property(readonly, nonatomic) int gestureState;
@property(nonatomic) id <TSDGestureDelegate> gestureDelegate;
- (struct CGPoint)naturalLocationForRep:(id)arg1;	// IMP=0x00000000001f7a0b
- (struct CGPoint)boundsLocationForICC:(id)arg1;	// IMP=0x00000000001f79dd
- (struct CGPoint)unscaledLocationForICC:(id)arg1;	// IMP=0x00000000001f7990
@property(retain, nonatomic) TSDRep *targetRep;
@property(retain, nonatomic) id <TSDGestureTarget> cachedGestureTarget;
@property(retain, nonatomic) NSString *gestureKind;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;	// IMP=0x00000000001f78ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

