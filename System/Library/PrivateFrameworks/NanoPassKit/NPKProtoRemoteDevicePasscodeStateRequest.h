//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@interface NPKProtoRemoteDevicePasscodeStateRequest : PBRequest <NSCopying>
{
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000148505
- (unsigned long long)hash;	// IMP=0x00000000001484fd
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001484b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000014847f
- (void)copyTo:(id)arg1;	// IMP=0x0000000000148479
- (void)writeTo:(id)arg1;	// IMP=0x0000000000148473
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000148466
- (id)dictionaryRepresentation;	// IMP=0x0000000000148348
- (id)description;	// IMP=0x0000000000148299

@end
