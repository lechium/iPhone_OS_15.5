//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LogHead, NSData;

@interface SignedLogHead
{
    _Bool _gossip;	// 8 = 0x8
}

+ (id)signedTypeWithObject:(id)arg1;	// IMP=0x00000000000b6da7
+ (id)signedTypeWithObject:(id)arg1 verifier:(id)arg2 dataStore:(id)arg3;	// IMP=0x00000000000b6cf3
@property _Bool gossip; // @synthesize gossip=_gossip;
- (unsigned long long)verifyWithError:(id *)arg1;	// IMP=0x00000000000b7785
- (void)storeSignatureResult:(unsigned long long)arg1 signatureError:(id *)arg2;	// IMP=0x00000000000b7414
- (id)createManagedObjectWithError:(id *)arg1;	// IMP=0x00000000000b7214
- (id)copyManagedObject:(id *)arg1;	// IMP=0x00000000000b7046
@property(readonly) LogHead *parsedLogHead;
@property(retain, nonatomic) NSData *logHead;

@end

