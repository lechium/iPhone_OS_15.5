//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INGetVisualCodeIntentResponseExport-Protocol.h>

@class INImage, NSString;

@interface INGetVisualCodeIntentResponse <INGetVisualCodeIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x000000000013efff
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x000000000013efe8
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x000000000013efc8
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x000000000013ef64
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000013ef5c
- (void)setPropertiesByName:(id)arg1;	// IMP=0x000000000013ef56
- (id)propertiesByName;	// IMP=0x000000000013ef44
- (id)_dictionaryRepresentation;	// IMP=0x000000000013ed94
@property(copy, nonatomic) INImage *visualCodeImage;
- (long long)_codeWithName:(id)arg1;	// IMP=0x000000000013eb30
- (long long)_intentResponseCode;	// IMP=0x000000000013eb03
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000013ead4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000013eaa5
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x000000000013ea47
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000013ea18
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x000000000013e888
- (id)init;	// IMP=0x000000000013e872

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

