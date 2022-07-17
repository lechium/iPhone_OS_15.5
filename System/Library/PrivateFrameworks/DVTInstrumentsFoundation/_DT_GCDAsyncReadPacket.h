//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface _DT_GCDAsyncReadPacket : NSObject
{
    NSMutableData *buffer;	// 8 = 0x8
    unsigned long long startOffset;	// 16 = 0x10
    unsigned long long bytesDone;	// 24 = 0x18
    unsigned long long maxLength;	// 32 = 0x20
    double timeout;	// 40 = 0x28
    unsigned long long readLength;	// 48 = 0x30
    NSData *term;	// 56 = 0x38
    _Bool bufferOwner;	// 64 = 0x40
    unsigned long long originalBufferLength;	// 72 = 0x48
    long long tag;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002a858
- (long long)searchForTermAfterPreBuffering:(long long)arg1;	// IMP=0x000000000002a72b
- (unsigned long long)readLengthForTermWithPreBuffer:(id)arg1 found:(_Bool *)arg2;	// IMP=0x000000000002a3ff
- (unsigned long long)readLengthForTermWithHint:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;	// IMP=0x000000000002a2c5
- (unsigned long long)readLengthForNonTermWithHint:(unsigned long long)arg1;	// IMP=0x000000000002a1b3
- (unsigned long long)optimalReadLengthWithDefault:(unsigned long long)arg1 shouldPreBuffer:(_Bool *)arg2;	// IMP=0x000000000002a135
- (void)ensureCapacityForAdditionalDataOfLength:(unsigned long long)arg1;	// IMP=0x000000000002a0e7
- (id)initWithData:(id)arg1 startOffset:(unsigned long long)arg2 maxLength:(unsigned long long)arg3 timeout:(double)arg4 readLength:(unsigned long long)arg5 terminator:(id)arg6 tag:(long long)arg7;	// IMP=0x0000000000029f7f

@end
