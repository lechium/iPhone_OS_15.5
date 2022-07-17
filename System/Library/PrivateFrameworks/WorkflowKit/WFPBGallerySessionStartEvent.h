//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <WorkflowKit/NSCopying-Protocol.h>

@class NSString;

@interface WFPBGallerySessionStartEvent : PBCodable <NSCopying>
{
    NSString *_key;	// 8 = 0x8
    NSString *_sessionIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003381f8
@property(retain, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000033815c
- (unsigned long long)hash;	// IMP=0x000000000033810f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000338047
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000337fa9
- (void)copyTo:(id)arg1;	// IMP=0x0000000000337f46
- (void)writeTo:(id)arg1;	// IMP=0x0000000000337ee9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000337edc
- (id)dictionaryRepresentation;	// IMP=0x0000000000337e59
- (id)description;	// IMP=0x0000000000337daa
@property(readonly, nonatomic) _Bool hasSessionIdentifier;
@property(readonly, nonatomic) _Bool hasKey;

@end
