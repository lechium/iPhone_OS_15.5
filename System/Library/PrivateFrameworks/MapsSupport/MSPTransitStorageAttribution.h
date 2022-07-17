//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/GEOTransitAttribution-Protocol.h>
#import <MapsSupport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPTransitStorageAttribution : PBCodable <GEOTransitAttribution, NSCopying>
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_providerNames;	// 16 = 0x10
}

+ (Class)providerNamesType;	// IMP=0x000000000003fc25
- (void).cxx_destruct;	// IMP=0x00000000000405b8
@property(retain, nonatomic) NSMutableArray *providerNames; // @synthesize providerNames=_providerNames;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000040449
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000040392
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000401ac
- (void)copyTo:(id)arg1;	// IMP=0x00000000000400e5
- (void)writeTo:(id)arg1;	// IMP=0x000000000003ff86
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003ff79
- (id)dictionaryRepresentation;	// IMP=0x000000000003fce5
@property(readonly, copy) NSString *description;
- (id)providerNamesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000003fc08
- (unsigned long long)providerNamesCount;	// IMP=0x000000000003fbeb
- (void)addProviderNames:(id)arg1;	// IMP=0x000000000003fb81
- (void)clearProviderNames;	// IMP=0x000000000003fb64
- (id)initWithAttribution:(id)arg1;	// IMP=0x0000000000025cc3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
