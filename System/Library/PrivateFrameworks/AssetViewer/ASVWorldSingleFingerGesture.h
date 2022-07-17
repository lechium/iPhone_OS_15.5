//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ASVWorldGestureDragOffsetCorrector;
@protocol ASVWorldSingleFingerGestureDelegate;

@interface ASVWorldSingleFingerGesture
{
    id <ASVWorldSingleFingerGestureDelegate> _worldDelegate;	// 8 = 0x8
    ASVWorldGestureDragOffsetCorrector *_dragOffsetCorrector;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001e89b
@property(retain, nonatomic) ASVWorldGestureDragOffsetCorrector *dragOffsetCorrector; // @synthesize dragOffsetCorrector=_dragOffsetCorrector;
@property(nonatomic) __weak id <ASVWorldSingleFingerGestureDelegate> worldDelegate; // @synthesize worldDelegate=_worldDelegate;
- (void)finishGesture;	// IMP=0x000000000001e7bd
- (void)updateTranslation;	// IMP=0x000000000001e57d
- (float)potentialAssetDistanceFromInitialLocationOnScreen;	// IMP=0x000000000001e502
- (void)updateGesture;	// IMP=0x000000000001e4ad
- (id)initWithTouch:(id)arg1 dataSource:(id)arg2 worldDelegate:(id)arg3 enabledGestureTypes:(unsigned long long)arg4;	// IMP=0x000000000001e40c

@end
