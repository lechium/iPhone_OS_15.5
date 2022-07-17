//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSError;

@interface HKMobilityAnalyticsResult : NSObject
{
    unsigned long long _status;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (id)resultWithStatus:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0000000000006531
- (void).cxx_destruct;	// IMP=0x0000000000006617
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)initWithStatus:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x000000000000658d

@end
