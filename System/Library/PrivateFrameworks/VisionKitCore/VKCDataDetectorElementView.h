//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/BCSActionDelegate-Protocol.h>
#import <VisionKitCore/UIContextMenuInteractionDelegate-Protocol.h>
#import <VisionKitCore/UIGestureRecognizerDelegate-Protocol.h>

@class CAShapeLayer, NSArray, NSDictionary, NSString, UIBezierPath, UIContextMenuInteraction, UITapGestureRecognizer, VKCBaseDataDetectorElement, VKCMRCDataDetectorElement, VKQuad;
@protocol VKCDataDetectorElementViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCDataDetectorElementView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, BCSActionDelegate>
{
    _Bool _isPeformingManualContextInvocation;	// 8 = 0x8
    _Bool _allowLongPressDDActivationOnly;	// 9 = 0x9
    VKCBaseDataDetectorElement *_dataDetectorElement;	// 16 = 0x10
    NSArray *_allDataDetectorElements;	// 24 = 0x18
    id <VKCDataDetectorElementViewDelegate> _delegate;	// 32 = 0x20
    NSString *_customAnalyticsIdentifier;	// 40 = 0x28
    CAShapeLayer *_highlightPathLayer;	// 48 = 0x30
    UIBezierPath *_highlightPath;	// 56 = 0x38
    UIContextMenuInteraction *_menuInteraction;	// 64 = 0x40
    NSDictionary *_dataDetectorContext;	// 72 = 0x48
    UITapGestureRecognizer *_tapGestureRecognizer;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000004a5f0
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSDictionary *dataDetectorContext; // @synthesize dataDetectorContext=_dataDetectorContext;
@property(retain, nonatomic) UIContextMenuInteraction *menuInteraction; // @synthesize menuInteraction=_menuInteraction;
@property(nonatomic) _Bool allowLongPressDDActivationOnly; // @synthesize allowLongPressDDActivationOnly=_allowLongPressDDActivationOnly;
@property(nonatomic) _Bool isPeformingManualContextInvocation; // @synthesize isPeformingManualContextInvocation=_isPeformingManualContextInvocation;
@property(retain, nonatomic) UIBezierPath *highlightPath; // @synthesize highlightPath=_highlightPath;
@property(retain, nonatomic) CAShapeLayer *highlightPathLayer; // @synthesize highlightPathLayer=_highlightPathLayer;
@property(copy, nonatomic) NSString *customAnalyticsIdentifier; // @synthesize customAnalyticsIdentifier=_customAnalyticsIdentifier;
@property(nonatomic) __weak id <VKCDataDetectorElementViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *allDataDetectorElements; // @synthesize allDataDetectorElements=_allDataDetectorElements;
@property(readonly, nonatomic) VKCBaseDataDetectorElement *dataDetectorElement; // @synthesize dataDetectorElement=_dataDetectorElement;
- (id)accessibilityValue;	// IMP=0x000000000004a42d
- (_Bool)isAccessibilityElement;	// IMP=0x000000000004a425
- (unsigned long long)accessibilityTraits;	// IMP=0x000000000004a415
- (id)accessibilityIdentifier;	// IMP=0x000000000004a408
- (id)_contextMenuInteraction:(id)arg1 overrideSuggestedActionsForConfiguration:(id)arg2;	// IMP=0x000000000004a3fb
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;	// IMP=0x000000000004a31d
- (void)contextMenuInteraction:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000004a1f9
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000004a101
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x000000000004a0b5
- (id)contextMenuInteraction:(id)arg1 previewForDismissingMenuWithConfiguration:(id)arg2;	// IMP=0x000000000004a0a3
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;	// IMP=0x0000000000049d8d
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;	// IMP=0x0000000000049b0a
- (_Bool)isPointInQuad:(struct CGPoint)arg1;	// IMP=0x0000000000049a75
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000049a40
- (id)presentingViewControllerForInteraction;	// IMP=0x00000000000499a9
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000049904
- (id)analyticsEventWithDDType:(long long)arg1;	// IMP=0x00000000000497f5
- (void)sendAnalyticsEventIfNecessaryForDDType:(long long)arg1;	// IMP=0x000000000004973c
- (void)manuallyActivateLongPressMenuInteraction;	// IMP=0x00000000000496c2
- (void)didTap:(id)arg1;	// IMP=0x000000000004949e
@property(readonly, nonatomic) VKQuad *boundingQuadInBoundsCoordinates;
@property(readonly, nonatomic) NSArray *subQuadsInBoundsCoordinates;
- (id)calcPathForUnderline;	// IMP=0x0000000000048bb9
@property(readonly, nonatomic) double lineWithForAverageSubquadHeight;
- (void)updateHighlightPath;	// IMP=0x00000000000487cd
- (void)layoutSubviews;	// IMP=0x000000000004878c
@property(readonly, nonatomic) VKCMRCDataDetectorElement *mrcElement;
@property(readonly, nonatomic) _Bool shouldUseBCSAction;
- (id)initWithDataDetectorElement:(id)arg1 unfilteredElements:(id)arg2;	// IMP=0x0000000000048469

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

