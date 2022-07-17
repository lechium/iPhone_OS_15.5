//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INQueryHealthSampleIntentResponseExport-Protocol.h>

@class NSArray, NSString;

@interface INQueryHealthSampleIntentResponse <INQueryHealthSampleIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001622c3
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000001622ac
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000016228c
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000016222c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000162224
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000016221e
- (id)propertiesByName;	// IMP=0x000000000016220c
- (id)_dictionaryRepresentation;	// IMP=0x0000000000162069
@property(copy, nonatomic) NSArray *resultValues;
- (long long)_codeWithName:(id)arg1;	// IMP=0x0000000000161e1c
- (long long)_intentResponseCode;	// IMP=0x0000000000161def
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000161dc0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000161d91
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x0000000000161d33
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000161d04
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x0000000000161b80
- (id)init;	// IMP=0x0000000000161b6a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
