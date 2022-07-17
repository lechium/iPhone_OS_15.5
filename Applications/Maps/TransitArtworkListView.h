//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class MultilineWrappingListView, NSArray, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface TransitArtworkListView : UIView
{
    NSArray *_artworkImageViews;	// 8 = 0x8
    NSArray *_arrowImageViews;	// 16 = 0x10
    MultilineWrappingListView *_multilineWrappingStackView;	// 24 = 0x18
    float _verticalContentHuggingPriority;	// 32 = 0x20
    float _verticalContentCompressionResistancePriority;	// 36 = 0x24
    UIImage *_arrowImage;	// 40 = 0x28
    UIImage *_incidentBadgeImage;	// 48 = 0x30
    long long _shieldSize;	// 56 = 0x38
    unsigned long long _separatorStyle;	// 64 = 0x40
    NSArray *_artworkData;	// 72 = 0x48
    UIColor *_overrideTintColor;	// 80 = 0x50
}

+ (double)transitArtworkListHeight;	// IMP=0x0040000000728e6a
+ (CDStruct_7660b417)_metricsForIdiom:(long long)arg1;	// IMP=0x001000000072668b
- (void).cxx_destruct;	// IMP=0x0020000000728f82
@property(nonatomic) float verticalContentCompressionResistancePriority; // @synthesize verticalContentCompressionResistancePriority=_verticalContentCompressionResistancePriority;
@property(nonatomic) float verticalContentHuggingPriority; // @synthesize verticalContentHuggingPriority=_verticalContentHuggingPriority;
@property(retain, nonatomic) UIColor *overrideTintColor; // @synthesize overrideTintColor=_overrideTintColor;
@property(retain, nonatomic) NSArray *artworkData; // @synthesize artworkData=_artworkData;
@property(nonatomic) unsigned long long separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(nonatomic) long long shieldSize; // @synthesize shieldSize=_shieldSize;
@property(readonly, nonatomic) UIImage *incidentBadgeImage; // @synthesize incidentBadgeImage=_incidentBadgeImage;
@property(readonly, nonatomic) double singleLineWidth;
@property(readonly, nonatomic) unsigned long long numberOfLines;
- (id)_createSizeConstraintsForArtworkViews:(id)arg1;	// IMP=0x001000000072866b
- (void)_configureContainerWithBackgroundIfNeeded:(id)arg1 constraints:(id)arg2;	// IMP=0x00100000007284cc
@property(readonly, nonatomic) UIImage *arrowImage; // @synthesize arrowImage=_arrowImage;
- (id)_arrowImageView;	// IMP=0x00100000007282d2
- (id)_segmentContainer;	// IMP=0x001000000072825f
- (id)_addViewForArtwork:(id)arg1 inContainer:(id)arg2 constraints:(id)arg3 previousViewInSegment:(id)arg4 leadingSpacing:(double)arg5;	// IMP=0x0010000000727d53
- (void)_createNewMultilineShieldView;	// IMP=0x00100000007279de
- (void)_updateArtworkImageViewWithArtworks;	// IMP=0x0010000000726e65
- (void)_updateTintColorForArrowImageView:(id)arg1;	// IMP=0x0010000000726dbb
- (void)_updateTintColorForView:(id)arg1;	// IMP=0x0010000000726cfc
- (void)_updateTintColor:(id)arg1;	// IMP=0x0010000000726807
- (CDStruct_7660b417)_metrics;	// IMP=0x00100000007265ef
- (void)_commonInit;	// IMP=0x00100000007265ab
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000072654d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000007264de

@end
