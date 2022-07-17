//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class BSUIEmojiLabelView, MPAVRoute, NSMutableSet, NSString, UIColor, UIFont, UILabel;

@interface MPRouteLabel : UIView
{
    NSString *_designatedGroupLeaderName;	// 8 = 0x8
    NSString *_previousDesignatedGroupLeaderName;	// 16 = 0x10
    struct CGRect _previousBounds;	// 24 = 0x18
    UIFont *_previousFont;	// 56 = 0x38
    NSMutableSet *_previousRouteNames;	// 64 = 0x40
    _Bool _previousForcesUppercaseText;	// 72 = 0x48
    _Bool _previousDisplayAsSiriSuggestion;	// 73 = 0x49
    long long _previousTruncationMode;	// 80 = 0x50
    NSMutableSet *_routeNames;	// 88 = 0x58
    UILabel *_sizingLabel;	// 96 = 0x60
    _Bool _forcesUppercaseText;	// 104 = 0x68
    _Bool _displayAsSiriSuggestion;	// 105 = 0x69
    long long _minimumEndCharacterCount;	// 112 = 0x70
    NSString *_text;	// 120 = 0x78
    long long _truncationMode;	// 128 = 0x80
    MPAVRoute *_route;	// 136 = 0x88
    BSUIEmojiLabelView *_contentView;	// 144 = 0x90
    UIColor *_textColor;	// 152 = 0x98
    UIFont *_font;	// 160 = 0xa0
    long long _textAlignment;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x00000000002ef08c
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) BSUIEmojiLabelView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MPAVRoute *route; // @synthesize route=_route;
@property(nonatomic) _Bool displayAsSiriSuggestion; // @synthesize displayAsSiriSuggestion=_displayAsSiriSuggestion;
@property(nonatomic) _Bool forcesUppercaseText; // @synthesize forcesUppercaseText=_forcesUppercaseText;
@property(nonatomic) long long truncationMode; // @synthesize truncationMode=_truncationMode;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) long long minimumEndCharacterCount; // @synthesize minimumEndCharacterCount=_minimumEndCharacterCount;
- (long long)_compareLength:(id)arg1 with:(id)arg2;	// IMP=0x00000000002eef2e
- (void)_routeDidChangeNotification:(id)arg1;	// IMP=0x00000000002eeecf
- (id)_marketingNames;	// IMP=0x00000000002eee9f
- (id)_bestStringThatFitsSize:(struct CGSize)arg1;	// IMP=0x00000000002ee407
- (void)_updateTitleIfNeeded;	// IMP=0x00000000002ee12b
- (id)_truncateText:(id)arg1 by:(long long)arg2;	// IMP=0x00000000002ede41
- (void)_updateRouteLabel;	// IMP=0x00000000002ede00
- (_Bool)_labelFitsText:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000000002edd9b
- (struct CGSize)_labelSizeForText:(id)arg1;	// IMP=0x00000000002edd58
- (id)_plusSeparatedRouteNames:(id)arg1;	// IMP=0x00000000002edc9b
- (id)_routeNamesSortedLength:(id)arg1;	// IMP=0x00000000002edc3a
- (id)_routeNamesSortedAlphanumeric:(id)arg1;	// IMP=0x00000000002edc1e
- (id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2;	// IMP=0x00000000002ed7e9
- (void)removeRouteNamesFromArray:(id)arg1;	// IMP=0x00000000002ed684
- (void)removeRouteName:(id)arg1;	// IMP=0x00000000002ed63e
- (void)addRouteNamesFromArray:(id)arg1;	// IMP=0x00000000002ed5f8
- (void)addRouteName:(id)arg1;	// IMP=0x00000000002ed5b2
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002ed53a
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000002ed46c
@property(nonatomic, setter=_setTextColorFollowsTintColor:) _Bool _textColorFollowsTintColor;
@property(readonly, nonatomic) double _baselineOffsetFromBottom;
@property(readonly, nonatomic) UILabel *titleLabel;
- (void)layoutSubviews;	// IMP=0x00000000002ecb1d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002ec991

@end
