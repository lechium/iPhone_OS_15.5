//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBCoreSpotlightButtonItem-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBCoreSpotlightButtonItem : PBCodable <_SFPBCoreSpotlightButtonItem, NSSecureCoding>
{
    NSArray *_actionItemTypes;	// 8 = 0x8
    NSString *_applicationBundleIdentifier;	// 16 = 0x10
    NSString *_coreSpotlightIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000092f1c
@property(copy, nonatomic) NSString *coreSpotlightIdentifier; // @synthesize coreSpotlightIdentifier=_coreSpotlightIdentifier;
@property(copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(copy, nonatomic) NSArray *actionItemTypes; // @synthesize actionItemTypes=_actionItemTypes;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000092b95
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000092ad7
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000928e0
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000092484
- (void)writeTo:(id)arg1;	// IMP=0x00000000000922ce
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000922c1
- (id)actionItemTypesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000009223c
- (unsigned long long)actionItemTypesCount;	// IMP=0x000000000009221f
- (void)addActionItemTypes:(id)arg1;	// IMP=0x00000000000921a5
- (void)clearActionItemTypes;	// IMP=0x0000000000092188
- (id)initWithFacade:(id)arg1;	// IMP=0x00000000001ee5f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

