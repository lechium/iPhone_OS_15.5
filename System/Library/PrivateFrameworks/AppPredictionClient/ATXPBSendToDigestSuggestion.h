//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AppPredictionClient/NSCopying-Protocol.h>

@interface ATXPBSendToDigestSuggestion : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000069477
- (unsigned long long)hash;	// IMP=0x000000000006946f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006942a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000693f1
- (void)copyTo:(id)arg1;	// IMP=0x00000000000693eb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000693e5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000693d8
- (id)dictionaryRepresentation;	// IMP=0x00000000000692ba
- (id)description;	// IMP=0x000000000006920b

@end
