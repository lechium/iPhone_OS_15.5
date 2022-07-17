//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicRectangularLargeViewBridge
{
    CLKTextProvider *_headerTextProvider;	// 64 = 0x40
    NSData *_contentData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000023d9b
@property(retain, nonatomic) NSData *contentData; // @synthesize contentData=_contentData;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
- (id)serializableCopyWithImageProviders:(id)arg1;	// IMP=0x0000000000023c7b
- (_Bool)needsSerializableCopy;	// IMP=0x0000000000023c73
- (_Bool)usesSwiftUI;	// IMP=0x0000000000023c6b
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;	// IMP=0x0000000000023c3c
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023c12
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023be8
- (long long)compatibleFamily;	// IMP=0x0000000000023bdd

@end
