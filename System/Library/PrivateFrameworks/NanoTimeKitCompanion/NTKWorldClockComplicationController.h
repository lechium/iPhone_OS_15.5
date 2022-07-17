//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class NSDate, NTKWorldClockComplication;
@protocol NTKWorldClockComplicationDisplay;

@interface NTKWorldClockComplicationController <NTKTimeTravel>
{
    struct {
        unsigned int wantsShortCity:1;
        unsigned int wantsLongCity:1;
    } _displayFlags;	// 8 = 0x8
    NSDate *_timeTravelDate;	// 16 = 0x10
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1 forDevice:(id)arg2;	// IMP=0x0000000000125428
- (void).cxx_destruct;	// IMP=0x0000000000125d94
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000125cc5
- (void)_endTimeTravelAnimated:(_Bool)arg1;	// IMP=0x0000000000125c23
- (void)_startTimeTravelAnimated:(_Bool)arg1;	// IMP=0x0000000000125b81
- (void)_handleTimeZoneChange;	// IMP=0x0000000000125b0c
- (void)_handleLocaleChange;	// IMP=0x0000000000125a97
- (void)_handleAbbreviationStoreChange:(id)arg1;	// IMP=0x0000000000125a76
- (void)_updateDisplay;	// IMP=0x0000000000125897
- (id)complicationApplicationIdentifier;	// IMP=0x0000000000125883
- (void)performTapAction;	// IMP=0x000000000012578c
- (_Bool)hasTapAction;	// IMP=0x0000000000125784
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;	// IMP=0x0000000000125696
- (void)setPauseDate:(id)arg1;	// IMP=0x00000000001255f7
- (void)_configureForLegacyDisplay:(id)arg1;	// IMP=0x0000000000125572
- (void)_deactivate;	// IMP=0x00000000001254de
- (void)_activate;	// IMP=0x0000000000125435

// Remaining properties
@property(readonly, nonatomic) NTKWorldClockComplication *complication; // @dynamic complication;
@property(readonly, nonatomic) __weak id <NTKWorldClockComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end
