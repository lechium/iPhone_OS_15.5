//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoKitAssetActionPerformer.h>

#import <PhotosUI/PUSlideshowViewControllerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUPXPhotoKitSlideShowAssetActionPerformer : PXPhotoKitAssetActionPerformer <PUSlideshowViewControllerDelegate>
{
}

+ (id)systemImageNameForActionManager:(id)arg1;	// IMP=0x00000000002915ab
+ (id)createActivityWithActionManager:(id)arg1;	// IMP=0x0000000000291531
+ (id)createBarButtonItemWithTarget:(id)arg1 action:(SEL)arg2 actionManager:(id)arg3;	// IMP=0x0000000000291497
+ (_Bool)canPerformOnImplicitSelectionInContainerCollection:(id)arg1;	// IMP=0x000000000029148f
+ (_Bool)canPerformOnSubsetOfSelection;	// IMP=0x0000000000291487
+ (_Bool)canPerformWithSelectionSnapshot:(id)arg1 person:(id)arg2;	// IMP=0x0000000000291472
+ (id)localizedTitleForUseCase:(unsigned long long)arg1 actionManager:(id)arg2;	// IMP=0x0000000000291461
- (void)slideshowViewControllerDidFinish:(id)arg1 withVisibleAssets:(id)arg2;	// IMP=0x00000000002913dc
- (void)_startSlideshow;	// IMP=0x0000000000291147
- (void)performUserInteractionTask;	// IMP=0x000000000029109a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
