//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PBBridgeSupport/NSCopying-Protocol.h>

@class NSString;

@interface PBBProtoAcknowledgeBuysOnWatchCredentialIngestion : PBCodable <NSCopying>
{
    int _errorCode;	// 8 = 0x8
    NSString *_errorDescription;	// 16 = 0x10
    _Bool _success;	// 24 = 0x18
    struct {
        unsigned int errorCode:1;
        unsigned int success:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000003aa2
@property(nonatomic) int errorCode; // @synthesize errorCode=_errorCode;
@property(retain, nonatomic) NSString *errorDescription; // @synthesize errorDescription=_errorDescription;
@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000039d6
- (unsigned long long)hash;	// IMP=0x000000000000395e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003862
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000037ae
- (void)copyTo:(id)arg1;	// IMP=0x0000000000003727
- (void)writeTo:(id)arg1;	// IMP=0x000000000000369a
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000368d
- (id)dictionaryRepresentation;	// IMP=0x00000000000032ab
- (id)description;	// IMP=0x00000000000031fc
@property(nonatomic) _Bool hasErrorCode;
@property(readonly, nonatomic) _Bool hasErrorDescription;
@property(nonatomic) _Bool hasSuccess;

@end
