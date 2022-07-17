//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, SAIntentGroupProtobufMessage;

@interface SAIntentGroupProcessIntent
{
}

+ (id)processIntentWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000003ae5c
+ (id)processIntent;	// IMP=0x000000000003ae4a
- (_Bool)mutatingCommand;	// IMP=0x000000000003af18
- (_Bool)requiresResponse;	// IMP=0x000000000003af10
@property(nonatomic) _Bool shouldRunHandleIntent;
@property(copy, nonatomic) NSString *jsonEncodedIntent;
@property(copy, nonatomic) NSArray *intentSlotKeyPaths;
@property(retain, nonatomic) SAIntentGroupProtobufMessage *intent;
@property(nonatomic) _Bool allowsPunchOut;
- (id)encodedClassName;	// IMP=0x000000000003ae3d
- (id)groupIdentifier;	// IMP=0x000000000003ae29

@end
