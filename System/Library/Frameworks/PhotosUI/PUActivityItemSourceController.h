//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUI/PUCMMActivityItemSourceDelegate-Protocol.h>
#import <PhotosUI/PXActivityItemSourceController-Protocol.h>
#import <PhotosUI/PXCMMActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSObject, NSOrderedSet, NSString, NSURL, PHPerson, PUActivityViewController, PUCMMActivityItemSource;
@protocol OS_dispatch_queue, PUActivityItemSourceControllerDelegate;

@interface PUActivityItemSourceController : PXObservable <PUCMMActivityItemSourceDelegate, PXCMMActionPerformerDelegate, PXChangeObserver, PXActivityItemSourceController>
{
    NSMutableOrderedSet *_assetItems;	// 8 = 0x8
    NSMutableOrderedSet *_assetItemSources;	// 16 = 0x10
    NSArray *_activeItemSources;	// 24 = 0x18
    _Atomic int _taskId;	// 32 = 0x20
    unsigned long long _cloudSharedAssetCount;	// 40 = 0x28
    long long _momentShareAssetCount;	// 48 = 0x30
    long long _unsavedSyndicatedAssetCount;	// 56 = 0x38
    long long _externalLibraryAssetCount;	// 64 = 0x40
    _Bool _shouldUseMomentShareLinkInMessagesIfThresholdMet;	// 72 = 0x48
    _Bool _shouldExcludeLivenessInAllItemSources;	// 73 = 0x49
    _Bool _shouldExcludeLocationInAllItemSources;	// 74 = 0x4a
    _Bool _shouldExcludeCaptionInAllItemSources;	// 75 = 0x4b
    _Bool _shouldExcludeAccessibilityDescriptionInAllItemSources;	// 76 = 0x4c
    _Bool _shouldShareAsOriginals;	// 77 = 0x4d
    _Bool _momentSharePublishAttempted;	// 78 = 0x4e
    unsigned int _powerAssertionIdentifier;	// 80 = 0x50
    unsigned long long _preferredPreparationType;	// 88 = 0x58
    id <PUActivityItemSourceControllerDelegate> _delegate;	// 96 = 0x60
    unsigned long long _state;	// 104 = 0x68
    PUActivityViewController *_activityViewController;	// 112 = 0x70
    PHPerson *_person;	// 120 = 0x78
    CDUnknownBlockType _progressHandler;	// 128 = 0x80
    NSURL *_publishedURL;	// 136 = 0x88
    PUCMMActivityItemSource *_cmmActivityItemSource;	// 144 = 0x90
    NSMutableArray *_errors;	// 152 = 0x98
    NSString *_activeActivityType;	// 160 = 0xa0
    unsigned long long _numSourcesDownloading;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_externalIsolation;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000000305a1
@property(readonly, nonatomic) unsigned int powerAssertionIdentifier; // @synthesize powerAssertionIdentifier=_powerAssertionIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *externalIsolation; // @synthesize externalIsolation=_externalIsolation;
@property(nonatomic) unsigned long long numSourcesDownloading; // @synthesize numSourcesDownloading=_numSourcesDownloading;
@property(retain) NSString *activeActivityType; // @synthesize activeActivityType=_activeActivityType;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) PUCMMActivityItemSource *cmmActivityItemSource; // @synthesize cmmActivityItemSource=_cmmActivityItemSource;
@property(retain, nonatomic, setter=_setPublishedURL:) NSURL *publishedURL; // @synthesize publishedURL=_publishedURL;
@property(readonly, nonatomic) _Bool momentSharePublishAttempted; // @synthesize momentSharePublishAttempted=_momentSharePublishAttempted;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property(retain, nonatomic) PHPerson *person; // @synthesize person=_person;
@property(nonatomic) _Bool shouldShareAsOriginals; // @synthesize shouldShareAsOriginals=_shouldShareAsOriginals;
@property(nonatomic) _Bool shouldExcludeAccessibilityDescriptionInAllItemSources; // @synthesize shouldExcludeAccessibilityDescriptionInAllItemSources=_shouldExcludeAccessibilityDescriptionInAllItemSources;
@property(nonatomic) _Bool shouldExcludeCaptionInAllItemSources; // @synthesize shouldExcludeCaptionInAllItemSources=_shouldExcludeCaptionInAllItemSources;
@property(nonatomic) _Bool shouldExcludeLocationInAllItemSources; // @synthesize shouldExcludeLocationInAllItemSources=_shouldExcludeLocationInAllItemSources;
@property(nonatomic) _Bool shouldExcludeLivenessInAllItemSources; // @synthesize shouldExcludeLivenessInAllItemSources=_shouldExcludeLivenessInAllItemSources;
@property(copy, nonatomic) NSOrderedSet *assetItems; // @synthesize assetItems=_assetItems;
@property(nonatomic) __weak PUActivityViewController *activityViewController; // @synthesize activityViewController=_activityViewController;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <PUActivityItemSourceControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseMomentShareLinkInMessagesIfThresholdMet; // @synthesize shouldUseMomentShareLinkInMessagesIfThresholdMet=_shouldUseMomentShareLinkInMessagesIfThresholdMet;
@property(nonatomic) unsigned long long preferredPreparationType; // @synthesize preferredPreparationType=_preferredPreparationType;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x00000000000302a6
- (void)cmmActivityItemSource:(id)arg1 didFinishPreparationForActivityType:(id)arg2 preparationType:(unsigned long long)arg3 withItems:(id)arg4 didCancel:(_Bool)arg5 error:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000300c9
- (void)cmmActivityItemSource:(id)arg1 willBeginPreparationWithActivityType:(id)arg2 preparationType:(unsigned long long)arg3;	// IMP=0x0000000000030017
- (_Bool)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002fe2e
- (_Bool)actionPerformer:(id)arg1 presentViewController:(id)arg2;	// IMP=0x000000000002fda7
- (id)activityItemSourceForAsset:(id)arg1;	// IMP=0x000000000002fccf
- (void)cancel;	// IMP=0x000000000002fa33
- (void)_didPublishMomentShareLinkToURL:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002f68c
- (void)publishLinkForActivityType:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000002ef02
- (void)runExplicitly:(_Bool)arg1 withActivityType:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e468
- (void)cleanUpExportedFiles;	// IMP=0x000000000002e2e3
- (void)_cleanupAfterPerform;	// IMP=0x000000000002e293
- (_Bool)_prepareForPerformWithActivityType:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002e02a
- (void)_prepareMomentShareLinkFromIndividualItemSourcesForActivity:(id)arg1;	// IMP=0x000000000002dda5
- (void)_prepareIndividualItemSourcesForActivity:(id)arg1;	// IMP=0x000000000002dabe
- (void)configureItemSourcesForActivityIfNeeded:(id)arg1 forcePreparationAsMomentShareLink:(_Bool)arg2;	// IMP=0x000000000002d911
@property(readonly, nonatomic) unsigned long long unsavedSyndicatedAssetCount;
@property(readonly, nonatomic) _Bool isPreparingIndividualItems;
- (struct PXAssetMediaTypeCount)requestAssetsMediaTypeCount;	// IMP=0x000000000002d56b
@property(readonly, copy, nonatomic) NSOrderedSet *assets;
- (void)updateState;	// IMP=0x000000000002d2e0
- (void)setState:(unsigned long long)arg1;	// IMP=0x000000000002d28a
@property(copy) NSArray *activeItemSources;
- (void)removeAssetItem:(id)arg1;	// IMP=0x000000000002ccc4
- (void)addAssetItem:(id)arg1;	// IMP=0x000000000002ca0d
- (CDStruct_df7f102b)synthesizedSharingPreferencesForAssetItem:(id)arg1;	// IMP=0x000000000002c8ef
- (void)updateSharingPreferencesInItemSources;	// IMP=0x000000000002c895
@property(readonly, nonatomic) _Bool itemSourcesSupportSlideshow;
@property(readonly, nonatomic) _Bool itemSourcesSupportMomentShareLinkCreation;
@property(readonly, copy, nonatomic) NSArray *activityItems;
@property(readonly, copy, nonatomic) NSOrderedSet *assetItemSources;
- (id)init;	// IMP=0x000000000002bd6f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
