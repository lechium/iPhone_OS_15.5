//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForMessagesIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INSearchForMessagesIntentResponse <INSearchForMessagesIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001732ab
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000173278
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000173218
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000001731ac
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001731a4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000017310d
- (id)propertiesByName;	// IMP=0x00000000001730fb
- (id)_dictionaryRepresentation;	// IMP=0x0000000000172fa8
- (id)_redactedDictionaryRepresentation;	// IMP=0x0000000000172f3c
@property(copy, nonatomic) NSArray *messages;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000172cb8
- (long long)_intentResponseCode;	// IMP=0x0000000000172c40
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000172c11
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000172be2
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000172b84
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000172b55
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000172a24
- (id)init;	// IMP=0x0000000000172a0e
@property(copy, nonatomic) NSArray *searchResults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
