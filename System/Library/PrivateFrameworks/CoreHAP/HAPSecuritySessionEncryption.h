//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData;

@interface HAPSecuritySessionEncryption : NSObject
{
    NSData *_inputKey;	// 8 = 0x8
    NSMutableData *_inputNonce;	// 16 = 0x10
    NSData *_outputKey;	// 24 = 0x18
    NSMutableData *_outputNonce;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000049a10
@property(retain, nonatomic) NSMutableData *outputNonce; // @synthesize outputNonce=_outputNonce;
@property(retain, nonatomic) NSData *outputKey; // @synthesize outputKey=_outputKey;
@property(retain, nonatomic) NSMutableData *inputNonce; // @synthesize inputNonce=_inputNonce;
@property(retain, nonatomic) NSData *inputKey; // @synthesize inputKey=_inputKey;
- (id)decrypt:(const void *)arg1 length:(unsigned long long)arg2 additionalAuthData:(const void *)arg3 additionalAuthDataLength:(unsigned long long)arg4 authTagData:(const void *)arg5 authTagDataLength:(unsigned long long)arg6 error:(id *)arg7;	// IMP=0x0000000000049758
- (id)decrypt:(id)arg1 additionalAuthenticatedData:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000049419
- (id)encrypt:(id)arg1 additionalAuthenticatedData:(id)arg2;	// IMP=0x00000000000491ad
- (id)initWithInputKey:(id)arg1 outputKey:(id)arg2;	// IMP=0x000000000004906d
- (id)init;	// IMP=0x000000000004903e

@end

