//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUCryptoKey : NSObject
{
    unsigned int mIterationCount;	// 8 = 0x8
    char *mKey;	// 16 = 0x10
    unsigned long long mKeyLength;	// 24 = 0x18
    NSData *mSaltData;	// 32 = 0x20
    NSString *_passphrase;	// 40 = 0x28
}

@property(readonly, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
- (id)saltData;	// IMP=0x00000000002911b2
- (unsigned long long)keyLength;	// IMP=0x00000000002911a8
- (const char *)keyData;	// IMP=0x000000000029119e
- (unsigned int)iterationCount;	// IMP=0x0000000000291195
- (int)keyType;	// IMP=0x000000000029118d
- (void)dealloc;	// IMP=0x000000000029112d
- (id)initAes128Key:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;	// IMP=0x0000000000291096
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3 saltData:(id)arg4;	// IMP=0x0000000000290f74
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2 saltData:(id)arg3;	// IMP=0x0000000000290efb
- (id)initAes128KeyFromPassphrase:(const char *)arg1 length:(unsigned int)arg2 iterationCount:(unsigned int)arg3;	// IMP=0x0000000000290ee6
- (id)initAes128KeyFromPassphrase:(id)arg1 withIterationCountAndSaltDataFromCryptoKey:(id)arg2;	// IMP=0x0000000000290e58
- (id)initAes128KeyFromPassphrase:(id)arg1 iterationCount:(unsigned int)arg2;	// IMP=0x0000000000290ddb

@end
