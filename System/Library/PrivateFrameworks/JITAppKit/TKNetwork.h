//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TKNetwork : NSObject
{
    double _timeoutInterval;	// 8 = 0x8
}

+ (void)setShared:(id)arg1;	// IMP=0x0000000000001470
+ (id)shared;	// IMP=0x00000000000013a0
@property(readonly, nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
- (void)updateNetworkActivity:(long long)arg1;	// IMP=0x0000000000002050
- (id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001d00
- (id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000001960
- (id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000014c0

@end

