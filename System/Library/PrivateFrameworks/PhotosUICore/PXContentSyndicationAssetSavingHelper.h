//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol PXDisplayAssetCollection;

@interface PXContentSyndicationAssetSavingHelper : NSObject
{
    _Bool _userCanContinueAfterSavingSyndicatedAssets;	// 8 = 0x8
    _Bool _allowSkippingUnsavedAssets;	// 9 = 0x9
    _Bool _skipUserPromptForSavingAssets;	// 10 = 0xa
    id <PXDisplayAssetCollection> _assetCollection;	// 16 = 0x10
    NSArray *_unsavedAssetsToSkip;	// 24 = 0x18
    CDUnknownBlockType _viewControllerPresenter;	// 32 = 0x20
    CDUnknownBlockType _viewControllerDismisser;	// 40 = 0x28
}

+ (id)assetSavingHelperFromAssetCollectionActionPerformer:(id)arg1;	// IMP=0x000000000093fdf6
- (void).cxx_destruct;	// IMP=0x000000000093fadb
@property(copy, nonatomic) CDUnknownBlockType viewControllerDismisser; // @synthesize viewControllerDismisser=_viewControllerDismisser;
@property(copy, nonatomic) CDUnknownBlockType viewControllerPresenter; // @synthesize viewControllerPresenter=_viewControllerPresenter;
@property(nonatomic) _Bool skipUserPromptForSavingAssets; // @synthesize skipUserPromptForSavingAssets=_skipUserPromptForSavingAssets;
@property(readonly, nonatomic) NSArray *unsavedAssetsToSkip; // @synthesize unsavedAssetsToSkip=_unsavedAssetsToSkip;
@property(nonatomic) _Bool allowSkippingUnsavedAssets; // @synthesize allowSkippingUnsavedAssets=_allowSkippingUnsavedAssets;
@property(nonatomic) _Bool userCanContinueAfterSavingSyndicatedAssets; // @synthesize userCanContinueAfterSavingSyndicatedAssets=_userCanContinueAfterSavingSyndicatedAssets;
@property(readonly, nonatomic) id <PXDisplayAssetCollection> assetCollection; // @synthesize assetCollection=_assetCollection;
- (void)saveUnsavedSyndicatedAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000093f6a8
- (void)presentSaveAlertForUnsavedSyndicatedAssets:(id)arg1 canContinueAfterSaving:(_Bool)arg2 allowSkippingUnsavedAssets:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000093f076
- (void)performSaveActionIfNeededOnUnsavedSyndicatedAssetsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000093ea74
- (id)initWithAssetCollection:(id)arg1;	// IMP=0x000000000093e976

@end

