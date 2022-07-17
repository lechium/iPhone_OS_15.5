//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoSignDataRequest : PBRequest <NSCopying>
{
    NSString *_aid;	// 8 = 0x8
    NSData *_dataToSign;	// 16 = 0x10
    NSData *_digestToSign;	// 24 = 0x18
    int _entanglementMode;	// 32 = 0x20
    struct {
        unsigned int entanglementMode:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x000000000004c711
@property(retain, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(retain, nonatomic) NSData *digestToSign; // @synthesize digestToSign=_digestToSign;
@property(retain, nonatomic) NSData *dataToSign; // @synthesize dataToSign=_dataToSign;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004c5ff
- (unsigned long long)hash;	// IMP=0x000000000004c571
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004c448
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004c35e
- (void)copyTo:(id)arg1;	// IMP=0x000000000004c2bb
- (void)writeTo:(id)arg1;	// IMP=0x000000000004c21d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004c210
- (id)dictionaryRepresentation;	// IMP=0x000000000004be85
- (id)description;	// IMP=0x000000000004bdd6
@property(readonly, nonatomic) _Bool hasAid;
- (int)StringAsEntanglementMode:(id)arg1;	// IMP=0x000000000004bd5f
- (id)entanglementModeAsString:(int)arg1;	// IMP=0x000000000004bd0a
@property(nonatomic) _Bool hasEntanglementMode;
@property(nonatomic) int entanglementMode; // @synthesize entanglementMode=_entanglementMode;
@property(readonly, nonatomic) _Bool hasDigestToSign;
@property(readonly, nonatomic) _Bool hasDataToSign;

@end
