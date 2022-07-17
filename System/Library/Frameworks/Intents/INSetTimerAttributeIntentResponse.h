//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetTimerAttributeIntentResponseExport-Protocol.h>

@class INTimer, NSString;

@interface INSetTimerAttributeIntentResponse <INSetTimerAttributeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000380190
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000380170
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x0000000000380150
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003800dc
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003800d4
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003800ce
- (id)propertiesByName;	// IMP=0x00000000003800bc
- (id)_dictionaryRepresentation;	// IMP=0x000000000037ff00
@property(copy, nonatomic) INTimer *updatedTimer;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000037fc80
- (long long)_intentResponseCode;	// IMP=0x000000000037fc53
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000037fc24
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000037fbf5
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000037fb97
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000037fb68
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000037f9ca
- (id)init;	// IMP=0x000000000037f9b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
