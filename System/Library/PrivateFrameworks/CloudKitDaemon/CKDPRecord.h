//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPDate, CKDPDateStatistics, CKDPIdentifier, CKDPProtectionInfo, CKDPRecordChainParent, CKDPRecordIdentifier, CKDPRecordStableUrl, CKDPRecordType, CKDPShare, CKDPShareIdentifier, CKDPStorageExpiration, NSData, NSMutableArray, NSString;

@interface CKDPRecord : PBCodable <NSCopying>
{
    CKDPRecordChainParent *_chainParent;	// 8 = 0x8
    NSData *_chainPrivateKey;	// 16 = 0x10
    CKDPProtectionInfo *_chainProtectionInfo;	// 24 = 0x18
    NSMutableArray *_conflictLoserEtags;	// 32 = 0x20
    CKDPIdentifier *_createdBy;	// 40 = 0x28
    NSString *_etag;	// 48 = 0x30
    CKDPDate *_expirationTime;	// 56 = 0x38
    NSMutableArray *_fields;	// 64 = 0x40
    CKDPIdentifier *_modifiedBy;	// 72 = 0x48
    NSString *_modifiedByDevice;	// 80 = 0x50
    int _permission;	// 88 = 0x58
    NSMutableArray *_pluginFields;	// 96 = 0x60
    CKDPProtectionInfo *_protectionInfo;	// 104 = 0x68
    CKDPRecordIdentifier *_recordIdentifier;	// 112 = 0x70
    CKDPShareIdentifier *_shareId;	// 120 = 0x78
    CKDPShare *_shareInfo;	// 128 = 0x80
    CKDPRecordStableUrl *_stableUrl;	// 136 = 0x88
    CKDPStorageExpiration *_storageExpiration;	// 144 = 0x90
    CKDPDateStatistics *_timeStatistics;	// 152 = 0x98
    NSMutableArray *_tombstonedPublicKeyIDs;	// 160 = 0xa0
    CKDPRecordType *_type;	// 168 = 0xa8
    NSData *_zoneishMasterKeyId;	// 176 = 0xb0
    _Bool _expired;	// 184 = 0xb8
    struct {
        unsigned int permission:1;
        unsigned int expired:1;
    } _has;	// 188 = 0xbc
}

