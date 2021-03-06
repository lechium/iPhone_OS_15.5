//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface MCCertificateTransparencyPayload
{
    NSArray *_hashDictionaries;	// 80 = 0x50
    NSArray *_domainRules;	// 88 = 0x58
}

+ (_Bool)isValidDomainRule:(id)arg1;	// IMP=0x00000000000385f9
+ (id)localizedPluralForm;	// IMP=0x0000000000037b03
+ (id)localizedSingularForm;	// IMP=0x0000000000037af0
+ (id)typeStrings;	// IMP=0x0000000000037a89
- (void).cxx_destruct;	// IMP=0x0000000000038afa
@property(readonly, nonatomic) NSArray *domainRules; // @synthesize domainRules=_domainRules;
@property(readonly, nonatomic) NSArray *hashDictionaries; // @synthesize hashDictionaries=_hashDictionaries;
- (id)subtitle1Label;	// IMP=0x0000000000038a5b
- (id)verboseDescription;	// IMP=0x00000000000389a2
- (id)stubDictionary;	// IMP=0x0000000000038675
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000037b16

@end

