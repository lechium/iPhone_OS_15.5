//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MITestManager : NSObject
{
    unsigned long long _testFlags;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000001918a
@property(nonatomic) unsigned long long testFlags; // @synthesize testFlags=_testFlags;
- (_Bool)testFlagsAreSet:(unsigned long long)arg1;	// IMP=0x00100000000197f0
- (void)clearTestFlags:(unsigned long long)arg1;	// IMP=0x001000000001979b
- (_Bool)clearIsRunningInTestMode:(id *)arg1;	// IMP=0x0010000000019569
- (_Bool)setIsRunningInTestMode:(id *)arg1;	// IMP=0x001000000001936e
- (_Bool)isRunningInTestMode:(_Bool *)arg1 outError:(id *)arg2;	// IMP=0x00100000000192a1
- (id)_testModeSentinelURL;	// IMP=0x0010000000019217

@end
