//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider;

@interface CLKComplicationTemplateGraphicCircularImage
{
    CLKFullColorImageProvider *_imageProvider;	// 64 = 0x40
}

+ (id)templateWithImageProvider:(id)arg1;	// IMP=0x000000000001aa01
- (void).cxx_destruct;	// IMP=0x000000000001ad35
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001aa4a
- (id)initWithImageProvider:(id)arg1;	// IMP=0x000000000001a999

@end

