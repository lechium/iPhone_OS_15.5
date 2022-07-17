//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SAMediaContentRatingRestrictions <SAAceSerializable>
{
}

+ (id)mediaContentRatingRestrictionsWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000007a1a
+ (id)mediaContentRatingRestrictions;	// IMP=0x0000000000007a08
@property(nonatomic) long long tvRestriction;
@property(nonatomic) long long movieRestriction;
@property(copy, nonatomic) NSString *countryCode;
@property(nonatomic) long long appRestriction;
- (id)encodedClassName;	// IMP=0x00000000000079fb
- (id)groupIdentifier;	// IMP=0x00000000000079e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
