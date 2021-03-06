//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoPauseRangingForPairedReaderIdentifierRequest : PBRequest <NSCopying>
{
    unsigned long long _durationInSeconds;	// 8 = 0x8
    NSString *_pairedReaderIdentifier;	// 16 = 0x10
    struct {
        unsigned int durationInSeconds:1;
    } _has;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008e04e
@property(nonatomic) unsigned long long durationInSeconds; // @synthesize durationInSeconds=_durationInSeconds;
@property(retain, nonatomic) NSString *pairedReaderIdentifier; // @synthesize pairedReaderIdentifier=_pairedReaderIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000008dfb4
- (unsigned long long)hash;	// IMP=0x000000000008df64
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000008dea3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000008de0a
- (void)copyTo:(id)arg1;	// IMP=0x000000000008dda6
- (void)writeTo:(id)arg1;	// IMP=0x000000000008dd41
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000008dd34
- (id)dictionaryRepresentation;	// IMP=0x000000000008da60
- (id)description;	// IMP=0x000000000008d9b1
@property(nonatomic) _Bool hasDurationInSeconds;
@property(readonly, nonatomic) _Bool hasPairedReaderIdentifier;

@end

