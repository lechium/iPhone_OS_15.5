//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface PFLAnalyticsSubmitter : NSObject
{
    NSString *_submitterId;	// 8 = 0x8
}

+ (id)stringForKey:(unsigned long long)arg1;	// IMP=0x0000000000011d4c
+ (id)shared;	// IMP=0x0000000000011cf7
- (void).cxx_destruct;	// IMP=0x0000000000011eb8
@property(readonly, nonatomic) NSString *submitterId; // @synthesize submitterId=_submitterId;
- (void)submitAnalyticsForKey:(unsigned long long)arg1 value:(id)arg2;	// IMP=0x0000000000011d62
- (id)init;	// IMP=0x0000000000011c74

@end

