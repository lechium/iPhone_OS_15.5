//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <OfficeImport/SFUInputStream-Protocol.h>

@class NSString;
@protocol OISFUBufferedInputStream;

__attribute__((visibility("hidden")))
@interface OISFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;	// 8 = 0x8
    long long mOffset;	// 120 = 0x78
    id <OISFUBufferedInputStream> mInput;	// 128 = 0x80
    char *mOutBuffer;	// 136 = 0x88
    unsigned long long mOutBufferSize;	// 144 = 0x90
    _Bool mReachedEnd;	// 152 = 0x98
    _Bool mIsFromZip;	// 153 = 0x99
    unsigned long long mCalculatedCrc;	// 160 = 0xa0
    unsigned long long mCheckCrc;	// 168 = 0xa8
}

- (long long)totalCompressedBytesConsumed;	// IMP=0x000000000029ffeb
- (id)closeLocalStream;	// IMP=0x000000000029ffde
- (void)close;	// IMP=0x000000000029ffac
- (void)enableSystemCaching;	// IMP=0x000000000029ff93
- (void)disableSystemCaching;	// IMP=0x000000000029ff7a
- (long long)offset;	// IMP=0x000000000029ff70
- (_Bool)canSeek;	// IMP=0x000000000029ff68
- (void)seekToOffset:(long long)arg1;	// IMP=0x000000000029fed1
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000029fbfa
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000029fb5c
- (void)dealloc;	// IMP=0x000000000029fb09
- (id)initWithInput:(id)arg1;	// IMP=0x000000000029fa44
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;	// IMP=0x000000000029f960
- (void)setupInflateStream;	// IMP=0x000000000029fff5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

