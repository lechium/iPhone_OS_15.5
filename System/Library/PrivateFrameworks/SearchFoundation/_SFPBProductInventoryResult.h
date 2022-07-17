//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBProductInventoryResult-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductInventoryResult : PBCodable <_SFPBProductInventoryResult, NSSecureCoding>
{
    NSString *_productIdentifier;	// 8 = 0x8
    NSArray *_availabilitys;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017a91d
@property(copy, nonatomic) NSArray *availabilitys; // @synthesize availabilitys=_availabilitys;
@property(copy, nonatomic) NSString *productIdentifier; // @synthesize productIdentifier=_productIdentifier;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000017a5fb
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000017a53d
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x000000000017a1db
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000179ed1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000179d66
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000179d59
- (id)availabilityAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000179d3c
- (unsigned long long)availabilityCount;	// IMP=0x0000000000179d1f
- (void)addAvailability:(id)arg1;	// IMP=0x0000000000179ca5
- (void)clearAvailability;	// IMP=0x0000000000179c88
- (void)setAvailability:(id)arg1;	// IMP=0x0000000000179c54
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000001c4e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
