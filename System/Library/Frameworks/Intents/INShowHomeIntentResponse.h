//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INShowHomeIntentResponseExport-Protocol.h>

@class NSString;

@interface INShowHomeIntentResponse <INShowHomeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000003dc7fb
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000003dc7f0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003dc7d0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000003dc77c
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003dc774
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000003dc76e
- (id)propertiesByName;	// IMP=0x00000000003dc75c
- (id)_dictionaryRepresentation;	// IMP=0x00000000003dc63d
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000003dc568
- (long long)_intentResponseCode;	// IMP=0x00000000003dc53b
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003dc50c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003dc4dd
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000003dc47f
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003dc450
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003dc2da
- (id)init;	// IMP=0x00000000003dc2c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

