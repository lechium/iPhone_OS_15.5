//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INControlHomeIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INControlHomeIntentResponse <INControlHomeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000000aeee5
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000000aeecc
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000000aeeac
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000000aee3c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000aee34
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000000aed2b
- (id)propertiesByName;	// IMP=0x00000000000aed19
- (id)_dictionaryRepresentation;	// IMP=0x00000000000aebc6
@property(copy, nonatomic) NSArray *entityResponses;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000000ae833
- (long long)_intentResponseCode;	// IMP=0x00000000000ae806
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ae7d7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ae7a8
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000ae74a
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000ae71b
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000ae5ea
- (id)init;	// IMP=0x00000000000ae5d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

