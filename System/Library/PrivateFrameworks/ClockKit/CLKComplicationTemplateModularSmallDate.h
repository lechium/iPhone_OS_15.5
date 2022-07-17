//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKDateTextProvider;

@interface CLKComplicationTemplateModularSmallDate
{
    CLKDateTextProvider *_weekdayTextProvider;	// 64 = 0x40
    CLKDateTextProvider *_dayTextProvider;	// 72 = 0x48
    unsigned long long _highlightMode;	// 80 = 0x50
}

+ (id)templateWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;	// IMP=0x0000000000010f5f
- (void).cxx_destruct;	// IMP=0x00000000000112b6
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKDateTextProvider *dayTextProvider; // @synthesize dayTextProvider=_dayTextProvider;
@property(copy, nonatomic) CLKDateTextProvider *weekdayTextProvider; // @synthesize weekdayTextProvider=_weekdayTextProvider;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;	// IMP=0x00000000000111a9
- (id)initPrivateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000001109f
- (_Bool)highlightLine2;	// IMP=0x0000000000011086
- (void)setHighlightLine2:(_Bool)arg1;	// IMP=0x0000000000011072
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000011039
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010fd3
- (long long)compatibleFamily;	// IMP=0x0000000000010fcb
- (id)initWithWeekdayTextProvider:(id)arg1 dayTextProvider:(id)arg2;	// IMP=0x0000000000010ec1

@end
