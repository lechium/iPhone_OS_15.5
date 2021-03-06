//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerTextImage
{
    CLKTextProvider *_textProvider;	// 64 = 0x40
    CLKFullColorImageProvider *_imageProvider;	// 72 = 0x48
}

+ (id)templateWithTextProvider:(id)arg1 imageProvider:(id)arg2;	// IMP=0x000000000001918c
- (void).cxx_destruct;	// IMP=0x000000000001951c
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001922d
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019203
- (long long)compatibleFamily;	// IMP=0x00000000000191f8
- (id)initWithTextProvider:(id)arg1 imageProvider:(id)arg2;	// IMP=0x00000000000190ee

@end

