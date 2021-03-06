//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface _CDPerfMetricFamily : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSMutableDictionary *_perfMetrics;	// 16 = 0x10
}

+ (id)perfMetricFamilyWithName:(id)arg1;	// IMP=0x0000000000013711
- (void).cxx_destruct;	// IMP=0x0000000000013f92
@property(readonly) NSMutableDictionary *perfMetrics; // @synthesize perfMetrics=_perfMetrics;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000013e66
- (id)allPerfMetrics;	// IMP=0x0000000000013d70
- (id)perfMetricWithName:(id)arg1;	// IMP=0x0000000000013c2c
- (id)perfMetricWithName:(id)arg1 string:(id)arg2;	// IMP=0x00000000000139ef
- (id)initWithName:(id)arg1;	// IMP=0x000000000001396a

@end

