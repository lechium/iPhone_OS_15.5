//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary;

@interface MCSetupAssistantPayload
{
    NSArray *_skipKeys;	// 80 = 0x50
}

+ (id)localizedPluralForm;	// IMP=0x000000000007262c
+ (id)localizedSingularForm;	// IMP=0x0000000000072619
+ (id)typeStrings;	// IMP=0x00000000000725b2
- (void).cxx_destruct;	// IMP=0x0000000000072c0f
@property(readonly, nonatomic) NSArray *skipKeys; // @synthesize skipKeys=_skipKeys;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x0000000000072b11
- (id)verboseDescription;	// IMP=0x0000000000072a5b
- (id)stubDictionary;	// IMP=0x00000000000729d8
@property(readonly, nonatomic) NSDictionary *configuration;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000007263f

@end
