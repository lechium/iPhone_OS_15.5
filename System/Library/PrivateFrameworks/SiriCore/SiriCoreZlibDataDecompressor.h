//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface SiriCoreZlibDataDecompressor
{
    struct z_stream_s _inflateStream;	// 8 = 0x8
    unsigned char _inflateBuffer[8192];	// 120 = 0x78
}

- (id)decompressedDataForData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000025f31
- (void)dealloc;	// IMP=0x0000000000025ef1
- (id)init;	// IMP=0x0000000000025e35

@end
