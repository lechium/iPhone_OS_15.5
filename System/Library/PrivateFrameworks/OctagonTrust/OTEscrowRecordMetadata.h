//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <OctagonTrust/NSCopying-Protocol.h>

@class NSData, NSString, OTEscrowRecordMetadataClientMetadata;

@interface OTEscrowRecordMetadata : PBCodable <NSCopying>
{
    unsigned long long _secureBackupTimestamp;	// 8 = 0x8
    unsigned long long _secureBackupUsesMultipleIcscs;	// 16 = 0x10
    NSData *_backupKeybagDigest;	// 24 = 0x18
    NSString *_bottleId;	// 32 = 0x20
    NSString *_bottleValidity;	// 40 = 0x28
    OTEscrowRecordMetadataClientMetadata *_clientMetadata;	// 48 = 0x30
    NSData *_escrowedSpki;	// 56 = 0x38
    NSData *_peerInfo;	// 64 = 0x40
    NSString *_serial;	// 72 = 0x48
    struct {
        unsigned int secureBackupTimestamp:1;
        unsigned int secureBackupUsesMultipleIcscs:1;
    } _has;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000045c3
@property(retain, nonatomic) NSString *serial; // @synthesize serial=_serial;
@property(retain, nonatomic) NSString *bottleValidity; // @synthesize bottleValidity=_bottleValidity;
@property(retain, nonatomic) NSData *peerInfo; // @synthesize peerInfo=_peerInfo;
@property(retain, nonatomic) NSData *escrowedSpki; // @synthesize escrowedSpki=_escrowedSpki;
@property(nonatomic) unsigned long long secureBackupTimestamp; // @synthesize secureBackupTimestamp=_secureBackupTimestamp;
@property(retain, nonatomic) NSString *bottleId; // @synthesize bottleId=_bottleId;
@property(nonatomic) unsigned long long secureBackupUsesMultipleIcscs; // @synthesize secureBackupUsesMultipleIcscs=_secureBackupUsesMultipleIcscs;
@property(retain, nonatomic) OTEscrowRecordMetadataClientMetadata *clientMetadata; // @synthesize clientMetadata=_clientMetadata;
@property(retain, nonatomic) NSData *backupKeybagDigest; // @synthesize backupKeybagDigest=_backupKeybagDigest;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000000433e
- (unsigned long long)hash;	// IMP=0x0000000000004200
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003fcb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000003e21
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003cd8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000003b9c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000003b8f
- (id)dictionaryRepresentation;	// IMP=0x0000000000003962
- (id)description;	// IMP=0x00000000000038b3
@property(readonly, nonatomic) _Bool hasSerial;
@property(readonly, nonatomic) _Bool hasBottleValidity;
@property(readonly, nonatomic) _Bool hasPeerInfo;
@property(readonly, nonatomic) _Bool hasEscrowedSpki;
@property(nonatomic) _Bool hasSecureBackupTimestamp;
@property(readonly, nonatomic) _Bool hasBottleId;
@property(nonatomic) _Bool hasSecureBackupUsesMultipleIcscs;
@property(readonly, nonatomic) _Bool hasClientMetadata;
@property(readonly, nonatomic) _Bool hasBackupKeybagDigest;

@end

