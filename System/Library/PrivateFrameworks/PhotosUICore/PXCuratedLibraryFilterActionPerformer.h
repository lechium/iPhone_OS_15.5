//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXFilterControllerDelegate-Protocol.h>
#import <PhotosUICore/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, PXUIFilterController;

@interface PXCuratedLibraryFilterActionPerformer <PXFilterControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    PXUIFilterController *_filterController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000072698e
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000726975
- (void)filterControllerDidComplete:(id)arg1;	// IMP=0x000000000072695c
- (void)filterController:(id)arg1 contentFilterStateChanged:(id)arg2;	// IMP=0x00000000007268e2
- (id)contentFilterHiddenTypesForFilterController:(id)arg1;	// IMP=0x000000000072684f
- (long long)libraryTypeForFilterController:(id)arg1;	// IMP=0x00000000007267ba
- (void)performUserInteractionTask;	// IMP=0x00000000007265e7
- (_Bool)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;	// IMP=0x00000000007264e5
- (id)activitySystemImageName;	// IMP=0x0000000000726488
- (id)activityType;	// IMP=0x0000000000726469
- (_Bool)performerResetsAfterCompletion;	// IMP=0x0000000000726461
- (id)initWithActionType:(id)arg1 viewModel:(id)arg2;	// IMP=0x00000000007263ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
