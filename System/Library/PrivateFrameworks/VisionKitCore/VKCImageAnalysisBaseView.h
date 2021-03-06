//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VisionKitCore/VKAnalysisDebugInfoProvider-Protocol.h>
#import <VisionKitCore/VKCImageCustomHighlightViewDelegate-Protocol.h>
#import <VisionKitCore/VKCImageDataDetectorViewDelegate-Protocol.h>
#import <VisionKitCore/VKCImageTextSelectionViewDelegate-Protocol.h>
#import <VisionKitCore/VKCImageVisualSearchViewDelegate-Protocol.h>
#import <VisionKitCore/_UIScrollViewScrollObserver-Protocol.h>

@class NSArray, NSIndexSet, NSString, UIImageView, UILabel, UIScrollView, UIView, VKCAnalysisDebugMenuProvider, VKCImageAnalysisResult, VKCImageCustomHighlightView, VKCImageDataDetectorView, VKCImageTextSelectionView, VKCImageVisualSearchView, VKTextRange;
@protocol VKCImageAnalysisBaseViewDelegate;

__attribute__((visibility("hidden")))
@interface VKCImageAnalysisBaseView <VKCImageDataDetectorViewDelegate, VKCImageTextSelectionViewDelegate, VKCImageVisualSearchViewDelegate, VKCImageCustomHighlightViewDelegate, VKAnalysisDebugInfoProvider, _UIScrollViewScrollObserver>
{
    _Bool _longPressDataDetectorsInTextMode;	// 8 = 0x8
    _Bool _wantsAutomaticContentsRectCalculation;	// 9 = 0x9
    _Bool _stringHighlightsActive;	// 10 = 0xa
    _Bool _didAddVisualSearchCornerView;	// 11 = 0xb
    _Bool _didLogContentsRectError;	// 12 = 0xc
    _Bool _visibleTextAreaInfoIsValid;	// 13 = 0xd
    _Bool _isAnalysisVisible;	// 14 = 0xe
    _Bool _clientDidSetNormalizedRect;	// 15 = 0xf
    id _loggingParentObject;	// 16 = 0x10
    VKCImageTextSelectionView *_textSelectionView;	// 24 = 0x18
    id <VKCImageAnalysisBaseViewDelegate> _delegate;	// 32 = 0x20
    unsigned long long _activeInteractionTypes;	// 40 = 0x28
    VKCImageAnalysisResult *_analysisResult;	// 48 = 0x30
    NSString *_customAnalyticsIdentifier;	// 56 = 0x38
    unsigned long long _dataDetectorTypes;	// 64 = 0x40
    UIView *_viewForObservingContentMode;	// 72 = 0x48
    VKCImageDataDetectorView *_dataDetectorView;	// 80 = 0x50
    VKCImageVisualSearchView *_visualSearchView;	// 88 = 0x58
    VKCImageCustomHighlightView *_regexHighlightView;	// 96 = 0x60
    NSArray *_highlightStrings;	// 104 = 0x68
    NSIndexSet *_highlightStringsIndexSet;	// 112 = 0x70
    UIImageView *_debugImageView;	// 120 = 0x78
    UILabel *_textInfoView;	// 128 = 0x80
    VKTextRange *_selectedTextRangeBeforeDataDetectorMenu;	// 136 = 0x88
    VKCAnalysisDebugMenuProvider *_debugMenuProvider;	// 144 = 0x90
    UIScrollView *_scrollViewToObserve;	// 152 = 0x98
    long long _scrollViewToObserveCount;	// 160 = 0xa0
    struct CGRect _contentsRect;	// 168 = 0xa8
    struct CGRect _normalizedVisibleRect;	// 200 = 0xc8
    struct CGRect _frameWhenResigningActive;	// 232 = 0xe8
    struct VKVisibleTextAreaInfo _visibleTextAreaInfo;	// 264 = 0x108
}

