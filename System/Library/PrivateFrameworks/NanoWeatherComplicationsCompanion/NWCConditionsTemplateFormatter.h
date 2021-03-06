//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class CLKTextProvider, NSString, NWMTemperatureFormatter;

@interface NWCConditionsTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NWMTemperatureFormatter *_temperatureFormatter;	// 8 = 0x8
    CLKTextProvider *_noDataTextProvider;	// 16 = 0x10
}

+ (unsigned long long)_codeForConditions:(id)arg1;	// IMP=0x0000000000009905
+ (id)sharedFormatter;	// IMP=0x0000000000009226
- (void).cxx_destruct;	// IMP=0x0000000000009a6d
@property(retain, nonatomic) CLKTextProvider *noDataTextProvider; // @synthesize noDataTextProvider=_noDataTextProvider;
@property(retain, nonatomic) NWMTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
- (id)_nonRichSymbolProviderForModel:(id)arg1;	// IMP=0x00000000000097ce
- (id)_graphicRectangularTemplateWithTextProvider:(id)arg1 hourlyForecastEntryModels:(id)arg2 timeZone:(id)arg3;	// IMP=0x0000000000009618
- (id)switcherTemplateWithFamily:(long long)arg1;	// IMP=0x00000000000092a0
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;	// IMP=0x000000000000927b
- (id)utilitarianSmallTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000913a
- (id)modularSmallTemplateForEntryModel:(id)arg1;	// IMP=0x0000000000009016
- (id)graphicRectangularTemplateForLocalLocation:(_Bool)arg1 timeZone:(id)arg2 entryModel:(id)arg3;	// IMP=0x0000000000008b2d
- (id)graphicCornerTemplateForEntryModel:(id)arg1;	// IMP=0x00000000000089ba
- (id)graphicExtraLargeCircularTemplateForEntryModel:(id)arg1;	// IMP=0x00000000000089a0
- (id)graphicCircularTemplateForEntryModel:(id)arg1;	// IMP=0x0000000000008986
- (id)_richCircularTemplateForComplicationFamily:(long long)arg1 entryModel:(id)arg2;	// IMP=0x00000000000086f2
- (id)graphicBezelTemplateForEntryModel:(id)arg1;	// IMP=0x0000000000008328
- (id)extraLargeTemplateForEntryModel:(id)arg1;	// IMP=0x000000000000823c
- (id)circularSmallTemplateForEntryModel:(id)arg1;	// IMP=0x0000000000008150
- (id)circularMediumTemplateForEntryModel:(id)arg1;	// IMP=0x0000000000008064

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

