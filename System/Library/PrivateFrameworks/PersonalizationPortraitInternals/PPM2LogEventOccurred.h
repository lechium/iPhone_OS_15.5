//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PersonalizationPortraitInternals/NSCopying-Protocol.h>

@interface PPM2LogEventOccurred : PBCodable <NSCopying>
{
    int _event;	// 8 = 0x8
    struct {
        unsigned int event:1;
    } _has;	// 12 = 0xc
}

- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000189094
- (unsigned long long)hash;	// IMP=0x0000000000189069
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000188fd7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000188f75
- (void)copyTo:(id)arg1;	// IMP=0x0000000000188f51
- (void)writeTo:(id)arg1;	// IMP=0x0000000000188f26
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000188f19
- (id)dictionaryRepresentation;	// IMP=0x0000000000188e75
- (id)description;	// IMP=0x0000000000188dc6
- (int)StringAsEvent:(id)arg1;	// IMP=0x0000000000188da7
- (id)eventAsString:(int)arg1;	// IMP=0x0000000000188d63
@property(nonatomic) _Bool hasEvent;
@property(nonatomic) int event; // @synthesize event=_event;

@end

