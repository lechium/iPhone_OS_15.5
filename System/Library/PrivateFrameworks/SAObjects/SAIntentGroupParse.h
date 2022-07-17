//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSString, SAIntentGroupDirectInvocation, SAIntentGroupProtobufMessage;

@interface SAIntentGroupParse <SAAceSerializable>
{
}

+ (id)parseWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003baa3
+ (id)parse;	// IMP=0x000000000003ba91
@property(copy, nonatomic) NSString *type;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *siriKitIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *pegasusResults;
@property(copy, nonatomic) NSArray *nlv3ParseWithAlternatives;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *nlv3Parse;
@property(copy, nonatomic) NSString *jsonIntentTypeName;
@property(copy, nonatomic) NSString *jsonIntent;
@property(retain, nonatomic) SAIntentGroupDirectInvocation *directInvocation;
- (id)encodedClassName;	// IMP=0x000000000003ba84
- (id)groupIdentifier;	// IMP=0x000000000003ba70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
