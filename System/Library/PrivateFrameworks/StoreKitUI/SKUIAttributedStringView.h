//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <StoreKitUI/SKUIReusableView-Protocol.h>

@class NSArray, NSLayoutManager, NSString, NSTextContainer, NSTextStorage, SKUIAttributedStringLayout, UIColor;
@protocol SKUILinkHandler;

__attribute__((visibility("hidden")))
@interface SKUIAttributedStringView : UIView <SKUIReusableView>
{
    double _calculatedTopInset;	// 8 = 0x8
    long long _firstLineTopInset;	// 16 = 0x10
    SKUIAttributedStringLayout *_layout;	// 24 = 0x18
    NSLayoutManager *_layoutManager;	// 32 = 0x20
    NSArray *_requiredBadges;	// 40 = 0x28
    long long _stringTreatment;	// 48 = 0x30
    _Bool _touchInside;	// 56 = 0x38
    struct _NSRange _trackingRange;	// 64 = 0x40
    _Bool _trackingTouch;	// 80 = 0x50
    struct CGRect _textBounds;	// 88 = 0x58
    UIColor *_textColor;	// 120 = 0x78
    NSTextContainer *_textContainer;	// 128 = 0x80
    NSTextStorage *_textStorage;	// 136 = 0x88
    UIColor *_treatmentColor;	// 144 = 0x90
    _Bool _containsLinks;	// 152 = 0x98
    _Bool _textColorFollowsTintColor;	// 153 = 0x99
    id <SKUILinkHandler> _linkDelegate;	// 160 = 0xa0
    long long _badgePlacement;	// 168 = 0xa8
}

+ (struct CGSize)sizeWithLayout:(id)arg1 treatment:(long long)arg2;	// IMP=0x00000000002f5b58
- (void).cxx_destruct;	// IMP=0x00000000002f86ca
@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long badgePlacement; // @synthesize badgePlacement=_badgePlacement;
@property(nonatomic) long long firstLineTopInset; // @synthesize firstLineTopInset=_firstLineTopInset;
@property(retain, nonatomic) UIColor *treatmentColor; // @synthesize treatmentColor=_treatmentColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) long long stringTreatment; // @synthesize stringTreatment=_stringTreatment;
@property(copy, nonatomic) NSArray *requiredBadges; // @synthesize requiredBadges=_requiredBadges;
@property(nonatomic) __weak id <SKUILinkHandler> linkDelegate; // @synthesize linkDelegate=_linkDelegate;
@property(retain, nonatomic) SKUIAttributedStringLayout *layout; // @synthesize layout=_layout;
@property(nonatomic) _Bool containsLinks; // @synthesize containsLinks=_containsLinks;
- (void)_setTouchInside:(_Bool)arg1;	// IMP=0x00000000002f85d3
- (void)_setTrackingTouch:(_Bool)arg1;	// IMP=0x00000000002f85b0
- (void)_reloadTopInset;	// IMP=0x00000000002f841e
- (void)tintColorDidChange;	// IMP=0x00000000002f83d0
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000002f7fb2
- (_Bool)_touchInsideLinkText:(struct CGPoint)arg1 linkTextRange:(struct _NSRange *)arg2;	// IMP=0x00000000002f7dff
- (void)_setupTapLocatorContainer;	// IMP=0x00000000002f7c6f
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000000002f64e6
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f6475
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f6323
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f6274
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000002f618b
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) _Bool usesTallCharacterSet;
@property(readonly, nonatomic) double firstBaselineOffset;
@property(readonly, nonatomic) double baselineOffset;
- (void)viewWasRecycled;	// IMP=0x00000000002f5ab7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002f5a55

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
