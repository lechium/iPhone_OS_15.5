//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NFMIDSMessageInstance : NSObject
{
    long long _retryCount;	// 8 = 0x8
    double _retryInterval;	// 16 = 0x10
    CDUnknownBlockType _retryAction;	// 24 = 0x18
}

+ (id)newMessageInstanceWithAction:(CDUnknownBlockType)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3;	// IMP=0x0000000000005aa5
- (void).cxx_destruct;	// IMP=0x0000000000005c24
@property(copy, nonatomic) CDUnknownBlockType retryAction; // @synthesize retryAction=_retryAction;
@property(nonatomic) double retryInterval; // @synthesize retryInterval=_retryInterval;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
- (id)description;	// IMP=0x0000000000005b2c

@end

