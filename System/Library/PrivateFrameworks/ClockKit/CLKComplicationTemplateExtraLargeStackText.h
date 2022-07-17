//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider;

@interface CLKComplicationTemplateExtraLargeStackText
{
    CLKTextProvider *_line1TextProvider;	// 64 = 0x40
    CLKTextProvider *_line2TextProvider;	// 72 = 0x48
    unsigned long long _highlightMode;	// 80 = 0x50
}

+ (id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;	// IMP=0x0000000000016ea7
- (void).cxx_destruct;	// IMP=0x0000000000017201
@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKTextProvider *line1TextProvider; // @synthesize line1TextProvider=_line1TextProvider;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;	// IMP=0x00000000000170f4
- (id)initPrivateWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000016fea
@property(nonatomic) _Bool highlightLine2;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f84
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016f1e
- (long long)compatibleFamily;	// IMP=0x0000000000016f13
- (id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;	// IMP=0x0000000000016e09

@end
