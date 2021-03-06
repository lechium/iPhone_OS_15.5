//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetRideStatusIntentResponseExport-Protocol.h>

@class INRideStatus, NSString;

@interface INGetRideStatusIntentResponse <INGetRideStatusIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001494af
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000014948c
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000014946c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000149404
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001493fc
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000001493f6
- (id)propertiesByName;	// IMP=0x00000000001493e4
- (id)_dictionaryRepresentation;	// IMP=0x0000000000149234
@property(copy, nonatomic) INRideStatus *rideStatus;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000148fd0
- (long long)_intentResponseCode;	// IMP=0x0000000000148fa3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000148f74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000148f45
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000148ee7
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000148eb8
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000148d26
- (id)init;	// IMP=0x0000000000148d10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

