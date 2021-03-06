//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSLocale, TRIClient;

@interface LRRCdmTrialAssetManager : NSObject
{
    TRIClient *_nlTRIClient;	// 8 = 0x8
    NSArray *_namespaces;	// 16 = 0x10
    NSDictionary *_trialCompatibilityVersions;	// 24 = 0x18
    NSDictionary *_trialIdentifiers;	// 32 = 0x20
    NSLocale *_locale;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000df54
@property(readonly, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (unsigned int)fetchCompatibilityVersionForNamespace:(id)arg1;	// IMP=0x000000000000dee8
- (id)fetchCompatibilityVersion;	// IMP=0x000000000000dcf1
- (id)fetchRolloutStatusForNamespace:(id)arg1;	// IMP=0x000000000000dc17
- (id)fetchRolloutStatus;	// IMP=0x000000000000da50
- (id)getAssetInfo:(id)arg1;	// IMP=0x000000000000d885
- (void)initTRIClient;	// IMP=0x000000000000d7e7
- (id)initWithLocale:(id)arg1 forNamespaces:(id)arg2;	// IMP=0x000000000000d73e

@end

