//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PBReader
{
    struct PptObjectFactory *mPptObjectFactory;	// 72 = 0x48
    const void *mBuffer;	// 80 = 0x50
}

- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;	// IMP=0x000000000043f72e
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;	// IMP=0x000000000000a390
@property(readonly, nonatomic) void *pptReader;
- (id)read;	// IMP=0x000000000000a4cb
- (_Bool)start;	// IMP=0x00000000000041de
- (void)dealloc;	// IMP=0x00000000000b1e47
- (id)initWithCancelDelegate:(id)arg1;	// IMP=0x000000000043f630

@end

