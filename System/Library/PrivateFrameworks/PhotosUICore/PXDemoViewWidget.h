//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidget-Protocol.h>

@class NSString, PXAssetActionManager, PXPhotosDetailsContext, PXSectionedSelectionManager, PXTilingController, PXWidgetSpec, UIView;
@protocol PXAnonymousView, PXWidgetDelegate, PXWidgetEditingDelegate, PXWidgetInteractionDelegate, PXWidgetUnlockDelegate;

@interface PXDemoViewWidget : NSObject <PXWidget>
{
    _Bool _isExpanded;	// 8 = 0x8
    double _height;	// 16 = 0x10
    _Bool __didLoadContent;	// 24 = 0x18
    id <PXWidgetDelegate> _widgetDelegate;	// 32 = 0x20
    PXWidgetSpec *_spec;	// 40 = 0x28
    long long _contentViewAnchoringType;	// 48 = 0x30
    UIView *__containerView;	// 56 = 0x38
    UIView *__contentView;	// 64 = 0x40
    long long __animationCount;	// 72 = 0x48
    struct CGSize __contentSize;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000178571
@property(nonatomic, setter=_setAnimationCount:) long long _animationCount; // @synthesize _animationCount=__animationCount;
@property(nonatomic, setter=_setDidLoadContent:) _Bool _didLoadContent; // @synthesize _didLoadContent=__didLoadContent;
@property(nonatomic, setter=_setContentSize:) struct CGSize _contentSize; // @synthesize _contentSize=__contentSize;
@property(readonly, nonatomic) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(readonly, nonatomic) UIView *_containerView; // @synthesize _containerView=__containerView;
@property(nonatomic, setter=_setContentViewAnchoringType:) long long contentViewAnchoringType; // @synthesize contentViewAnchoringType=_contentViewAnchoringType;
@property(retain, nonatomic) PXWidgetSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetDelegate> widgetDelegate; // @synthesize widgetDelegate=_widgetDelegate;
- (void)userDidSelectDisclosureControl;	// IMP=0x0000000000178410
@property(readonly, nonatomic) NSString *localizedDisclosureTitle;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001782d4
@property(readonly, nonatomic) NSObject<PXAnonymousView> *contentView;
- (void)loadContentData;	// IMP=0x000000000017828f
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x000000000017827d
- (double)preferredContentHeightForWidth:(double)arg1;	// IMP=0x0000000000178205
@property(readonly, nonatomic) _Bool hasContentForCurrentInput;
- (void)_updateContentViewColor;	// IMP=0x0000000000177fe2
- (struct CGRect)_contentViewFrameForSize:(struct CGSize)arg1;	// IMP=0x0000000000177edb
- (void)_handleLongPressGestureRecognizer:(id)arg1;	// IMP=0x0000000000177e67
- (void)_handleTapGestureRecognizer:(id)arg1;	// IMP=0x0000000000177dd6
- (void)_loadViews;	// IMP=0x0000000000177b77
- (id)init;	// IMP=0x0000000000177b26

// Remaining properties
@property(readonly, nonatomic) _Bool allowUserInteractionWithSubtitle;
@property(readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property(readonly, nonatomic) long long contentLayoutStyle;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
@property(retain, nonatomic) PXPhotosDetailsContext *context;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double extraSpaceNeededAtContentBottom;
@property(nonatomic, getter=isFaceModeEnabled) _Bool faceModeEnabled;
@property(readonly, nonatomic) _Bool hasLoadedContentData;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isInEditMode;
@property(readonly, nonatomic) NSString *localizedCaption;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(nonatomic) struct CGSize maxVisibleSizeInEditMode;
@property(nonatomic, getter=isSelecting) _Bool selecting;
@property(readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property(readonly, nonatomic) NSString *snappableWidgetIdentifier;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsFaceMode;
@property(readonly, nonatomic) _Bool supportsSelection;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) _Bool wantsFocus;
@property(nonatomic) __weak id <PXWidgetEditingDelegate> widgetEditingDelegate;
@property(nonatomic) __weak id <PXWidgetInteractionDelegate> widgetInteractionDelegate;
@property(nonatomic) __weak id <PXWidgetUnlockDelegate> widgetUnlockDelegate;

@end
