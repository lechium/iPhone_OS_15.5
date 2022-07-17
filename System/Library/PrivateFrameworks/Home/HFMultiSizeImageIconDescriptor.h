//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface HFMultiSizeImageIconDescriptor
{
    NSDictionary *_imageIdentifiersKeyedBySize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000a106
@property(retain, nonatomic) NSDictionary *imageIdentifiersKeyedBySize; // @synthesize imageIdentifiersKeyedBySize=_imageIdentifiersKeyedBySize;
- (long long)compare:(id)arg1;	// IMP=0x000000000000a0d9
- (unsigned long long)hash;	// IMP=0x000000000000a095
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009f62
- (id)imageIdentifierForSize:(id)arg1;	// IMP=0x0000000000009e97
- (id)initWithImageIdentifiersKeyedBySize:(id)arg1 defaultImageIdentifier:(id)arg2;	// IMP=0x0000000000009dea
- (id)initWithImageIdentifiersKeyedBySize:(id)arg1;	// IMP=0x0000000000009d72

@end
