//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NPKProtoRemoveExpressPassesWithCardTypeResponse : PBCodable <NSCopying>
{
    NSMutableArray *_actualExpressPassInformations;	// 8 = 0x8
    _Bool _pending;	// 16 = 0x10
    _Bool _success;	// 17 = 0x11
    CDStruct_5ee4970e _has;	// 20 = 0x14
}

+ (Class)actualExpressPassInformationType;	// IMP=0x0000000000048946
- (void).cxx_destruct;	// IMP=0x00000000000495b9
@property(retain, nonatomic) NSMutableArray *actualExpressPassInformations; // @synthesize actualExpressPassInformations=_actualExpressPassInformations;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000493e6
- (unsigned long long)hash;	// IMP=0x000000000004937c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004927f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004906e
- (void)copyTo:(id)arg1;	// IMP=0x0000000000048f6e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000048df6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000048de9
- (id)dictionaryRepresentation;	// IMP=0x0000000000048a06
- (id)description;	// IMP=0x0000000000048957
- (id)actualExpressPassInformationAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000048929
- (unsigned long long)actualExpressPassInformationsCount;	// IMP=0x000000000004890c
- (void)addActualExpressPassInformation:(id)arg1;	// IMP=0x00000000000488a2
- (void)clearActualExpressPassInformations;	// IMP=0x0000000000048885
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasPending;

@end

