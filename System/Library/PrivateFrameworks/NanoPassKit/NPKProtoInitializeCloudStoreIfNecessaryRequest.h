//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoInitializeCloudStoreIfNecessaryRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x000000000011a3ef
- (unsigned long long)hash;	// IMP=0x000000000011a3e7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011a3a2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011a369
- (void)copyTo:(id)arg1;	// IMP=0x000000000011a363
- (void)writeTo:(id)arg1;	// IMP=0x000000000011a35d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000011a350
- (id)dictionaryRepresentation;	// IMP=0x000000000011a232
- (id)description;	// IMP=0x000000000011a183

@end

