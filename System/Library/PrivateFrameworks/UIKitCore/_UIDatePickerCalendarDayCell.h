//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIPointerInteraction;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarDayCell <UIPointerInteractionDelegate>
{
    UIPointerInteraction *_pointerInteraction;	// 8 = 0x8
    struct {
        unsigned int overhangMonth:1;
        unsigned int outOfRange:1;
        unsigned int isToday:1;
    } _flags;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
    NSString *_fontDesign;	// 32 = 0x20
    struct CGSize _lastKnownSize;	// 40 = 0x28
}

+ (id)emphasizedFontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x0000000000b560b9
+ (id)fontForTraitCollection:(id)arg1 fontDesign:(id)arg2;	// IMP=0x0000000000b5609c
+ (id)reuseIdentifier;	// IMP=0x0000000000b5608a
- (void).cxx_destruct;	// IMP=0x0000000000b5748a
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x0000000000b571db
- (void)updateConfigurationUsingState:(id)arg1;	// IMP=0x0000000000b5690e
- (id)configurationState;	// IMP=0x0000000000b5684a
- (_Bool)_wantsRoundedSquare;	// IMP=0x0000000000b567e2
- (void)setSelected:(_Bool)arg1;	// IMP=0x0000000000b56799
- (void)configureWithDay:(id)arg1 formatter:(id)arg2 fontDesign:(id)arg3 outOfRange:(_Bool)arg4 renderOverhangDays:(_Bool)arg5;	// IMP=0x0000000000b564df
- (void)tintColorDidChange;	// IMP=0x0000000000b5649e
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000b5640f
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000b56380
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000b562c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
