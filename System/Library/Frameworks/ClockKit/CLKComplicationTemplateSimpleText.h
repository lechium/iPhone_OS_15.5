//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider;

@interface CLKComplicationTemplateSimpleText
{
    CLKTextProvider *_textProvider;	// 64 = 0x40
}

+ (id)templateWithTextProvider:(id)arg1;	// IMP=0x00000000000138ac
- (void).cxx_destruct;	// IMP=0x000000000001394c
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013900
- (long long)compatibleFamily;	// IMP=0x00000000000138f5
- (id)initWithTextProvider:(id)arg1;	// IMP=0x0000000000013844

@end
