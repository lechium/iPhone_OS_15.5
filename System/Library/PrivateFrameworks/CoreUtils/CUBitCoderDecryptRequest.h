//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CUBitCoderDecryptRequest : NSObject
{
    NSData *_aad;	// 8 = 0x8
    unsigned long long _authTagLength;	// 16 = 0x10
    NSData *_data;	// 24 = 0x18
    NSData *_nonce;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000029e27
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(copy, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) unsigned long long authTagLength; // @synthesize authTagLength=_authTagLength;
@property(copy, nonatomic) NSData *aad; // @synthesize aad=_aad;

@end
