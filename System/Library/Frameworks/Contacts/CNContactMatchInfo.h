//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>
#import <Contacts/NSSecureCoding-Protocol.h>

@class CNPromise, NSDictionary, NSNumber, NSSet;

@interface CNContactMatchInfo : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _matchedNameProperty;	// 8 = 0x8
    NSNumber *_relevanceScore;	// 16 = 0x10
    NSDictionary *_matchedProperties;	// 24 = 0x18
    NSSet *_matchedTerms;	// 32 = 0x20
    CNPromise *_excerpt;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000db92c
- (void).cxx_destruct;	// IMP=0x00000000000dbe2b
@property(nonatomic) _Bool matchedNameProperty; // @synthesize matchedNameProperty=_matchedNameProperty;
@property(retain, nonatomic) CNPromise *excerpt; // @synthesize excerpt=_excerpt;
@property(retain, nonatomic) NSSet *matchedTerms; // @synthesize matchedTerms=_matchedTerms;
@property(copy, nonatomic) NSDictionary *matchedProperties; // @synthesize matchedProperties=_matchedProperties;
@property(copy, nonatomic) NSNumber *relevanceScore; // @synthesize relevanceScore=_relevanceScore;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000dbc45
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000dbb97
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000db934

@end
