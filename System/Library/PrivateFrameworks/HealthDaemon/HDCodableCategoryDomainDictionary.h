//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDSyncCodable-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying>
{
    long long _category;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSMutableArray *_keyValuePairs;	// 24 = 0x18
    struct {
        unsigned int category:1;
    } _has;	// 32 = 0x20
}

+ (Class)keyValuePairsType;	// IMP=0x0000000000422da6
- (void).cxx_destruct;	// IMP=0x0000000000049e54
@property(retain, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) long long category; // @synthesize category=_category;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000042385b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004236e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004234e4
- (void)copyTo:(id)arg1;	// IMP=0x00000000004233d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000047dc8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004233cc
- (id)dictionaryRepresentation;	// IMP=0x0000000000422e66
@property(readonly, copy) NSString *description;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000422d89
- (unsigned long long)keyValuePairsCount;	// IMP=0x0000000000422d6c
- (void)addKeyValuePairs:(id)arg1;	// IMP=0x0000000000047ab2
- (void)clearKeyValuePairs;	// IMP=0x0000000000422d4f
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasCategory;
- (long long)decodedCategory;	// IMP=0x000000000038d0d0
- (id)initWithCategory:(long long)arg1 domain:(id)arg2;	// IMP=0x00000000000479e2
- (_Bool)_validateForInsertionWithError:(id *)arg1;	// IMP=0x00000000006116f1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

