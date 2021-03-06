//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlacesKit/PXPlacesMapUpdatePlanResult-Protocol.h>

@class NSMutableSet, NSString;

@interface PXPlacesMapUpdatePlanResultImpl : NSObject <PXPlacesMapUpdatePlanResult>
{
    NSMutableSet *_annotationsToAddImmediately;	// 8 = 0x8
    NSMutableSet *_annotationsToRemoveImmediately;	// 16 = 0x10
    NSMutableSet *_annotationsToRemoveAfterAnimationHasStarted;	// 24 = 0x18
    NSMutableSet *_annotationsToRemoveAfterAnimationHasEnded;	// 32 = 0x20
    NSMutableSet *_annotationsToRedraw;	// 40 = 0x28
    NSMutableSet *_annotationsWithUpdatedIndex;	// 48 = 0x30
    NSMutableSet *_overlaysToAddImmediately;	// 56 = 0x38
    NSMutableSet *_overlaysToRemoveImmediately;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000078c9
@property(readonly) NSMutableSet *overlaysToRemoveImmediately; // @synthesize overlaysToRemoveImmediately=_overlaysToRemoveImmediately;
@property(readonly) NSMutableSet *overlaysToAddImmediately; // @synthesize overlaysToAddImmediately=_overlaysToAddImmediately;
@property(readonly) NSMutableSet *annotationsWithUpdatedIndex; // @synthesize annotationsWithUpdatedIndex=_annotationsWithUpdatedIndex;
@property(readonly) NSMutableSet *annotationsToRedraw; // @synthesize annotationsToRedraw=_annotationsToRedraw;
@property(readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasEnded; // @synthesize annotationsToRemoveAfterAnimationHasEnded=_annotationsToRemoveAfterAnimationHasEnded;
@property(readonly) NSMutableSet *annotationsToRemoveAfterAnimationHasStarted; // @synthesize annotationsToRemoveAfterAnimationHasStarted=_annotationsToRemoveAfterAnimationHasStarted;
@property(readonly) NSMutableSet *annotationsToRemoveImmediately; // @synthesize annotationsToRemoveImmediately=_annotationsToRemoveImmediately;
@property(readonly) NSMutableSet *annotationsToAddImmediately; // @synthesize annotationsToAddImmediately=_annotationsToAddImmediately;
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000000745d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

