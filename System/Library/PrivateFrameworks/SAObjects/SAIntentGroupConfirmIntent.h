//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupConfirmIntent
{
}

+ (id)confirmIntentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000029b38
+ (id)confirmIntent;	// IMP=0x0000000000029b26
- (_Bool)requiresResponse;	// IMP=0x0000000000029b86
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
- (id)encodedClassName;	// IMP=0x0000000000029b19
- (id)groupIdentifier;	// IMP=0x0000000000029b05

@end
