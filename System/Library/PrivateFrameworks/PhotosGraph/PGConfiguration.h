//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PGConfiguration : NSObject
{
    double _version;	// 8 = 0x8
}

+ (id)_persistedConfigurationPath;	// IMP=0x0000000000569ae9
+ (id)persistedConfiguration;	// IMP=0x00000000005698fc
+ (id)name;	// IMP=0x00000000005698f2
@property(readonly, nonatomic) double version; // @synthesize version=_version;
- (void)deletePersistedConfiguration;	// IMP=0x0000000000569781
- (id)_configurationDictionary;	// IMP=0x00000000005695ac
- (void)persistConfiguration;	// IMP=0x00000000005692f7
- (id)description;	// IMP=0x00000000005690d3
- (void)_configureWithSource:(id)arg1 propertyKeys:(id)arg2;	// IMP=0x0000000000568f2b
- (id)propertyKeys;	// IMP=0x0000000000568e56
- (id)initWithSources:(id)arg1 version:(double)arg2;	// IMP=0x0000000000568c84

@end

