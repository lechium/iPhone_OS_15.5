//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TSUtility/SFUInputStream-Protocol.h>

@class NSString;
@protocol SFUBufferedInputStream;

@interface SFUZipInflateInputStream : NSObject <SFUInputStream>
{
    struct z_stream_s mStream;	// 8 = 0x8
    long long mOffset;	// 120 = 0x78
    id <SFUBufferedInputStream> mInput;	// 128 = 0x80
    char *mOutBuffer;	// 136 = 0x88
    unsigned long long mOutBufferSize;	// 144 = 0x90
    _Bool mReachedEnd;	// 152 = 0x98
    _Bool mIsFromZip;	// 153 = 0x99
    unsigned long long mCalculatedCrc;	// 160 = 0xa0
    unsigned long long mCheckCrc;	// 168 = 0xa8
}

- (long long)totalCompressedBytesConsumed;	// IMP=0x000000000004fb78
- (id)closeLocalStream;	// IMP=0x000000000004fb6b
- (void)close;	// IMP=0x000000000004fb39
- (void)enableSystemCaching;	// IMP=0x000000000004fb20
- (void)disableSystemCaching;	// IMP=0x000000000004fb07
- (long long)offset;	// IMP=0x000000000004fafd
- (_Bool)canSeek;	// IMP=0x000000000004faf5
- (void)seekToOffset:(long long)arg1;	// IMP=0x000000000004fa70
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000004f7c2
- (unsigned long long)readToOwnBuffer:(const char **)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000004f724
- (void)dealloc;	// IMP=0x000000000004f6d1
- (id)initWithInput:(id)arg1;	// IMP=0x000000000004f60c
- (id)initWithOffset:(long long)arg1 end:(long long)arg2 uncompressedSize:(unsigned long long)arg3 crc:(unsigned long long)arg4 dataRepresentation:(id)arg5;	// IMP=0x000000000004f528
- (void)setupInflateStream;	// IMP=0x000000000004fb82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

