//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying>
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    int _kind;	// 16 = 0x10
    NSString *_triggerName;	// 24 = 0x18
    struct {
        unsigned int kind:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000d92d9
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *triggerName; // @synthesize triggerName=_triggerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d920c
- (unsigned long long)hash;	// IMP=0x00000000000d9199
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d90a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d8fe3
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d8f60
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d8edf
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d8ed2
- (id)dictionaryRepresentation;	// IMP=0x00000000000d8dc9
- (id)description;	// IMP=0x00000000000d8d1a
@property(readonly, nonatomic) _Bool hasBundleIdentifier;
- (int)StringAsKind:(id)arg1;	// IMP=0x00000000000d8ca3
- (id)kindAsString:(int)arg1;	// IMP=0x00000000000d8c4e
@property(nonatomic) _Bool hasKind;
@property(nonatomic) int kind; // @synthesize kind=_kind;
@property(readonly, nonatomic) _Bool hasTriggerName;

@end

