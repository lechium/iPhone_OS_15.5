//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADMUXCompanionSyncTokenContainer : NSObject
{
    NSMutableDictionary *_aceHostSyncTokens;	// 8 = 0x8
    NSString *_primeToken;	// 16 = 0x10
    double _lastPrimeTokenTimestamp;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_fileOperationQueue;	// 32 = 0x20
    NSFileHandle *_fileHandle;	// 40 = 0x28
    struct os_unfair_lock_s _tokenLock;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001de31b
+ (id)sharedInstance;	// IMP=0x00100000001de2c6
- (void).cxx_destruct;	// IMP=0x00200000001df0eb
@property(retain, nonatomic) NSMutableDictionary *aceHostSyncTokens; // @synthesize aceHostSyncTokens=_aceHostSyncTokens;
@property(nonatomic) double lastPrimeTokenTimestamp; // @synthesize lastPrimeTokenTimestamp=_lastPrimeTokenTimestamp;
- (void)handleMuxTokenExchangeMessage:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001dee05
@property(copy, nonatomic) NSString *primeToken;
- (id)getSyncTokenForAceHost:(id)arg1;	// IMP=0x00100000001dec53
- (void)putSyncToken:(id)arg1 forAceHost:(id)arg2;	// IMP=0x00100000001debc8
- (void)_writeTokensToFile;	// IMP=0x00100000001deadc
- (void)_syncTokens;	// IMP=0x00100000001dea7b
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001de91a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001de870
- (_Bool)_loadContentsOfFileIfExists;	// IMP=0x00100000001de3da
- (id)init;	// IMP=0x00100000001de323

@end
