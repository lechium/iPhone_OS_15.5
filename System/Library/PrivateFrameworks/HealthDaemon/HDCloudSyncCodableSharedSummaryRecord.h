//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface HDCloudSyncCodableSharedSummaryRecord : PBCodable <NSCopying>
{
    NSMutableArray *_authorizationCategories;	// 8 = 0x8
    NSString *_compatibilityVersion;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableArray *_objectTypeIdentifiers;	// 32 = 0x20
    NSString *_package;	// 40 = 0x28
    NSData *_summaryData;	// 48 = 0x30
    NSString *_uuid;	// 56 = 0x38
    NSString *_version;	// 64 = 0x40
}

+ (Class)authorizationCategoriesType;	// IMP=0x000000000024c45c
+ (Class)objectTypeIdentifiersType;	// IMP=0x000000000024c38a
- (void).cxx_destruct;	// IMP=0x000000000024d93e
@property(retain, nonatomic) NSData *summaryData; // @synthesize summaryData=_summaryData;
@property(retain, nonatomic) NSMutableArray *authorizationCategories; // @synthesize authorizationCategories=_authorizationCategories;
@property(retain, nonatomic) NSMutableArray *objectTypeIdentifiers; // @synthesize objectTypeIdentifiers=_objectTypeIdentifiers;
@property(retain, nonatomic) NSString *compatibilityVersion; // @synthesize compatibilityVersion=_compatibilityVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024d50a
- (unsigned long long)hash;	// IMP=0x000000000024d419
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024d21d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024ce38
- (void)copyTo:(id)arg1;	// IMP=0x000000000024cc12
- (void)writeTo:(id)arg1;	// IMP=0x000000000024c94d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024c940
- (id)dictionaryRepresentation;	// IMP=0x000000000024c531
- (id)description;	// IMP=0x000000000024c482
@property(readonly, nonatomic) _Bool hasSummaryData;
- (id)authorizationCategoriesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024c43f
- (unsigned long long)authorizationCategoriesCount;	// IMP=0x000000000024c422
- (void)addAuthorizationCategories:(id)arg1;	// IMP=0x000000000024c3b8
- (void)clearAuthorizationCategories;	// IMP=0x000000000024c39b
- (id)objectTypeIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024c36d
- (unsigned long long)objectTypeIdentifiersCount;	// IMP=0x000000000024c350
- (void)addObjectTypeIdentifiers:(id)arg1;	// IMP=0x000000000024c2e6
- (void)clearObjectTypeIdentifiers;	// IMP=0x000000000024c2c9
@property(readonly, nonatomic) _Bool hasCompatibilityVersion;
@property(readonly, nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) _Bool hasName;
@property(readonly, nonatomic) _Bool hasPackage;
@property(readonly, nonatomic) _Bool hasUuid;

@end
