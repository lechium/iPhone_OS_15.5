//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKImageProvider;

@interface CLKComplicationTemplateExtraLargeSimpleImage
{
    CLKImageProvider *_imageProvider;	// 64 = 0x40
}

+ (id)templateWithImageProvider:(id)arg1;	// IMP=0x00000000000166e0
- (void).cxx_destruct;	// IMP=0x00000000000168a5
@property(copy, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016734
- (long long)compatibleFamily;	// IMP=0x0000000000016729
- (id)initWithImageProvider:(id)arg1;	// IMP=0x0000000000016678

@end

