//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INAnswerCallIntentResponseExport-Protocol.h>

@class INConnectedCall, NSArray, NSString;

@interface INAnswerCallIntentResponse <INAnswerCallIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003bff5b
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003bff50
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003bff30
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003bfedc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003bfed4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003bfece
- (id)propertiesByName;	// IMP=0x00000000003bfebc
- (id)_dictionaryRepresentation;	// IMP=0x00000000003bfc48
@property(copy, nonatomic) NSArray *recentMissedCalls;
@property(copy, nonatomic) INConnectedCall *answeredCall;
@property(copy, nonatomic) NSArray *callRecords;
@property(nonatomic) long long statusCode;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003bf71c
- (long long)_intentResponseCode;	// IMP=0x00000000003bf6ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003bf6c0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003bf691
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003bf633
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003bf604
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003bf480
- (id)init;	// IMP=0x00000000003bf46a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

