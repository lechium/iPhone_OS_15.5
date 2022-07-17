//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INResumeWorkoutIntentResponseExport-Protocol.h>

@class NSString;

@interface INResumeWorkoutIntentResponse <INResumeWorkoutIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000000b7350
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000000b733c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000000b731c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000000b72c0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b72b8
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000000b72b2
- (id)propertiesByName;	// IMP=0x00000000000b72a0
- (id)_dictionaryRepresentation;	// IMP=0x00000000000b7166
- (_Bool)_shouldForwardIntentToApp;	// IMP=0x00000000000b714c
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000000b7040
- (long long)_intentResponseCode;	// IMP=0x00000000000b7013
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b6fe4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b6fb5
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000000b6f57
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000b6f28
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000000b6d97
- (id)init;	// IMP=0x00000000000b6d81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
