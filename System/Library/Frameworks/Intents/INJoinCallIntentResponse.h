//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/INJoinCallIntentResponseExport-Protocol.h>

@class NSString;

@interface INJoinCallIntentResponse <INJoinCallIntentResponseExport>
{
}

+ (_Bool)_appLaunchRequestedFromCode:(long long)arg1;	// IMP=0x00000000004ddbeb
+ (int)_errorCodeFromCode:(long long)arg1;	// IMP=0x00000000004ddbe0
+ (int)_typeFromCode:(long long)arg1;	// IMP=0x00000000004ddbc0
+ (long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(_Bool)arg3;	// IMP=0x00000000004ddb68
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000004ddb60
- (void)setPropertiesByName:(id)arg1;	// IMP=0x00000000004ddb5a
- (id)propertiesByName;	// IMP=0x00000000004ddb48
- (id)_dictionaryRepresentation;	// IMP=0x00000000004dda19
- (long long)_codeWithName:(id)arg1;	// IMP=0x00000000004dd928
- (long long)_intentResponseCode;	// IMP=0x00000000004dd907
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000004dd8d8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000004dd8a9
@property(readonly, nonatomic) long long code;
- (id)initWithBackingStore:(id)arg1;	// IMP=0x00000000004dd84b
- (id)_initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004dd81c
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;	// IMP=0x00000000004dd698
- (id)init;	// IMP=0x00000000004dd682

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

