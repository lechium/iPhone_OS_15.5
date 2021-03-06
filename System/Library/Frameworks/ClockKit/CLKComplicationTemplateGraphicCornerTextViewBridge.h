//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider, NSData;

@interface CLKComplicationTemplateGraphicCornerTextViewBridge
{
    CLKTextProvider *_textProvider;	// 64 = 0x40
    NSData *_labelData;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000023433
@property(retain, nonatomic) NSData *labelData; // @synthesize labelData=_labelData;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (id)serializableCopyWithImageProviders:(id)arg1;	// IMP=0x0000000000023313
- (_Bool)needsSerializableCopy;	// IMP=0x000000000002330b
- (_Bool)usesSwiftUI;	// IMP=0x0000000000023303
- (id)viewDataKeyForSwiftUIViewKey:(id)arg1;	// IMP=0x00000000000232d4
- (void)_enumerateSwiftUIViewDataKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000232aa
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023280
- (long long)compatibleFamily;	// IMP=0x0000000000023275

@end

