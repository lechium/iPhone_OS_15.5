//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INPlayAnnouncementSoundIntentResponseExport-Protocol.h>

@class NSString;

@interface INPlayAnnouncementSoundIntentResponse <INPlayAnnouncementSoundIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000049ae2b
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000049ae20
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000049ae00
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000049adac
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000049ada4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000049ad9e
- (id)propertiesByName;	// IMP=0x000000000049ad8c
- (id)_dictionaryRepresentation;	// IMP=0x000000000049ac6d
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000049ab98
- (long long)_intentResponseCode;	// IMP=0x000000000049ab6b
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000049ab3c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000049ab0d
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000049aaaf
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049aa80
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000049a909
- (id)init;	// IMP=0x000000000049a8f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
