//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface SSSScreenshotManager : NSObject
{
    NSMutableArray *_screenshots;	// 8 = 0x8
    NSMutableArray *_environmentDescriptionIdentifiersUIIsInterestedIn;	// 16 = 0x10
    NSMutableArray *_environmentDescriptionIdentifiersGoingAway;	// 24 = 0x18
    NSMutableArray *_environmentDescriptionIdentifiersInActiveDragSession;	// 32 = 0x20
    NSMutableArray *_environmentDescriptionIdentifiersBeingRemoved;	// 40 = 0x28
    NSMutableArray *_environmentDescriptionIdentifiersBeingSaved;	// 48 = 0x30
    NSMutableArray *_imageIdentifierUpdateObservers;	// 56 = 0x38
}

+ (id)sharedScreenshotManager;	// IMP=0x00200000000161ae
+ (void)_createTemporarySavingQueue;	// IMP=0x00100000000146e9
- (void).cxx_destruct;	// IMP=0x002000000001623f
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingSaved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingRemoved;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersInActiveDragSession;
- (id)environmentDescriptionIdentifiersGoingAway;	// IMP=0x0010000000016176
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersUIIsInterestedIn;
@property(readonly, nonatomic) NSArray *environmentDescriptionIdentifiersBeingTracked;
- (id)description;	// IMP=0x0010000000015cc0
- (id)init;	// IMP=0x0010000000015b88
- (void)_reallyStopTrackingScreenshot:(id)arg1;	// IMP=0x00100000000159c7
- (void)_trackingChanged;	// IMP=0x001000000001596d
- (void)_screenshotsNoLongerBeingActiveMayHaveChanged;	// IMP=0x0010000000015895
- (void)_reevaluateTrackingForScreenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x00100000000157ce
- (void)performIfNoScreenshotsAreActive:(CDUnknownBlockType)arg1;	// IMP=0x0010000000015791
- (void)screenshotLeftDragSession:(id)arg1;	// IMP=0x0010000000015705
- (void)screenshotEnteredDragSession:(id)arg1;	// IMP=0x001000000001567c
- (void)userInterfaceStoppedBeingInterestedInScreenshot:(id)arg1;	// IMP=0x00100000000155f0
- (void)userInterfaceWillStopBeingInterestedInScreenshot:(id)arg1;	// IMP=0x0010000000015574
- (void)userInterfaceBecameInterestedInScreenshot:(id)arg1;	// IMP=0x00100000000154eb
- (_Bool)_areAnyScreenshotsActive;	// IMP=0x0010000000015389
- (_Bool)_screenshotIsBeingRemoved:(id)arg1;	// IMP=0x0010000000015311
- (_Bool)_screenshotIsGoingAway:(id)arg1;	// IMP=0x0010000000015299
- (void)removeTemporaryScreenshotLocation:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000015108
- (void)removeScreenshot:(id)arg1 deleteOptions:(unsigned long long)arg2;	// IMP=0x0010000000014ca4
- (void)saveScreenshotsToTemporaryLocation:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014739
- (_Bool)_screenshotIsBeingSaved:(id)arg1;	// IMP=0x0010000000014671
- (void)saveEditsToScreenshotIfNecessary:(id)arg1 inTransition:(_Bool)arg2;	// IMP=0x0010000000013ac8
- (void)removeImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000013ab2
- (void)addImageIdentifierUpdateObserver:(id)arg1;	// IMP=0x0010000000013902
- (void)processEnvironmentElementDocumentUpdate:(id)arg1;	// IMP=0x0010000000013556
- (_Bool)processEnvironmentElementMetadataUpdate:(id)arg1;	// IMP=0x0010000000013195
- (_Bool)shouldCaptureDocumentForMetadataUpdate:(id)arg1;	// IMP=0x0010000000012ec8
- (void)processImageIdentifierUpdate:(id)arg1;	// IMP=0x0010000000012c05
- (id)_screenshotWithEnvironmentElementWithIdentifier:(id)arg1;	// IMP=0x00100000000128bc
- (id)_screenshotWithEnvironmentDescriptionIdentifier:(id)arg1;	// IMP=0x00100000000126ba
- (id)createScreenshotWithEnvironmentDescription:(id)arg1;	// IMP=0x001000000001264d

@end

