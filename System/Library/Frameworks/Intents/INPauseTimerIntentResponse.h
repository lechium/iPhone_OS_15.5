//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPauseTimerIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INPauseTimerIntentResponse <INPauseTimerIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000387a7e
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000387a68
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000387a48
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003879e8
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003879e0
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003879da
- (id)propertiesByName;	// IMP=0x00000000003879c8
- (id)_dictionaryRepresentation;	// IMP=0x00000000003877ef
@property(copy, nonatomic) NSArray *pausedTimers;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000387538
- (long long)_intentResponseCode;	// IMP=0x000000000038750b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003874dc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003874ad
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000038744f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000387420
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000387269
- (id)init;	// IMP=0x0000000000387253

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

