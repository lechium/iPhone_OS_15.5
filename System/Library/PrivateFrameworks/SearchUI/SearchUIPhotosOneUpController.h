//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SearchUI/PXActionPerformerDelegate-Protocol.h>
#import <SearchUI/PXOneUpPresentationDelegate-Protocol.h>

@class NSDictionary, NSString, PXAssetReference, PXPhotoKitAssetsDataSourceManager, SearchUICommandEnvironment, UIView, UIViewController;

@interface SearchUIPhotosOneUpController : NSObject <PXOneUpPresentationDelegate, PXActionPerformerDelegate>
{
    _Bool _isSyndicated;	// 8 = 0x8
    PXPhotoKitAssetsDataSourceManager *_activeDataSourceManager;	// 16 = 0x10
    PXAssetReference *_navigatedAssetReference;	// 24 = 0x18
    NSDictionary *_rowModelsForCorespotlightIdentifiers;	// 32 = 0x20
    SearchUICommandEnvironment *_commandEnvironment;	// 40 = 0x28
    UIView *_hiddenView;	// 48 = 0x30
    UIViewController *_peekedViewController;	// 56 = 0x38
}

+ (id)bundleIdentifierForAsset:(id)arg1;	// IMP=0x0000000000025504
+ (id)corespotlightIdentifierForAsset:(id)arg1;	// IMP=0x00000000000238c6
+ (id)sharedController;	// IMP=0x0000000000023871
- (void).cxx_destruct;	// IMP=0x00000000000256ad
@property __weak UIViewController *peekedViewController; // @synthesize peekedViewController=_peekedViewController;
@property __weak UIView *hiddenView; // @synthesize hiddenView=_hiddenView;
@property(retain) SearchUICommandEnvironment *commandEnvironment; // @synthesize commandEnvironment=_commandEnvironment;
@property(retain) NSDictionary *rowModelsForCorespotlightIdentifiers; // @synthesize rowModelsForCorespotlightIdentifiers=_rowModelsForCorespotlightIdentifiers;
@property(nonatomic) _Bool isSyndicated; // @synthesize isSyndicated=_isSyndicated;
@property(retain, nonatomic) PXAssetReference *navigatedAssetReference; // @synthesize navigatedAssetReference=_navigatedAssetReference;
@property(retain, nonatomic) PXPhotoKitAssetsDataSourceManager *activeDataSourceManager; // @synthesize activeDataSourceManager=_activeDataSourceManager;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x000000000002528d
- (id)viewForAssetReference:(id)arg1;	// IMP=0x00000000000251e6
- (void)oneUpPresentation:(id)arg1 setHiddenAssetReferences:(id)arg2;	// IMP=0x000000000002510e
- (id)oneUpPresentationMatchedQueryStrings:(id)arg1;	// IMP=0x0000000000025037
- (id)oneUpPresentationActionManager:(id)arg1;	// IMP=0x0000000000024f8d
- (long long)oneUpPresentationActionContext:(id)arg1;	// IMP=0x0000000000024f82
- (id)imageViewInView:(id)arg1;	// IMP=0x0000000000024dbe
- (id)oneUpPresentation:(id)arg1 regionOfInterestForAssetReference:(id)arg2;	// IMP=0x0000000000024c18
- (void)oneUpPresentation:(id)arg1 scrollAssetReferenceToVisible:(id)arg2;	// IMP=0x0000000000024b88
- (id)rowModelForAsset:(id)arg1;	// IMP=0x0000000000024adf
- (id)rowModelForAssetReference:(id)arg1;	// IMP=0x0000000000024a16
- (id)oneUpPresentationInitialAssetReference:(id)arg1;	// IMP=0x0000000000024a04
- (long long)oneUpPresentationOrigin:(id)arg1;	// IMP=0x00000000000249fc
- (id)oneUpPresentationMediaProvider:(id)arg1;	// IMP=0x000000000002487a
- (id)oneUpPresentationDataSourceManager:(id)arg1;	// IMP=0x0000000000024868
- (_Bool)updateWithRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000023c2a
- (void)presentOneUpViewForRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x0000000000023ac7
- (id)previewViewControllerForRowModel:(id)arg1 environment:(id)arg2;	// IMP=0x00000000000239a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