+ (id)keyPathsForValuesAffectingHasActiveTextSelection;	// IMP=0x000000000004e43f
+ (id)keyPathsForValuesAffectingContentsRect;	// IMP=0x000000000004da79
- (void).cxx_destruct;	// IMP=0x00000000000534bb
@property(nonatomic) struct CGRect frameWhenResigningActive; // @synthesize frameWhenResigningActive=_frameWhenResigningActive;
@property(nonatomic) long long scrollViewToObserveCount; // @synthesize scrollViewToObserveCount=_scrollViewToObserveCount;
@property(nonatomic) __weak UIScrollView *scrollViewToObserve; // @synthesize scrollViewToObserve=_scrollViewToObserve;
@property(retain, nonatomic) VKCAnalysisDebugMenuProvider *debugMenuProvider; // @synthesize debugMenuProvider=_debugMenuProvider;
@property(retain, nonatomic) VKTextRange *selectedTextRangeBeforeDataDetectorMenu; // @synthesize selectedTextRangeBeforeDataDetectorMenu=_selectedTextRangeBeforeDataDetectorMenu;
@property(retain, nonatomic) UILabel *textInfoView; // @synthesize textInfoView=_textInfoView;
@property(nonatomic) _Bool clientDidSetNormalizedRect; // @synthesize clientDidSetNormalizedRect=_clientDidSetNormalizedRect;
@property(retain, nonatomic) UIImageView *debugImageView; // @synthesize debugImageView=_debugImageView;
@property(retain, nonatomic) NSIndexSet *highlightStringsIndexSet; // @synthesize highlightStringsIndexSet=_highlightStringsIndexSet;
@property(retain, nonatomic) NSArray *highlightStrings; // @synthesize highlightStrings=_highlightStrings;
@property(nonatomic) _Bool isAnalysisVisible; // @synthesize isAnalysisVisible=_isAnalysisVisible;
@property(nonatomic) _Bool visibleTextAreaInfoIsValid; // @synthesize visibleTextAreaInfoIsValid=_visibleTextAreaInfoIsValid;
@property(nonatomic) struct CGRect normalizedVisibleRect; // @synthesize normalizedVisibleRect=_normalizedVisibleRect;
@property(nonatomic) _Bool didLogContentsRectError; // @synthesize didLogContentsRectError=_didLogContentsRectError;
@property(retain, nonatomic) VKCImageCustomHighlightView *regexHighlightView; // @synthesize regexHighlightView=_regexHighlightView;
@property(retain, nonatomic) VKCImageVisualSearchView *visualSearchView; // @synthesize visualSearchView=_visualSearchView;
@property(retain, nonatomic) VKCImageDataDetectorView *dataDetectorView; // @synthesize dataDetectorView=_dataDetectorView;
@property(nonatomic) _Bool didAddVisualSearchCornerView; // @synthesize didAddVisualSearchCornerView=_didAddVisualSearchCornerView;
@property(nonatomic) _Bool stringHighlightsActive; // @synthesize stringHighlightsActive=_stringHighlightsActive;
@property(nonatomic) __weak UIView *viewForObservingContentMode; // @synthesize viewForObservingContentMode=_viewForObservingContentMode;
@property(nonatomic) struct VKVisibleTextAreaInfo visibleTextAreaInfo; // @synthesize visibleTextAreaInfo=_visibleTextAreaInfo;
@property(nonatomic) unsigned long long dataDetectorTypes; // @synthesize dataDetectorTypes=_dataDetectorTypes;
@property(nonatomic) struct CGRect contentsRect; // @synthesize contentsRect=_contentsRect;
@property(nonatomic) _Bool wantsAutomaticContentsRectCalculation; // @synthesize wantsAutomaticContentsRectCalculation=_wantsAutomaticContentsRectCalculation;
@property(copy, nonatomic) NSString *customAnalyticsIdentifier; // @synthesize customAnalyticsIdentifier=_customAnalyticsIdentifier;
@property(nonatomic) _Bool longPressDataDetectorsInTextMode; // @synthesize longPressDataDetectorsInTextMode=_longPressDataDetectorsInTextMode;
@property(retain, nonatomic) VKCImageAnalysisResult *analysisResult; // @synthesize analysisResult=_analysisResult;
@property(nonatomic) unsigned long long activeInteractionTypes; // @synthesize activeInteractionTypes=_activeInteractionTypes;
@property(nonatomic) __weak id <VKCImageAnalysisBaseViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VKCImageTextSelectionView *textSelectionView; // @synthesize textSelectionView=_textSelectionView;
@property(nonatomic) __weak id loggingParentObject; // @synthesize loggingParentObject=_loggingParentObject;
- (id)highlightView:(id)arg1 selectionRectsForRanges:(id)arg2;	// IMP=0x0000000000052b2e
- (void)sendVisualSearchAnalyticsWithDidBecomeActive:(_Bool)arg1;	// IMP=0x00000000000529fb
- (void)sendActiveInteractionTypesDidChangeAnalyticsEvent:(long long)arg1;	// IMP=0x0000000000052916
- (void)sendAnalysisDidChangeAnalyticsEvent;	// IMP=0x0000000000052825
- (void)showTopVisualSearchResult;	// IMP=0x00000000000527e8
- (void)automaticallyShowVisualSearchResultsIfApplicable;	// IMP=0x00000000000527ab
- (void)scrollViewDidZoomToUnitRect:(struct CGRect)arg1;	// IMP=0x000000000005278e
- (id)presentingViewControllerForImageAnalysisInteraction;	// IMP=0x00000000000526f2
- (void)visualSearchView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x000000000005267d
- (void)generateVisualSearchResultForItems:(id)arg1 queryID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000525ef
- (void)visualSearchItemViewDidDismissController:(id)arg1;	// IMP=0x00000000000525a3
- (void)visualSearchItemView:(id)arg1 didTapVisualSearchIndicatorWithNormalizedBoundingBox:(struct CGRect)arg2;	// IMP=0x0000000000052543
- (void)triggerTapToRadar;	// IMP=0x0000000000052506
@property(readonly, copy) NSString *description;
- (id)nonTextNormalizedHighlightAllQuadsForTextSelectionView:(id)arg1;	// IMP=0x00000000000522d3
- (id)dataDetectorElementAtPoint:(struct CGPoint)arg1 fromTextSelectionView:(id)arg2;	// IMP=0x00000000000522c1
- (void)textSelectionView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x000000000005224c
- (_Bool)visualSearchItemView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x00000000000521dd
- (void)willDismissMenuForDataDetectorView:(id)arg1;	// IMP=0x0000000000052156
- (void)willDisplayMenuForDataDetectorView:(id)arg1;	// IMP=0x00000000000520b5
- (_Bool)dataDetectorView:(id)arg1 dataDetectorInteractionShouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000052046
- (void)textSelectionView:(id)arg1 prepareForCalloutAction:(SEL)arg2 competion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000051fcb
- (void)textSelectionView:(id)arg1 boundsDidChangeFromRect:(struct CGRect)arg2 toRect:(struct CGRect)arg3;	// IMP=0x0000000000051f9d
- (void)textSelectionView:(id)arg1 selectionDidChange:(id)arg2;	// IMP=0x0000000000051f09
- (void)textSelectionView:(id)arg1 requestsDataDetectorActivationAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000051e8c
- (_Bool)textSelectionView:(id)arg1 dataDetectorExistsAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000051e59
- (_Bool)textSelectionView:(id)arg1 shouldBeginAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000051d34
- (id)viewForImageSnapshotForTextSelectionView:(id)arg1;	// IMP=0x0000000000051cd5
- (id)presentingViewControllerForInteractionWithDataDetectorView:(id)arg1;	// IMP=0x0000000000051cc3
- (void)dataDetectorView:(id)arg1 analyticsEventOccured:(id)arg2;	// IMP=0x0000000000051c4e
- (id)previewForDataDetectorElementView:(id)arg1;	// IMP=0x0000000000051bcb
- (void)clearRegexHighlightsAnimated:(_Bool)arg1 updateActiveTypes:(_Bool)arg2;	// IMP=0x0000000000051ac8
- (void)clearStringHighlightsAnimated:(_Bool)arg1;	// IMP=0x0000000000051ab1
- (void)highlightMatchesWithString:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000518e2
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x00000000000518d0
- (void)scrollViewDidChange:(id)arg1;	// IMP=0x00000000000516a3
- (void)scrollViewWillChange:(id)arg1;	// IMP=0x0000000000051594
@property(readonly, nonatomic) VKCImageCustomHighlightView *regexHighlightViewIfExists;
- (_Bool)containsVisualSearchItemAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000005126f
- (unsigned long long)dataDetectorTypeAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000005121f
- (id)dataDetectorElementPoint:(struct CGPoint)arg1 requestingView:(id)arg2;	// IMP=0x0000000000051100
@property(readonly, nonatomic) double currentExtraOffsetForViewScale;
- (_Bool)analysisContainsTextAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000050fc1
- (_Bool)containsTextAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000050f71
- (_Bool)containsInteractiveItemAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000050e81
- (void)clearVisualSearchViewIfNecessary;	// IMP=0x0000000000050e49
- (void)clearDataDetectorViewIfNecessary;	// IMP=0x0000000000050e11
- (void)clearTextSelectionViewIfNecessary;	// IMP=0x0000000000050dd9
- (void)configureForActiveTypes:(unsigned long long)arg1;	// IMP=0x0000000000050892
- (void)configureForCurrentActiveInteractionTypes;	// IMP=0x0000000000050861
- (struct CGRect)calculateNormalizedVisibleRect;	// IMP=0x000000000005045c
- (void)debugButtonDidTap:(id)arg1;	// IMP=0x000000000005038c
- (void)updateDebugButtonIfNecessary;	// IMP=0x000000000004fe0e
- (void)updateAndNotifyAfterValidNormalizedVisibleRectChange;	// IMP=0x000000000004fd35
- (void)updateAndNotifyAfterValidNormalizedVisibleRectChangeIfNecessary;	// IMP=0x000000000004fc79
- (void)updateNormalizedVisibleRectIfNecessary;	// IMP=0x000000000004fa00
@property(readonly, nonatomic) struct CGRect visibleImageRect;
- (void)_updateAnalysisVisibility;	// IMP=0x000000000004f6fa
- (void)_logVisualSearchHintAvailabilityUpdate;	// IMP=0x000000000004f612
- (void)updateCurrentDisplayedViewContentsRect;	// IMP=0x000000000004f2c5
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000004f148
- (void)updateSubviewsToMatchBounds;	// IMP=0x000000000004efbe
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x000000000004ef6c
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000004eeeb
@property(readonly, nonatomic) double totalBoundingBoxTextArea;
@property(readonly, nonatomic) double totalQuadTextArea;
- (void)invaliateVisibleTextAreInfo;	// IMP=0x000000000004ec0e
- (struct VKVisibleTextAreaInfo)calculateVisibleTextAreaInfo;	// IMP=0x000000000004e573
@property(readonly, nonatomic) struct _NSRange selectedRange;
@property(readonly, nonatomic) _Bool hasActiveTextSelection;
- (void)resetSelection;	// IMP=0x000000000004e321
@property(nonatomic) _Bool highlightSelectableItems;
- (void)setHighlightSelectableItems:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004e181
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000004dade
- (void)didMoveToWindow;	// IMP=0x000000000004da9d
@property(readonly, nonatomic) NSArray *keyPathsAffectingContentMode;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000004da22
- (void)layoutSubviews;	// IMP=0x000000000004d900
- (void)applicationWillResignActive:(id)arg1;	// IMP=0x000000000004d84c
- (void)useInteractionOptions:(unsigned long long)arg1;	// IMP=0x000000000004d7f5
- (id)init;	// IMP=0x000000000004d378
- (void)dealloc;	// IMP=0x000000000004d20a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

