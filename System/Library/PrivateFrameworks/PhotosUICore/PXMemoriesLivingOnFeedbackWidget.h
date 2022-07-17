//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSArray, NSString, PHMemory, PXAssetActionManager, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXMemoriesLivingOnFeedbackWidget : NSObject <PXWidget>
{
    _Bool _hasLoadedContentData;	// 8 = 0x8
    PXPhotosDetailsContext *_context;	// 16 = 0x10
    NSObject<PXAnonymousView> *_contentView;	// 24 = 0x18
    id <PXWidgetDelegate> _widgetDelegate;	// 32 = 0x20
    NSArray *_features;	// 40 = 0x28
    NSArray *_featureViews;	// 48 = 0x30
    PHMemory *_memory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000972c66
@property(retain, nonatomic) PHMemory *memory; // @synthesize memory=_memory;
@property(retain, nonatomic) NSArray *featureViews; // @synthesize featureViews=_featureViews;
@property(retain, nonatomic) NSArray *features; // @synthesize features=_features;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
@property(retain, nonatomic) PXPhotosDetailsContext *context; // @synthesize context=_context;
- (void)_showReportFeedback;	// IMP=0x0000000000972b41
- (void)userDidSelectDisclosureControl;	// IMP=0x0000000000972b2f
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) long long contentViewAnchoringType;
- (struct CGSize)_layoutTokenViewsWithWidth:(double)arg1;	// IMP=0x00000000009727a5
- (id)_tokenViewsWithSuperview:(id)arg1;	// IMP=0x00000000009724d2
- (void)_loadFeaturesFromPhotosGraphProperties:(id)arg1;	// IMP=0x0000000000971a9d
- (id)_loadContentView;	// IMP=0x0000000000971a55
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView; // @synthesize contentView=_contentView;
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x00000000009719f8
@property(readonly, nonatomic) _Bool hasLoadedContentData; // @synthesize hasLoadedContentData=_hasLoadedContentData;
- (void)unloadContentData;	// IMP=0x00000000009719cc
- (void)_loadContentData;	// IMP=0x00000000009718b1
- (void)loadContentData;	// IMP=0x0000000000971897
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;

// Remaining properties
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property(retain, nonatomic) PXWidgetSpec *spec;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end
