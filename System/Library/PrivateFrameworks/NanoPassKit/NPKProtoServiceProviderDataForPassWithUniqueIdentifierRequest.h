//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoServiceProviderDataForPassWithUniqueIdentifierRequest : PBRequest <NSCopying>
{
    NSString *_passUniqueID;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000d2d1f
@property(retain, nonatomic) NSString *passUniqueID; // @synthesize passUniqueID=_passUniqueID;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d2cd6
- (unsigned long long)hash;	// IMP=0x00000000000d2cb9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2c1f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d2ba7
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d2b84
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d2b3f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d2b32
- (id)dictionaryRepresentation;	// IMP=0x00000000000d2964
- (id)description;	// IMP=0x00000000000d28b5

@end
