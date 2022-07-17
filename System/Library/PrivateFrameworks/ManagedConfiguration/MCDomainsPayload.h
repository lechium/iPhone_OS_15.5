//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface MCDomainsPayload
{
    NSDictionary *_restrictions;	// 80 = 0x50
}

+ (_Bool)isPatternValid:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000002a1b7
+ (id)invalidDomainPatternErrorWithPattern:(id)arg1;	// IMP=0x000000000002a0ef
+ (id)localizedPluralForm;	// IMP=0x000000000002a0dc
+ (id)localizedSingularForm;	// IMP=0x000000000002a0c9
+ (id)typeStrings;	// IMP=0x000000000002a062
- (void).cxx_destruct;	// IMP=0x000000000002b885
@property(retain, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
- (id)payloadDescriptionKeyValueSections;	// IMP=0x000000000002b580
- (id)stubDictionary;	// IMP=0x000000000002b39f
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x000000000002a927

@end
