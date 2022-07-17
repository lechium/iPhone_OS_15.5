//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class NSString, NWMTemperatureFormatter;

@interface NWCWeatherTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NWMTemperatureFormatter *_temperatureFormatter;	// 8 = 0x8
}

+ (id)sharedFormatter;	// IMP=0x000000000000e00f
- (void).cxx_destruct;	// IMP=0x000000000000e2da
@property(retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
- (id)switcherTemplateWithFamily:(long long)arg1;	// IMP=0x000000000000e089
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;	// IMP=0x000000000000e064
- (id)utilitarianSmallTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000dec5
- (id)utilitarianLargeTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000dc96
- (id)modularSmallTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000db58
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(_Bool)arg2 entryModel:(id)arg3;	// IMP=0x000000000000d5b4
- (id)graphicCornerTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000d2c8
- (id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000d2ae
- (id)graphicCircularTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000d294
- (id)_richCircularTemplateForComplicationFamily:(long long)arg1 entryModel:(id)arg2;	// IMP=0x000000000000cf46
- (id)graphicBezelTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000ceef
- (id)extraLargeTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000cdae
- (id)circularSmallTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000cc67
- (id)circularMediumTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000cb58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
