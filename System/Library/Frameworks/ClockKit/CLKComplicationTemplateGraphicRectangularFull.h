//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicRectangularFull
{
    CLKFullColorImageProvider *_imageProvider;	// 64 = 0x40
}

+ (id)templateWithImageProvider:(id)arg1;	// IMP=0x000000000001f735
- (void).cxx_destruct;	// IMP=0x000000000001faaa
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f789
- (long long)compatibleFamily;	// IMP=0x000000000001f77e
- (id)initWithImageProvider:(id)arg1;	// IMP=0x000000000001f6cd

@end

