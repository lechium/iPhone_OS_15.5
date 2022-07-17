//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MLRSchedulingTask : NSObject
{
    long long _source;	// 8 = 0x8
    NSString *_bundleIdentifier;	// 16 = 0x10
    double _maxTimeLimit;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000016055
@property(readonly, nonatomic) double maxTimeLimit; // @synthesize maxTimeLimit=_maxTimeLimit;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) long long source; // @synthesize source=_source;
- (id)description;	// IMP=0x0010000000015f72
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2;	// IMP=0x0010000000015f5d
- (id)initWithBundleIdentifier:(id)arg1 taskSource:(long long)arg2 maxTimeLimit:(double)arg3;	// IMP=0x0010000000015ed8

@end
