//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface NPKProtoProvisionHomeKeyPassForSerialNumbersResponse : PBCodable <NSCopying>
{
    NSData *_errorData;	// 8 = 0x8
    NSMutableArray *_provisionedPassesDatas;	// 16 = 0x10
}

+ (Class)provisionedPassesDataType;	// IMP=0x00000000001734d3
- (void).cxx_destruct;	// IMP=0x0000000000173f26
@property(retain, nonatomic) NSData *errorData; // @synthesize errorData=_errorData;
@property(retain, nonatomic) NSMutableArray *provisionedPassesDatas; // @synthesize provisionedPassesDatas=_provisionedPassesDatas;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000173d62
- (unsigned long long)hash;	// IMP=0x0000000000173d15
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000173c4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000173a41
- (void)copyTo:(id)arg1;	// IMP=0x0000000000173957
- (void)writeTo:(id)arg1;	// IMP=0x00000000001737f7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001737ea
- (id)dictionaryRepresentation;	// IMP=0x00000000001735a8
- (id)description;	// IMP=0x00000000001734f9
@property(readonly, nonatomic) _Bool hasErrorData;
- (id)provisionedPassesDataAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001734b6
- (unsigned long long)provisionedPassesDatasCount;	// IMP=0x0000000000173499
- (void)addProvisionedPassesData:(id)arg1;	// IMP=0x000000000017342f
- (void)clearProvisionedPassesDatas;	// IMP=0x0000000000173412

@end

