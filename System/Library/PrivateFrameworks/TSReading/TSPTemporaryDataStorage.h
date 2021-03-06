//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage
{
    NSURL *_URL;	// 8 = 0x8
    SFUCryptoKey *_decryptionKey;	// 16 = 0x10
    _Bool _isMissingData;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000071fd7
@property(nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071d6b
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071d0b
- (void)dealloc;	// IMP=0x0000000000071b1d
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000071b08
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;	// IMP=0x0000000000071920

@end

