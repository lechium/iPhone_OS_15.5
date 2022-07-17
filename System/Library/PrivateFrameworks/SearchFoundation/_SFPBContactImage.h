//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBContactImage-Protocol.h>

@class NSArray, NSData, NSString;

@interface _SFPBContactImage : PBCodable <_SFPBContactImage, NSSecureCoding>
{
    _Bool _threeDTouchEnabled;	// 8 = 0x8
    NSArray *_contactIdentifiers;	// 16 = 0x10
    NSString *_appIconBadgeBundleIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000064e1a
@property(copy, nonatomic) NSString *appIconBadgeBundleIdentifier; // @synthesize appIconBadgeBundleIdentifier=_appIconBadgeBundleIdentifier;
@property(nonatomic) _Bool threeDTouchEnabled; // @synthesize threeDTouchEnabled=_threeDTouchEnabled;
@property(copy, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000064aae
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000000649f0
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x00000000000647fc
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000644ab
- (void)writeTo:(id)arg1;	// IMP=0x0000000000064308
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000642fb
- (id)contactIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000006429a
- (unsigned long long)contactIdentifiersCount;	// IMP=0x000000000006427d
- (void)addContactIdentifiers:(id)arg1;	// IMP=0x0000000000064203
- (void)clearContactIdentifiers;	// IMP=0x00000000000641e6
- (id)initWithFacade:(id)arg1;	// IMP=0x000000000003004e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
