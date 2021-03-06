//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <DiagnosticExtensionsDaemon/NSCopying-Protocol.h>

@interface AWDDEDFinisherStarted : PBCodable <NSCopying>
{
    unsigned long long _numbytes;	// 8 = 0x8
    unsigned long long _numfiles;	// 16 = 0x10
    unsigned long long _timestamp;	// 24 = 0x18
    int _type;	// 32 = 0x20
    struct {
        unsigned int numbytes:1;
        unsigned int numfiles:1;
        unsigned int timestamp:1;
        unsigned int type:1;
    } _has;	// 36 = 0x24
}

@property(nonatomic) unsigned long long numbytes; // @synthesize numbytes=_numbytes;
@property(nonatomic) unsigned long long numfiles; // @synthesize numfiles=_numfiles;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000064360
- (unsigned long long)hash;	// IMP=0x00000000000642e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000641ea
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000064135
- (void)copyTo:(id)arg1;	// IMP=0x00000000000640a3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000063ff1
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000063fe4
- (id)dictionaryRepresentation;	// IMP=0x0000000000063a2a
- (id)description;	// IMP=0x000000000006397b
- (int)StringAsType:(id)arg1;	// IMP=0x00000000000638cc
- (id)typeAsString:(int)arg1;	// IMP=0x000000000006384e
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) _Bool hasNumbytes;
@property(nonatomic) _Bool hasNumfiles;
@property(nonatomic) _Bool hasTimestamp;

@end

