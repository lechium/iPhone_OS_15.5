//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOutputStream.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BRCChecksummingOutputStream : NSOutputStream
{
    struct CC_SHA1state_st _ctx;	// 8 = 0x8
    unsigned char _sig[21];	// 104 = 0x68
    _Bool _isOpen;	// 125 = 0x7d
}

+ (id)checksummingOutputStreamWithTag:(unsigned char)arg1;	// IMP=0x000000000005991c
- (long long)write:(const char *)arg1 maxLength:(unsigned long long)arg2;	// IMP=0x0000000000059a27
- (unsigned long long)streamStatus;	// IMP=0x0000000000059a09
- (void)close;	// IMP=0x00000000000599cb
- (void)open;	// IMP=0x0000000000059959
- (_Bool)hasSpaceAvailable;	// IMP=0x0000000000059951
- (id)initWithTag:(unsigned char)arg1;	// IMP=0x00000000000598da
@property(readonly, nonatomic) NSData *signature;

@end
