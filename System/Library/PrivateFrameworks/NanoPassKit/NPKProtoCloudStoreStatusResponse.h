//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoCloudStoreStatusResponse : PBCodable <NSCopying>
{
    NSData *_accountInfoData;	// 8 = 0x8
    NSData *_errorData;	// 16 = 0x10
    _Bool _cloudStoreIsSetup;	// 24 = 0x18
    _Bool _pending;	// 25 = 0x19
    struct {
        unsigned int cloudStoreIsSetup:1;
        unsigned int pending:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000d2884
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(nonatomic) _Bool cloudStoreIsSetup; // @synthesize cloudStoreIsSetup=_cloudStoreIsSetup;
@property(retain, nonatomic) NSData *accountInfoData; // @synthesize accountInfoData=_accountInfoData;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d2773
- (unsigned long long)hash;	// IMP=0x00000000000d26c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d258c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d24af
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d2408
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d235d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d2350
- (id)dictionaryRepresentation;	// IMP=0x00000000000d1f37
- (id)description;	// IMP=0x00000000000d1e88
@property(readonly, nonatomic) _Bool hasErrorData;
@property(nonatomic) _Bool hasCloudStoreIsSetup;
@property(readonly, nonatomic) _Bool hasAccountInfoData;
@property(nonatomic) _Bool hasPending;

@end

