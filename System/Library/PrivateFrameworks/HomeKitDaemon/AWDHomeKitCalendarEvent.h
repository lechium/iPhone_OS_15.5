//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCalendarEvent : PBCodable <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000060c563
- (unsigned long long)hash;	// IMP=0x000000000060c55b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000060c516
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000060c4dd
- (void)copyTo:(id)arg1;	// IMP=0x000000000060c4d7
- (void)writeTo:(id)arg1;	// IMP=0x000000000060c4d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000060c4c4
- (id)dictionaryRepresentation;	// IMP=0x000000000060c4ab
- (id)description;	// IMP=0x000000000060c3fc

@end
