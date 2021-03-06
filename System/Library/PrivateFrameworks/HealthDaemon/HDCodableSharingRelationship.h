//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableSharingRelationship : PBCodable <NSCopying>
{
    double _dateModified;	// 8 = 0x8
    NSMutableArray *_authorizationIdentifiers;	// 16 = 0x10
    NSString *_recipientIdentifier;	// 24 = 0x18
    int _recipientType;	// 32 = 0x20
    NSMutableArray *_sharingAuthorizations;	// 40 = 0x28
    struct {
        unsigned int dateModified:1;
        unsigned int recipientType:1;
    } _has;	// 48 = 0x30
}

+ (Class)sharingAuthorizationsType;	// IMP=0x000000000045ac0a
+ (Class)authorizationIdentifiersType;	// IMP=0x000000000045ab38
- (void).cxx_destruct;	// IMP=0x000000000045c152
@property(retain, nonatomic) NSMutableArray *sharingAuthorizations; // @synthesize sharingAuthorizations=_sharingAuthorizations;
@property(retain, nonatomic) NSMutableArray *authorizationIdentifiers; // @synthesize authorizationIdentifiers=_authorizationIdentifiers;
@property(nonatomic) double dateModified; // @synthesize dateModified=_dateModified;
@property(retain, nonatomic) NSString *recipientIdentifier; // @synthesize recipientIdentifier=_recipientIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000045be28
- (unsigned long long)hash;	// IMP=0x000000000045bc7a
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000045bb22
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000045b7c0
- (void)copyTo:(id)arg1;	// IMP=0x000000000045b5fc
- (void)writeTo:(id)arg1;	// IMP=0x000000000045b389
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000045b37c
- (id)dictionaryRepresentation;	// IMP=0x000000000045acca
- (id)description;	// IMP=0x000000000045ac1b
- (id)sharingAuthorizationsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045abed
- (unsigned long long)sharingAuthorizationsCount;	// IMP=0x000000000045abd0
- (void)addSharingAuthorizations:(id)arg1;	// IMP=0x000000000045ab66
- (void)clearSharingAuthorizations;	// IMP=0x000000000045ab49
- (id)authorizationIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000045ab1b
- (unsigned long long)authorizationIdentifiersCount;	// IMP=0x000000000045aafe
- (void)addAuthorizationIdentifiers:(id)arg1;	// IMP=0x000000000045aa94
- (void)clearAuthorizationIdentifiers;	// IMP=0x000000000045aa77
@property(nonatomic) _Bool hasDateModified;
- (int)StringAsRecipientType:(id)arg1;	// IMP=0x000000000045a9ce
- (id)recipientTypeAsString:(int)arg1;	// IMP=0x000000000045a979
@property(nonatomic) _Bool hasRecipientType;
@property(nonatomic) int recipientType; // @synthesize recipientType=_recipientType;
@property(readonly, nonatomic) _Bool hasRecipientIdentifier;

@end

