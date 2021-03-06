//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SwiftUI/AXChart-Protocol.h>
#import <SwiftUI/AXContainerDataSeries-Protocol.h>
#import <SwiftUI/AXCustomContentProvider-Protocol.h>

@class AXChartDescriptor, MISSING_TYPE, NSArray, NSAttributedString, NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _TtC7SwiftUI17AccessibilityNode : NSObject <AXChart, AXCustomContentProvider, AXContainerDataSeries>
{
    MISSING_TYPE *id;	// 8 = 0x8
    MISSING_TYPE *version;	// 16 = 0x10
    MISSING_TYPE *children;	// 24 = 0x18
    MISSING_TYPE *bridgedChild;	// 32 = 0x20
    MISSING_TYPE *parent;	// 40 = 0x28
    MISSING_TYPE *viewRendererHost;	// 48 = 0x30
    MISSING_TYPE *attachmentsStorage;	// 64 = 0x40
    MISSING_TYPE *cachedCombinedAttachment;	// 72 = 0x48
    MISSING_TYPE *platformRotorStorage;	// 88 = 0x58
    MISSING_TYPE *cachedIsPlaceholder;	// 96 = 0x60
    MISSING_TYPE *focusableAncestor;	// 104 = 0x68
    MISSING_TYPE *relationshipScope;	// 112 = 0x70
    MISSING_TYPE *isCell;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x00000000001d40d8
- (id)init;	// IMP=0x00000000001de17f
- (void)dealloc;	// IMP=0x00000000001d40bb
- (_Bool)_accessibilityIsChartElement;	// IMP=0x0000000000676b58
@property(nonatomic, retain) AXChartDescriptor *accessibilityChartDescriptor;
- (_Bool)_accessibilityIsRTL;	// IMP=0x0000000000b55a3a
@property(nonatomic, copy) NSArray *accessibilityCustomRotors;
- (id)_accessibilityHeadingLevel;	// IMP=0x0000000000b5574b
- (_Bool)_accessibilityScrollToVisible;	// IMP=0x0000000000b55632
- (_Bool)accessibilityScroll:(long long)arg1;	// IMP=0x0000000000b5536a
@property(nonatomic, readonly) NSArray *_accessibilityUserDefinedLinkedUIElements;
- (id)accessibilityURL;	// IMP=0x0000000000b55127
- (void)accessibilityElementDidLoseFocus;	// IMP=0x0000000000b54fec
- (void)accessibilityElementDidBecomeFocused;	// IMP=0x0000000000b54fe4
- (_Bool)accessibilityPerformMagicTap;	// IMP=0x0000000000b54fac
- (_Bool)accessibilityPerformEscape;	// IMP=0x0000000000b54eb0
- (_Bool)accessibilityActivate;	// IMP=0x0000000000b54db4
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
- (void)accessibilityDecrement;	// IMP=0x0000000000b54925
- (void)accessibilityIncrement;	// IMP=0x0000000000b548f1
@property(nonatomic, retain) UIBezierPath *accessibilityPath;
@property(nonatomic) _Bool accessibilityRespondsToUserInteraction;
- (struct _NSRange)accessibilityRowRange;	// IMP=0x0000000000b54635
@property(nonatomic) long long accessibilityContainerType;
@property(nonatomic) long long accessibilityNavigationStyle;
@property(nonatomic) _Bool shouldGroupAccessibilityChildren;
@property(nonatomic) _Bool accessibilityElementsHidden;
@property(nonatomic) _Bool accessibilityViewIsModal;
@property(nonatomic) struct CGPoint accessibilityActivationPoint;
- (id)_accessibilityUserTestingVisibleAncestor;	// IMP=0x0000000000b53b59
- (id)_accessibilityUserTestingParent;	// IMP=0x0000000000b53abb
- (id)accessibilityContainer;	// IMP=0x0000000000b53a9c
- (id)_accessibilityUserTestingChildren;	// IMP=0x0000000000b537fa
- (long long)accessibilityElementCount;	// IMP=0x0000000000b53793
@property(nonatomic, copy) NSArray *accessibilityElements;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;	// IMP=0x0000000000b53644
@property(nonatomic) struct CGRect accessibilityFrame;
@property(nonatomic, copy) NSString *accessibilityTextualContext;
@property(nonatomic, copy) NSString *accessibilityLanguage;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedHint;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedValue;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, retain) NSAttributedString *accessibilityAttributedLabel;
@property(nonatomic, copy) NSArray *accessibilityAttributedUserInputLabels;
@property(nonatomic, copy) NSArray *accessibilityUserInputLabels;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) unsigned long long accessibilityTraits;
@property(nonatomic) _Bool isAccessibilityElement;
@property(nonatomic, copy) NSArray *accessibilityCustomContent;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1;	// IMP=0x0000000000b55c60
@property(nonatomic, copy) NSString *accessibilityIdentifier;
- (unsigned long long)_accessibilityAutomationType;	// IMP=0x0000000000b57b39
- (id)_accessibilityRoleDescription;	// IMP=0x0000000000b57d20
- (double)_accessibilityNumberValue;	// IMP=0x0000000000b57fa1
- (double)_accessibilityMaxValue;	// IMP=0x0000000000b57ea4
- (double)_accessibilityMinValue;	// IMP=0x0000000000b57d32
- (long long)_accessibilityExpandedStatus;	// IMP=0x0000000000b580ab
- (id)_accessibilityDataSeriesValueDescriptionForPosition:(double)arg1 axis:(long long)arg2;	// IMP=0x0000000000b5c7b0
- (id)_accessibilityDataSeriesGridlinePositionsForAxis:(long long)arg1;	// IMP=0x0000000000b5bea8
- (id)_accessibilityDataSeriesMaximumValueForAxis:(long long)arg1;	// IMP=0x0000000000b5b780
- (id)_accessibilityDataSeriesMinimumValueForAxis:(long long)arg1;	// IMP=0x0000000000b5b25c
- (id)_accessibilityDataSeriesUnitLabelForAxis:(long long)arg1;	// IMP=0x0000000000b5adb6
- (id)_accessibilityDataSeriesTitleForAxis:(long long)arg1;	// IMP=0x0000000000b5a592
- (id)_accessibilityDataSeriesValuesForAxis:(long long)arg1;	// IMP=0x0000000000b59ced
- (double)_accessibilityDataSeriesSonificationDuration;	// IMP=0x0000000000b5966c
- (_Bool)_accessibilityDataSeriesIncludesTrendlineInSonification;	// IMP=0x0000000000b59259
- (_Bool)_accessibilityDataSeriesSupportsSonification;	// IMP=0x0000000000b58fa8
- (_Bool)_accessibilityDataSeriesSupportsSummarization;	// IMP=0x0000000000b58cf1
- (long long)_accessibilityDataSeriesType;	// IMP=0x0000000000b58a41
- (id)_accessibilityDataSeriesName;	// IMP=0x0000000000b58536
- (id)_accessibilityMediaAnalysisElement;	// IMP=0x0000000000b5c920

@end

