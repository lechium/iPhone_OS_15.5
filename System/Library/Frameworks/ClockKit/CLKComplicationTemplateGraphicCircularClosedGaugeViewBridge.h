//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKGaugeProvider, NSData;

@interface CLKComplicationTemplateGraphicCircularClosedGaugeViewBridge
{
    CLKGaugeProvider *_gaugeProvider;	// 64 = 0x40
    NSData *_labelData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000023945
@property(retain, nonatomic) NSData *labelData; // @synthesize labelData=_labelData;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (id)serializableCopyWithImageProviders:(id)arg1;	// IMP=0x0000000000023825
- (_Bool)needsSerializableCopy;	// IMP=0x000000000002381d
- (_Bool)usesSwiftUI;	// IMP=0x0000000000023815
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;	// IMP=0x00000000000237e6
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000237bc
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023792

@end

