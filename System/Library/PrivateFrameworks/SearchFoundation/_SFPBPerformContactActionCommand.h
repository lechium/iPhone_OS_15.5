//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBPerformContactActionCommand-Protocol.h>

@class NSData, NSString;

@interface _SFPBPerformContactActionCommand : PBCodable <_SFPBPerformContactActionCommand, NSSecureCoding>
{
    _Bool _didDisplayHandleOptions;	// 8 = 0x8
    _Bool _didSelectFromOptionsMenu;	// 9 = 0x9
    int _contactActionType;	// 12 = 0xc
}

@property(nonatomic) _Bool didSelectFromOptionsMenu; // @synthesize didSelectFromOptionsMenu=_didSelectFromOptionsMenu;
@property(nonatomic) _Bool didDisplayHandleOptions; // @synthesize didDisplayHandleOptions=_didDisplayHandleOptions;
@property(nonatomic) int contactActionType; // @synthesize contactActionType=_contactActionType;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000997da
- (id)initWithJSON:(id)arg1;	// IMP=0x000000000009971c
@property(readonly, nonatomic) NSData *jsonData;
- (id)dictionaryRepresentation;	// IMP=0x0000000000099494
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009937f
- (void)writeTo:(id)arg1;	// IMP=0x00000000000992ed
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000992e0
- (id)initWithFacade:(id)arg1;	// IMP=0x0000000000018688

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
