//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveAppForIntent
{
}

+ (id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000000b201
+ (id)resolveAppForIntent;	// IMP=0x000000000000b1ef
- (_Bool)requiresResponse;	// IMP=0x000000000000b28d
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(copy, nonatomic) NSArray *appsList;
- (id)encodedClassName;	// IMP=0x000000000000b1e2
- (id)groupIdentifier;	// IMP=0x000000000000b1ce

@end
