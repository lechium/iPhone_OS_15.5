//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CameraUI/CAMCameraReviewViewController-Protocol.h>
#import <CameraUI/PUAssetExplorerReviewScreenViewControllerDelegate-Protocol.h>

@class NSArray, NSString, PUAssetExplorerReviewScreenViewController, PUReviewAssetsDataSourceManager, PUReviewAssetsMediaProvider, PUReviewDataSource;
@protocol CAMCameraReviewDelegate;

@interface CAMReviewViewController : UIViewController <PUAssetExplorerReviewScreenViewControllerDelegate, CAMCameraReviewViewController>
{
    id <CAMCameraReviewDelegate> _reviewDelegate;	// 8 = 0x8
    NSArray *__initialAssets;	// 16 = 0x10
    PUReviewDataSource *__reviewDataSource;	// 24 = 0x18
    PUReviewAssetsDataSourceManager *__internalReviewDataSourceManager;	// 32 = 0x20
    PUReviewAssetsMediaProvider *__internalReviewMediaProvider;	// 40 = 0x28
    PUAssetExplorerReviewScreenViewController *__internalReviewViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000137685
@property(readonly, nonatomic) PUAssetExplorerReviewScreenViewController *_internalReviewViewController; // @synthesize _internalReviewViewController=__internalReviewViewController;
@property(readonly, nonatomic) PUReviewAssetsMediaProvider *_internalReviewMediaProvider; // @synthesize _internalReviewMediaProvider=__internalReviewMediaProvider;
@property(readonly, nonatomic) PUReviewAssetsDataSourceManager *_internalReviewDataSourceManager; // @synthesize _internalReviewDataSourceManager=__internalReviewDataSourceManager;
@property(readonly, nonatomic) PUReviewDataSource *_reviewDataSource; // @synthesize _reviewDataSource=__reviewDataSource;
@property(readonly, nonatomic) NSArray *_initialAssets; // @synthesize _initialAssets=__initialAssets;
@property(nonatomic) __weak id <CAMCameraReviewDelegate> reviewDelegate; // @synthesize reviewDelegate=_reviewDelegate;
- (void)assetExplorerReviewScreenViewController:(id)arg1 didPerformCompletionAction:(unsigned long long)arg2 withSelectedAssetUUIDs:(id)arg3 livePhotoDisabledAssetUUIDs:(id)arg4 substituteAssetsByUUID:(id)arg5;	// IMP=0x0000000000137310
- (void)assetExplorerReviewScreenViewControllerDidPressRetake:(id)arg1;	// IMP=0x00000000001372b6
- (void)assetExplorerReviewScreenViewControllerDidPressCancel:(id)arg1;	// IMP=0x0000000000137254
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 shouldEnableActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;	// IMP=0x0000000000137220
- (_Bool)assetExplorerReviewScreenViewController:(id)arg1 canPerformActionType:(unsigned long long)arg2 onAsset:(id)arg3 inAssetCollection:(id)arg4;	// IMP=0x0000000000137206
- (void)loadView;	// IMP=0x000000000013711f
- (id)initWithAssets:(id)arg1;	// IMP=0x0000000000136b70
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000136b57
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000136b43

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

