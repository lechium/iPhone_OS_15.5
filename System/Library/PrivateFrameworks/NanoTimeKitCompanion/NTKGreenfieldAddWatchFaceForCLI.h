//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKGreenfieldAddWatchFaceManagerDelegate-Protocol.h>

@class NSString, NTKGreenfieldAddWatchFaceManager;

@interface NTKGreenfieldAddWatchFaceForCLI : NSObject <NTKGreenfieldAddWatchFaceManagerDelegate>
{
    NTKGreenfieldAddWatchFaceManager *_addWatchFaceManager;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000ce7c4
- (void)didStartLoadingInAddWatchFaceManager:(id)arg1;	// IMP=0x00000000000ce7be
- (void)addWatchFaceManager:(id)arg1 updateStateToWelcomeWithCanAddFaceDirectly:(_Bool)arg2;	// IMP=0x00000000000ce69a
- (void)addWatchFaceManager:(id)arg1 updateStateToRevisitComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;	// IMP=0x00000000000ce592
- (void)addWatchFaceManager:(id)arg1 updateStateToComplicationsNotAvailableWithSlots:(id)arg2 unavailableTitle:(id)arg3 unavailableDescription:(id)arg4;	// IMP=0x00000000000ce48a
- (void)addWatchFaceManager:(id)arg1 updateStateToCompletedWithSkippedComplicationSlots:(id)arg2 canRevisit:(_Bool)arg3;	// IMP=0x00000000000ce382
- (void)addWatchFaceManager:(id)arg1 updateStateToAddComplicationWithItemId:(id)arg2 installMode:(long long)arg3 skippedComplicationSlots:(id)arg4;	// IMP=0x00000000000ce27d
- (void)addWatchFaceManager:(id)arg1 didFinishAddingFaceWithError:(id)arg2;	// IMP=0x00000000000ce188
- (void)addWatchFaceWithURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ce0da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

