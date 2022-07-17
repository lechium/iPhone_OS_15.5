//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSTLKShare, NSData, NSString;

__attribute__((visibility("hidden")))
@interface CKKSTLKShareRecord
{
    CKKSTLKShare *_share;	// 8 = 0x8
}

+ (id)counts:(id)arg1 error:(id *)arg2;	// IMP=0x0040000000197f81
+ (_Bool)intransactionRecordDeleted:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000197cfa
+ (_Bool)intransactionRecordChanged:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000197b27
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x0010000000197739
+ (id)sqlColumns;	// IMP=0x001000000019772c
+ (id)sqlTable;	// IMP=0x001000000019771f
+ (id)ckrecordPrefix;	// IMP=0x0010000000197712
+ (id)tryFromDatabaseFromCKRecordID:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000197162
+ (id)allInZone:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000197050
+ (id)allForUUID:(id)arg1 zoneID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000196eb3
+ (id)allFor:(id)arg1 keyUUID:(id)arg2 zoneID:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000196cea
+ (id)tryFromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000196a30
+ (id)fromDatabase:(id)arg1 receiverPeerID:(id)arg2 senderPeerID:(id)arg3 zoneID:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000196776
+ (id)share:(id)arg1 as:(id)arg2 to:(id)arg3 epoch:(long long)arg4 poisoned:(long long)arg5 error:(id *)arg6;	// IMP=0x0010000000196412
- (void).cxx_destruct;	// IMP=0x00200000001963ff
@property(retain) CKKSTLKShare *share; // @synthesize share=_share;
- (id)sqlValues;	// IMP=0x0010000000195d16
- (id)whereClauseToFindSelf;	// IMP=0x0010000000195b3e
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000019564a
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x00100000001954ff
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x0010000000194dad
- (id)CKRecordName;	// IMP=0x0010000000194c90
- (id)recoverTLK:(id)arg1 trustedPeers:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000194bcc
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000194b06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000194a66
- (_Bool)signatureVerifiesWithPeerSet:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001949c8
- (_Bool)verifySignature:(id)arg1 verifyingPeer:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000194912
- (id)signRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000194868
- (id)dataForSigning;	// IMP=0x00100000001947e8
@property(readonly) NSData *signature;
@property(readonly) NSData *wrappedTLK;
@property(readonly) long long poisoned;
@property(readonly) long long epoch;
@property(readonly) NSString *senderPeerID;
@property(readonly) NSString *tlkUUID;
- (id)description;	// IMP=0x00100000001944c0
- (id)initForKey:(id)arg1 senderPeerID:(id)arg2 recieverPeerID:(id)arg3 receiverEncPublicKeySPKI:(id)arg4 curve:(long long)arg5 version:(unsigned long long)arg6 epoch:(long long)arg7 poisoned:(long long)arg8 wrappedKey:(id)arg9 signature:(id)arg10 zoneID:(id)arg11 encodedCKRecord:(id)arg12;	// IMP=0x0010000000194380
- (id)init:(id)arg1 sender:(id)arg2 receiver:(id)arg3 curve:(long long)arg4 version:(unsigned long long)arg5 epoch:(long long)arg6 poisoned:(long long)arg7 zoneID:(id)arg8 encodedCKRecord:(id)arg9;	// IMP=0x0010000000194283
- (id)initWithShare:(id)arg1 zoneID:(id)arg2 encodedCKRecord:(id)arg3;	// IMP=0x00100000001941fa

@end
