//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class UISlidingBarConfiguration;

@interface UISlidingBarState : NSObject <NSCopying>
{
    _Bool __treatLeadingHiddenAsOverlaps;	// 8 = 0x8
    _Bool __treatTrailingHiddenAsOverlaps;	// 9 = 0x9
    _Bool __treatSupplementaryHiddenAsOverlaps;	// 10 = 0xa
    double _leadingWidth;	// 16 = 0x10
    double _leadingOffscreenWidth;	// 24 = 0x18
    double _trailingWidth;	// 32 = 0x20
    double _trailingOffscreenWidth;	// 40 = 0x28
    double _supplementaryWidth;	// 48 = 0x30
    double _supplementaryOffscreenWidth;	// 56 = 0x38
    double _mainWidth;	// 64 = 0x40
    double _leadingDragOffset;	// 72 = 0x48
    double _trailingDragOffset;	// 80 = 0x50
    double _supplementaryDragOffset;	// 88 = 0x58
    UISlidingBarConfiguration *_configuration;	// 96 = 0x60
    double __leadingOverlayWidth;	// 104 = 0x68
    double __trailingOverlayWidth;	// 112 = 0x70
    double __supplementaryOverlayWidth;	// 120 = 0x78
    double __rubberBandInset;	// 128 = 0x80
    double __keyboardAdjustment;	// 136 = 0x88
    long long __collapsedState;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x00000000004c213a
@property(nonatomic, setter=_setCollapsedState:) long long _collapsedState; // @synthesize _collapsedState=__collapsedState;
@property(nonatomic) double _keyboardAdjustment; // @synthesize _keyboardAdjustment=__keyboardAdjustment;
@property(nonatomic) double _rubberBandInset; // @synthesize _rubberBandInset=__rubberBandInset;
@property(nonatomic, setter=_setTreatSupplementaryHiddenAsOverlaps:) _Bool _treatSupplementaryHiddenAsOverlaps; // @synthesize _treatSupplementaryHiddenAsOverlaps=__treatSupplementaryHiddenAsOverlaps;
@property(nonatomic, setter=_setSupplementaryOverlayWidth:) double _supplementaryOverlayWidth; // @synthesize _supplementaryOverlayWidth=__supplementaryOverlayWidth;
@property(nonatomic, setter=_setTreatTrailingHiddenAsOverlaps:) _Bool _treatTrailingHiddenAsOverlaps; // @synthesize _treatTrailingHiddenAsOverlaps=__treatTrailingHiddenAsOverlaps;
@property(nonatomic, setter=_setTrailingOverlayWidth:) double _trailingOverlayWidth; // @synthesize _trailingOverlayWidth=__trailingOverlayWidth;
@property(nonatomic, setter=_setTreatLeadingHiddenAsOverlaps:) _Bool _treatLeadingHiddenAsOverlaps; // @synthesize _treatLeadingHiddenAsOverlaps=__treatLeadingHiddenAsOverlaps;
@property(nonatomic, setter=_setLeadingOverlayWidth:) double _leadingOverlayWidth; // @synthesize _leadingOverlayWidth=__leadingOverlayWidth;
@property(retain, nonatomic) UISlidingBarConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) double supplementaryDragOffset; // @synthesize supplementaryDragOffset=_supplementaryDragOffset;
@property(nonatomic) double trailingDragOffset; // @synthesize trailingDragOffset=_trailingDragOffset;
@property(nonatomic) double leadingDragOffset; // @synthesize leadingDragOffset=_leadingDragOffset;
@property(nonatomic) double mainWidth; // @synthesize mainWidth=_mainWidth;
@property(nonatomic) double supplementaryOffscreenWidth; // @synthesize supplementaryOffscreenWidth=_supplementaryOffscreenWidth;
@property(nonatomic) double supplementaryWidth; // @synthesize supplementaryWidth=_supplementaryWidth;
@property(nonatomic) double trailingOffscreenWidth; // @synthesize trailingOffscreenWidth=_trailingOffscreenWidth;
@property(nonatomic) double trailingWidth; // @synthesize trailingWidth=_trailingWidth;
@property(nonatomic) double leadingOffscreenWidth; // @synthesize leadingOffscreenWidth=_leadingOffscreenWidth;
@property(nonatomic) double leadingWidth; // @synthesize leadingWidth=_leadingWidth;
@property(readonly, nonatomic) _Bool isSupplementaryVisible;
@property(readonly, nonatomic) _Bool isTrailingVisible;
@property(readonly, nonatomic) _Bool isLeadingVisible;
- (id)_interactiveStateRequest;	// IMP=0x00000000004c1be2
- (id)stateRequest;	// IMP=0x00000000004c1af7
- (id)_configuration;	// IMP=0x00000000004c1ae9
- (double)_absoluteDistanceFromRequest:(id)arg1;	// IMP=0x00000000004c19da
- (double)_distanceFromRequest:(id)arg1;	// IMP=0x00000000004c18fd
- (_Bool)matchesRequest:(id)arg1;	// IMP=0x00000000004c18d9
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
- (_Bool)_shouldUseSlidingBars;	// IMP=0x00000000004c18b4
- (_Bool)_trailingEntirelyOverlapsMain;	// IMP=0x00000000004c17f6
@property(readonly, nonatomic) _Bool trailingOverlapsMain;
- (_Bool)_leadingEntirelyOverlapsMain;	// IMP=0x00000000004c1672
@property(readonly, nonatomic) _Bool leadingOverlapsMain;
- (_Bool)_supplementaryEntirelyOverlapsMain;	// IMP=0x00000000004c154c
@property(readonly, nonatomic) _Bool supplementaryOverlapsMain;
- (unsigned long long)hash;	// IMP=0x00000000004c140a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004c0fdb
- (id)description;	// IMP=0x00000000004c0b4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004c08f0

@end

