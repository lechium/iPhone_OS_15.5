//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSearchForAccountsIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INSearchForAccountsIntentResponse <INSearchForAccountsIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x0000000000338921
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x0000000000338908
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000003388e8
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x0000000000338888
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000338880
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000033887a
- (id)propertiesByName;	// IMP=0x0000000000338868
- (id)_dictionaryRepresentation;	// IMP=0x000000000033869f
@property(copy, nonatomic) NSArray *accounts;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000338404
- (long long)_intentResponseCode;	// IMP=0x00000000003383d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003383a8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000338379
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000033831b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000003382ec
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000338141
- (id)init;	// IMP=0x000000000033812b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
