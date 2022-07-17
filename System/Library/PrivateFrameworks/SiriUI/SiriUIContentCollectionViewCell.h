//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSMutableArray, SiriUIKeyline, UIColor, UIImageView, UILabel, UIView;

@interface SiriUIContentCollectionViewCell
{
    SiriUIKeyline *_keyline;	// 8 = 0x8
    UIImageView *_chevronView;	// 16 = 0x10
    _Bool _hasSetUpSubviewConstraints;	// 24 = 0x18
    _Bool _hasSetupStaticSubviewConstraints;	// 25 = 0x19
    NSLayoutConstraint *leftChevronWidthConstraint;	// 32 = 0x20
    NSLayoutConstraint *rightChevronWidthConstraint;	// 40 = 0x28
    NSMutableArray *_subviewConstraints;	// 48 = 0x30
    _Bool _hasChevron;	// 56 = 0x38
    long long _verticalAlignment;	// 64 = 0x40
    UIView *_accessoryView;	// 72 = 0x48
    UILabel *_textLabel;	// 80 = 0x50
    UIView *_customView;	// 88 = 0x58
    long long _keylineType;	// 96 = 0x60
    struct UIOffset _textOffset;	// 104 = 0x68
    struct UIOffset _accessoryOffset;	// 120 = 0x78
    struct UIOffset _chevronOffset;	// 136 = 0x88
    struct UIEdgeInsets _textAndAccessoryInsets;	// 152 = 0x98
    struct UIEdgeInsets _customViewEdgeInsets;	// 184 = 0xb8
}

+ (id)reuseIdentifier;	// IMP=0x0000000000007cfc
+ (_Bool)chevronBlendEffectEnabled;	// IMP=0x0000000000007cab
+ (double)chevronTrailingMargin;	// IMP=0x0000000000007c78
+ (struct UIEdgeInsets)defaultInsets;	// IMP=0x0000000000007bc8
- (void).cxx_destruct;	// IMP=0x0000000000008150
@property(nonatomic) _Bool hasChevron; // @synthesize hasChevron=_hasChevron;
@property(nonatomic) long long keylineType; // @synthesize keylineType=_keylineType;
@property(readonly, nonatomic) SiriUIKeyline *keyline; // @synthesize keyline=_keyline;
@property(nonatomic) struct UIOffset chevronOffset; // @synthesize chevronOffset=_chevronOffset;
@property(nonatomic) struct UIOffset accessoryOffset; // @synthesize accessoryOffset=_accessoryOffset;
@property(nonatomic) struct UIOffset textOffset; // @synthesize textOffset=_textOffset;
@property(nonatomic) struct UIEdgeInsets customViewEdgeInsets; // @synthesize customViewEdgeInsets=_customViewEdgeInsets;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(nonatomic) struct UIEdgeInsets textAndAccessoryInsets; // @synthesize textAndAccessoryInsets=_textAndAccessoryInsets;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
- (void)prepareForReuse;	// IMP=0x0000000000007d52
- (void)setNeedsUpdateSubviewConstraints;	// IMP=0x0000000000007cdf
@property(readonly, nonatomic) double chevronTrailingMargin;
- (void)layoutSubviews;	// IMP=0x0000000000007545
- (void)updateConstraints;	// IMP=0x00000000000073c4
- (void)_updateSubviewConstraints;	// IMP=0x0000000000006b3e
@property(retain, nonatomic) UIColor *keylineCustomBackgroundColor;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000006717

@end
