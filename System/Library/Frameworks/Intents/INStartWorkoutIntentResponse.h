//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartWorkoutIntentResponseExport-Protocol.h>

@class NSString;

@interface INStartWorkoutIntentResponse <INStartWorkoutIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000005bde4
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000005bdc4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000005bda4
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000005bd3c
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005bd34
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000005bd2e
- (id)propertiesByName;	// IMP=0x000000000005bd1c
- (id)_dictionaryRepresentation;	// IMP=0x000000000005bbd6
- (_Bool)_shouldForwardIntentToApp;	// IMP=0x000000000005bbbc
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000005ba94
- (long long)_intentResponseCode;	// IMP=0x000000000005ba67
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005ba38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005ba09
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000005b9ab
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000005b97c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000005b7df
- (id)init;	// IMP=0x000000000005b7c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

