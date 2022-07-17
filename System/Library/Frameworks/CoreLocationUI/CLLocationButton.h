//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <CoreLocationUI/NSSecureCoding-Protocol.h>

@class NSString, UIColor, _UISlotView;
@protocol LocationUIProtocol;

@interface CLLocationButton : UIControl <NSSecureCoding>
{
    _UISlotView *_slotView;	// 8 = 0x8
    UIColor *_backgroundColor;	// 16 = 0x10
    UIColor *_tintColor;	// 24 = 0x18
    NSString *_sandboxExtension;	// 32 = 0x20
    struct CGSize _intrinsicSize;	// 40 = 0x28
    id <LocationUIProtocol> _proxy;	// 56 = 0x38
    _Bool _colorsIllegible;	// 64 = 0x40
    _Bool _alphaInsufficient;	// 65 = 0x41
    long long _icon;	// 72 = 0x48
    long long _label;	// 80 = 0x50
    double _fontSize;	// 88 = 0x58
    double _cornerRadius;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002350
- (void).cxx_destruct;	// IMP=0x00000000000044f0
@property(readonly, nonatomic) _Bool alphaInsufficient; // @synthesize alphaInsufficient=_alphaInsufficient;
@property(readonly, nonatomic) _Bool colorsIllegible; // @synthesize colorsIllegible=_colorsIllegible;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) long long label; // @synthesize label=_label;
@property(nonatomic) long long icon; // @synthesize icon=_icon;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000043c0
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000004330
- (void)layoutSubviews;	// IMP=0x00000000000042d0
- (void)_yieldSlotViewContentForLayerContextID:(unsigned long long)arg1 slotStyle:(id)arg2 withYieldBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000037e0
- (id)_computeLocationButtonTag;	// IMP=0x0000000000003310
- (void)setTintColor:(id)arg1;	// IMP=0x0000000000003250
- (id)tintColor;	// IMP=0x0000000000003220
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000031b0
- (id)backgroundColor;	// IMP=0x0000000000003180
- (void)_actionForPreSetTarget;	// IMP=0x00000000000030a0
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;	// IMP=0x0000000000002fa0
- (void)_setupSlotView;	// IMP=0x0000000000002780
@property(readonly, nonatomic) id <LocationUIProtocol> locationUIProxy;
- (void)markDirty;	// IMP=0x0000000000002370
- (void)_populateArchivedSubviews:(id)arg1;	// IMP=0x00000000000022c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002110
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001e80
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000001d90
- (id)init;	// IMP=0x0000000000001cc0

@end