+ (Class)tombstonedPublicKeyIDsType;	// IMP=0x0000000000159f25
+ (Class)pluginFieldsType;	// IMP=0x0000000000159cb1
+ (Class)conflictLoserEtagsType;	// IMP=0x0000000000159bca
+ (Class)fieldsType;	// IMP=0x0000000000159ace
+ (id)recordFromData:(id)arg1;	// IMP=0x00000000000e0827
- (void).cxx_destruct;	// IMP=0x000000000015d895
@property(retain, nonatomic) CKDPDate *expirationTime; // @synthesize expirationTime=_expirationTime;
@property(nonatomic) _Bool expired; // @synthesize expired=_expired;
@property(retain, nonatomic) CKDPStorageExpiration *storageExpiration; // @synthesize storageExpiration=_storageExpiration;
@property(retain, nonatomic) NSData *zoneishMasterKeyId; // @synthesize zoneishMasterKeyId=_zoneishMasterKeyId;
@property(retain, nonatomic) NSMutableArray *tombstonedPublicKeyIDs; // @synthesize tombstonedPublicKeyIDs=_tombstonedPublicKeyIDs;
@property(retain, nonatomic) CKDPRecordStableUrl *stableUrl; // @synthesize stableUrl=_stableUrl;
@property(retain, nonatomic) CKDPRecordChainParent *chainParent; // @synthesize chainParent=_chainParent;
@property(retain, nonatomic) CKDPProtectionInfo *chainProtectionInfo; // @synthesize chainProtectionInfo=_chainProtectionInfo;
@property(retain, nonatomic) NSData *chainPrivateKey; // @synthesize chainPrivateKey=_chainPrivateKey;
@property(retain, nonatomic) CKDPShare *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSMutableArray *pluginFields; // @synthesize pluginFields=_pluginFields;
@property(retain, nonatomic) NSString *modifiedByDevice; // @synthesize modifiedByDevice=_modifiedByDevice;
@property(retain, nonatomic) NSMutableArray *conflictLoserEtags; // @synthesize conflictLoserEtags=_conflictLoserEtags;
@property(retain, nonatomic) CKDPIdentifier *modifiedBy; // @synthesize modifiedBy=_modifiedBy;
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) NSMutableArray *fields; // @synthesize fields=_fields;
@property(retain, nonatomic) CKDPDateStatistics *timeStatistics; // @synthesize timeStatistics=_timeStatistics;
@property(retain, nonatomic) CKDPIdentifier *createdBy; // @synthesize createdBy=_createdBy;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
@property(retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // @synthesize recordIdentifier=_recordIdentifier;
@property(retain, nonatomic) NSString *etag; // @synthesize etag=_etag;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015cd8e
- (unsigned long long)hash;	// IMP=0x000000000015cad4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015c5cb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015bd4e
- (void)copyTo:(id)arg1;	// IMP=0x000000000015b85a
- (void)writeTo:(id)arg1;	// IMP=0x000000000015b255
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015b248
- (id)dictionaryRepresentation;	// IMP=0x000000000015a06d
- (id)description;	// IMP=0x0000000000159fbe
@property(readonly, nonatomic) _Bool hasExpirationTime;
@property(nonatomic) _Bool hasExpired;
@property(readonly, nonatomic) _Bool hasStorageExpiration;
@property(readonly, nonatomic) _Bool hasZoneishMasterKeyId;
- (id)tombstonedPublicKeyIDsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000159f08
- (unsigned long long)tombstonedPublicKeyIDsCount;	// IMP=0x0000000000159eeb
- (void)addTombstonedPublicKeyIDs:(id)arg1;	// IMP=0x0000000000159e81
- (void)clearTombstonedPublicKeyIDs;	// IMP=0x0000000000159e64
@property(readonly, nonatomic) _Bool hasStableUrl;
@property(readonly, nonatomic) _Bool hasChainParent;
@property(readonly, nonatomic) _Bool hasChainProtectionInfo;
@property(readonly, nonatomic) _Bool hasChainPrivateKey;
@property(readonly, nonatomic) _Bool hasShareInfo;
- (int)StringAsPermission:(id)arg1;	// IMP=0x0000000000159d94
- (id)permissionAsString:(int)arg1;	// IMP=0x0000000000159d3e
@property(nonatomic) _Bool hasPermission;
@property(nonatomic) int permission; // @synthesize permission=_permission;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
- (id)pluginFieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000159c94
- (unsigned long long)pluginFieldsCount;	// IMP=0x0000000000159c77
- (void)addPluginFields:(id)arg1;	// IMP=0x0000000000159c0d
- (void)clearPluginFields;	// IMP=0x0000000000159bf0
@property(readonly, nonatomic) _Bool hasModifiedByDevice;
- (id)conflictLoserEtagsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000159bad
- (unsigned long long)conflictLoserEtagsCount;	// IMP=0x0000000000159b90
- (void)addConflictLoserEtags:(id)arg1;	// IMP=0x0000000000159b26
- (void)clearConflictLoserEtags;	// IMP=0x0000000000159b09
@property(readonly, nonatomic) _Bool hasModifiedBy;
@property(readonly, nonatomic) _Bool hasShareId;
- (id)fieldsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000159ab1
- (unsigned long long)fieldsCount;	// IMP=0x0000000000159a94
- (void)addFields:(id)arg1;	// IMP=0x0000000000159a2a
- (void)clearFields;	// IMP=0x0000000000159a0d
@property(readonly, nonatomic) _Bool hasTimeStatistics;
@property(readonly, nonatomic) _Bool hasCreatedBy;
@property(readonly, nonatomic) _Bool hasType;
@property(readonly, nonatomic) _Bool hasRecordIdentifier;
@property(readonly, nonatomic) _Bool hasEtag;
- (id)dataRepresentation;	// IMP=0x00000000000e08a0
- (id)fieldForKey:(id)arg1;	// IMP=0x00000000000e061b
- (id)fieldData;	// IMP=0x00000000000e03eb
- (void)_inflateFieldsFromData:(id)arg1;	// IMP=0x00000000000dffe0
- (id)_permissionAsString;	// IMP=0x000000000017f69f

@end
