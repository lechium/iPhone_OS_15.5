//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSArray, SGContact, SGMatchedDetails, SGObject, SGRecordId;

@interface SGContactMatch : NSObject <NSCopying, NSSecureCoding>
{
    SGRecordId *_matchingFieldRecordId;	// 8 = 0x8
    long long _matchingFieldType;	// 16 = 0x10
    SGContact *_contact;	// 24 = 0x18
    NSArray *_matchTokens;	// 32 = 0x20
    SGMatchedDetails *_matchedDetails;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000070b37
- (void).cxx_destruct;	// IMP=0x0000000000070af9
@property(readonly, nonatomic) SGMatchedDetails *matchedDetails; // @synthesize matchedDetails=_matchedDetails;
@property(readonly, nonatomic) NSArray *matchTokens; // @synthesize matchTokens=_matchTokens;
@property(readonly, nonatomic) long long matchingFieldType; // @synthesize matchingFieldType=_matchingFieldType;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
- (id)description;	// IMP=0x0000000000070a7f
- (unsigned long long)hash;	// IMP=0x0000000000070a38
@property(readonly, nonatomic) SGObject *matchingField;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000706f4
- (_Bool)isEqualToContactMatch:(id)arg1;	// IMP=0x00000000000705d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070523
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000702c7
- (id)initWithContact:(id)arg1 matchingRecordId:(id)arg2 matchType:(long long)arg3 matchTokens:(id)arg4;	// IMP=0x0000000000070149
- (id)initWithContact:(id)arg1 matchingPhoneRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x000000000006ffcf
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x000000000006fe55
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x000000000006fcdb
- (id)initWithContact:(id)arg1 matchingNameRecordId:(id)arg2;	// IMP=0x000000000006fcc6
- (id)initWithContact:(id)arg1 matchingEmailAddressRecordId:(id)arg2;	// IMP=0x000000000006fcb1
- (id)initWithContact:(id)arg1 matchingFieldRecordId:(id)arg2 matchTokens:(id)arg3;	// IMP=0x000000000006fab5
- (id)initWithContact:(id)arg1 matchTokens:(id)arg2 matchInfo:(id)arg3;	// IMP=0x000000000006f815
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006f80a

@end

