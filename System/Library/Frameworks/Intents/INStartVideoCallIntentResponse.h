//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INStartVideoCallIntentResponseExport-Protocol.h>

@class NSString;

@interface INStartVideoCallIntentResponse <INStartVideoCallIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001ae1db
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000001ae1c2
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000001ae1a2
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000001ae164
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001ae15c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000001ae156
- (id)propertiesByName;	// IMP=0x00000000001ae144
- (id)_dictionaryRepresentation;	// IMP=0x00000000001adffe
@property(nonatomic) double timeToEstablishCall;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000001add34
- (long long)_intentResponseCode;	// IMP=0x00000000001add07
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001adcd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001adca9
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001adc4b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001adc1c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001ada7e
- (id)init;	// IMP=0x00000000001ada68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
