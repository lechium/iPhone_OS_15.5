//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoDeclineRelatedInvitationsIfNecessaryResponse : PBCodable <NSCopying>
{
    _Bool _didDeclineInvitations;	// 8 = 0x8
    struct {
        unsigned int didDeclineInvitations:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool didDeclineInvitations; // @synthesize didDeclineInvitations=_didDeclineInvitations;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000004df8e
- (unsigned long long)hash;	// IMP=0x000000000004df63
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000004dec1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004de5f
- (void)copyTo:(id)arg1;	// IMP=0x000000000004de3b
- (void)writeTo:(id)arg1;	// IMP=0x000000000004de0f
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000004de02
- (id)dictionaryRepresentation;	// IMP=0x000000000004db88
- (id)description;	// IMP=0x000000000004dad9
@property(nonatomic) _Bool hasDidDeclineInvitations;

@end
