//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SAUISetSuggestedUtterances
{
}

+ (id)setSuggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000416ea
+ (id)setSuggestedUtterances;	// IMP=0x00000000000416d8
- (_Bool)requiresResponse;	// IMP=0x0000000000041738
@property(copy, nonatomic) NSArray *utterances;
@property(copy, nonatomic) NSString *language;
- (id)encodedClassName;	// IMP=0x00000000000416cb
- (id)groupIdentifier;	// IMP=0x00000000000416b7

@end
