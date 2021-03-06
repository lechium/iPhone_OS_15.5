//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerGaugeImage
{
    CLKGaugeProvider *_gaugeProvider;	// 64 = 0x40
    CLKTextProvider *_leadingTextProvider;	// 72 = 0x48
    CLKTextProvider *_trailingTextProvider;	// 80 = 0x50
    CLKFullColorImageProvider *_imageProvider;	// 88 = 0x58
}

+ (id)templateWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4;	// IMP=0x0000000000018c1d
+ (id)templateWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;	// IMP=0x0000000000018bb1
- (void).cxx_destruct;	// IMP=0x000000000001909b
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(copy, nonatomic) CLKTextProvider *trailingTextProvider; // @synthesize trailingTextProvider=_trailingTextProvider;
@property(copy, nonatomic) CLKTextProvider *leadingTextProvider; // @synthesize leadingTextProvider=_leadingTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d68
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018d3e
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018cd2
- (long long)compatibleFamily;	// IMP=0x0000000000018cc7
- (id)initWithGaugeProvider:(id)arg1 leadingTextProvider:(id)arg2 trailingTextProvider:(id)arg3 imageProvider:(id)arg4;	// IMP=0x0000000000018ac0
- (id)initWithGaugeProvider:(id)arg1 imageProvider:(id)arg2;	// IMP=0x0000000000018aa6

@end

