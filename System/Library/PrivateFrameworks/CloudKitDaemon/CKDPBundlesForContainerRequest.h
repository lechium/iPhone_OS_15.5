//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPBundlesForContainerRequest : PBRequest <NSCopying>
{
}

+ (id)options;	// IMP=0x00000000002e7aaf
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002e7d90
- (unsigned long long)hash;	// IMP=0x00000000002e7d88
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002e7d43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002e7d0a
- (void)copyTo:(id)arg1;	// IMP=0x00000000002e7d04
- (Class)responseClass;	// IMP=0x00000000002e7cf3
- (unsigned int)requestTypeCode;	// IMP=0x00000000002e7ce8
- (void)writeTo:(id)arg1;	// IMP=0x00000000002e7ce2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002e7cd5
- (id)dictionaryRepresentation;	// IMP=0x00000000002e7bae
- (id)description;	// IMP=0x00000000002e7aff

@end

