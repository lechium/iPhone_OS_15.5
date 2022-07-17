//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INSetTaskAttributeIntentResponseExport-Protocol.h>

@class INTask, NSString;

@interface INSetTaskAttributeIntentResponse <INSetTaskAttributeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000001a26ef
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000001a26e4
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000001a26c4
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000001a2670
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a2668
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000001a2612
- (id)propertiesByName;	// IMP=0x00000000001a2600
- (id)_dictionaryRepresentation;	// IMP=0x00000000001a246a
@property(nonatomic) unsigned long long warnings;
@property(copy, nonatomic) INTask *modifiedTask;
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000001a206c
- (long long)_intentResponseCode;	// IMP=0x00000000001a203f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001a2010
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001a1fe1
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000001a1f83
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001a1f54
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000001a1ddd
- (id)init;	// IMP=0x00000000001a1dc7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
