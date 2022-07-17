//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFShowSFCardCommand-Protocol.h>

@class NSData, NSDictionary, NSString, SFCard;

@interface SFShowSFCardCommand <SFShowSFCardCommand, NSSecureCoding, NSCopying>
{
    SFCard *_card;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001310c
- (void).cxx_destruct;	// IMP=0x00000000000130f9
@property(retain, nonatomic) SFCard *card; // @synthesize card=_card;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001306f
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012f20
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000012e6e
- (id)embeddedCards;	// IMP=0x0000000000022581
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001e8c89

// Remaining properties
@property(copy, nonatomic) NSString *commandDetail;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
