//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFUnfairLock, NSData;

@interface HMIdentifierSaltStore : NSObject
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSData *_identifierSalt;	// 16 = 0x10
    NSData *_assistantIdentifierSalt;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000608515
@property(retain, nonatomic) NSData *assistantIdentifierSalt; // @synthesize assistantIdentifierSalt=_assistantIdentifierSalt;
@property(retain, nonatomic) NSData *identifierSalt; // @synthesize identifierSalt=_identifierSalt;
- (id)init;	// IMP=0x00000000006080dd

@end
