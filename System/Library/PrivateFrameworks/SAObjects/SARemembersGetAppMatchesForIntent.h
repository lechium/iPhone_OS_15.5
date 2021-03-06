//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SARemembersGetAppMatchesForIntent <SAAceSerializable>
{
}

+ (id)getAppMatchesForIntentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000026ec3
+ (id)getAppMatchesForIntent;	// IMP=0x0000000000026eb1
- (_Bool)mutatingCommand;	// IMP=0x0000000000026f3b
- (_Bool)requiresResponse;	// IMP=0x0000000000026f33
@property(retain, nonatomic) SAIntentGroupProtobufMessage *protoEncodedIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *candidateBundleIDs;
- (id)encodedClassName;	// IMP=0x0000000000026ea4
- (id)groupIdentifier;	// IMP=0x0000000000026e90

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

