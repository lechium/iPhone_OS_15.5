//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface WBSHistoryCrypto : NSObject
{
    NSData *_cachedCryptographicKey;	// 8 = 0x8
    NSData *_salt;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000f1f35
@property(readonly, nonatomic) NSData *salt; // @synthesize salt=_salt;
- (id)decryptDictionary:(id)arg1;	// IMP=0x00000000000f1cd4
- (id)encryptDictionary:(id)arg1;	// IMP=0x00000000000f1ab0
@property(readonly, nonatomic) NSData *cryptographicKey;
- (id)_createOrLoadCryptographicKey;	// IMP=0x00000000000f187f
- (id)_createCryptographicKey;	// IMP=0x00000000000f1810
- (id)initWithCryptographicKey:(id)arg1 salt:(id)arg2;	// IMP=0x00000000000f16fb
- (id)init;	// IMP=0x00000000000f16e5

@end

