//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HDDemoDataGenerator;

@interface HDDemoDataBaseSampleGenerator : NSObject <NSSecureCoding>
{
    _Bool _createdFromNSKeyedUnarchiver;	// 8 = 0x8
    HDDemoDataGenerator *_demoDataGenerator;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000018d1ec
- (void).cxx_destruct;	// IMP=0x000000000018d27f
- (_Bool)createdFromNSKeyedUnarchiver;	// IMP=0x000000000018d276
@property(nonatomic) __weak HDDemoDataGenerator *demoDataGenerator; // @synthesize demoDataGenerator=_demoDataGenerator;
- (void)generateSamplesForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;	// IMP=0x000000000018d249
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;	// IMP=0x000000000018d243
- (void)setupWithDemoDataGenerator:(id)arg1;	// IMP=0x000000000018d232
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000018d22c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018d1f4
- (_Bool)_createdFromNSKeyedUnarchiver;	// IMP=0x000000000018d1e3
- (id)init;	// IMP=0x000000000018d1ab

@end

