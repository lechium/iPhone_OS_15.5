//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface PGRemoteConfiguration : NSObject
{
    NSMutableDictionary *_remoteConfigurationCache;	// 8 = 0x8
    NSArray *_configurationSources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000543663
- (void)_cacheFallbackValueForKey:(id)arg1 withValue:(id)arg2;	// IMP=0x00000000005434eb
- (id)_configValueForKey:(id)arg1 withFallbackValue:(id)arg2;	// IMP=0x000000000054335d
- (id)fileValueForKey:(id)arg1 withFallbackValue:(id)arg2;	// IMP=0x000000000054328e
- (_Bool)_isValidFilePath:(id)arg1;	// IMP=0x0000000000543213
- (id)dictionaryValueForKey:(id)arg1 withFallbackValue:(id)arg2;	// IMP=0x000000000054306d
- (id)arrayValueForKey:(id)arg1 withFallbackValue:(id)arg2;	// IMP=0x0000000000542ebb
- (double)doubleValueForKey:(id)arg1 withFallbackValue:(double)arg2;	// IMP=0x0000000000542e03
- (long long)longValueForKey:(id)arg1 withFallbackValue:(long long)arg2;	// IMP=0x0000000000542d56
- (id)stringValueForKey:(id)arg1 withFallbackValue:(id)arg2;	// IMP=0x0000000000542cdf
- (_Bool)boolValueForKey:(id)arg1 withFallbackValue:(_Bool)arg2;	// IMP=0x0000000000542c32
- (id)onDiskConfigurationPathForResourceFileName:(id)arg1;	// IMP=0x0000000000542a66
- (id)initWithConfigurationSources:(id)arg1;	// IMP=0x00000000005429e1
- (id)initWithTrialNamespace:(unsigned short)arg1 onDiskResourceFile:(id)arg2;	// IMP=0x00000000005427f6
- (id)init;	// IMP=0x000000000054271a

@end

