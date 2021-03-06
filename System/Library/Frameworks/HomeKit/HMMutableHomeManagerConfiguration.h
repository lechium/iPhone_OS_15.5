//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFLocationAuthorization, NSOperationQueue;
@protocol HMFLocking;

@interface HMMutableHomeManagerConfiguration
{
    id <HMFLocking> _lock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002638d3
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002637a4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000263675
@property(retain) HMFLocationAuthorization *locationAuthorization;
@property(retain) NSOperationQueue *delegateQueue;
@property(getter=isAdaptive) _Bool adaptive;
@property(getter=isDiscretionary) _Bool discretionary;
@property unsigned long long options;
@property unsigned long long cachePolicy;
- (_Bool)shouldConnect;	// IMP=0x0000000000262bd4
- (id)initWithOptions:(unsigned long long)arg1 cachePolicy:(unsigned long long)arg2;	// IMP=0x0000000000262a72

@end

