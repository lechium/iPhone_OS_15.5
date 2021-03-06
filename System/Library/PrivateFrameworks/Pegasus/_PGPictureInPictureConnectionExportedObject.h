//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Pegasus/PGPictureInPictureExportedInterface-Protocol.h>

@class NSString, PGPictureInPictureProxy;

__attribute__((visibility("hidden")))
@interface _PGPictureInPictureConnectionExportedObject : NSObject <PGPictureInPictureExportedInterface>
{
    PGPictureInPictureProxy *_pictureInPictureProxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000041d36
- (oneway void)handleCommand:(id)arg1;	// IMP=0x0000000000041cdc
- (oneway void)setResourcesUsageReductionReasons:(unsigned long long)arg1;	// IMP=0x0000000000041ca6
- (oneway void)setStashedOrUnderLock:(_Bool)arg1;	// IMP=0x0000000000041c70
- (oneway void)actionButtonTapped;	// IMP=0x0000000000041c3f
- (oneway void)hostedWindowSizeChangeEnded;	// IMP=0x0000000000041c0e
- (oneway void)hostedWindowSizeChangeBegan;	// IMP=0x0000000000041bdd
- (oneway void)updateHostedWindowSize:(struct CGSize)arg1 animationType:(long long)arg2 initialSpringVelocity:(double)arg3 synchronizationFence:(id)arg4;	// IMP=0x0000000000041b5c
- (oneway void)pictureInPictureInvalidated;	// IMP=0x0000000000041b2b
- (oneway void)updatePictureInPicturePossible:(_Bool)arg1;	// IMP=0x0000000000041af5
- (oneway void)pictureInPictureCancelRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041a95
- (oneway void)endTwoStagePictureInPictureStopWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000041a3b
- (oneway void)beginTwoStagePictureInPictureStopByRestoringUserInterfaceWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000419e1
- (oneway void)pictureInPictureStopRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041981
- (oneway void)pictureInPictureStartRequestedAnimated:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000041921
- (void)dealloc;	// IMP=0x00000000000418ab
- (id)initWithPictureInPictureProxy:(id)arg1;	// IMP=0x0000000000041802

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

