//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetCarLockStatusIntentResponseExport-Protocol.h>

@class NSNumber, NSString;

@interface INGetCarLockStatusIntentResponse <INGetCarLockStatusIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000002984ef
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000002984e4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000002984c4
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000298470
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000298468
- (void)setPropertiesByName:(id)arg1;	// IMP=0x0000000000298462
- (id)propertiesByName;	// IMP=0x0000000000298450
- (id)_dictionaryRepresentation;	// IMP=0x00000000002982ba
@property(copy, nonatomic) NSNumber *locked;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000298048
- (long long)_intentResponseCode;	// IMP=0x000000000029801b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000297fec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000297fbd
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000297f5f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000297f30
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000297dba
- (id)init;	// IMP=0x0000000000297da4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

