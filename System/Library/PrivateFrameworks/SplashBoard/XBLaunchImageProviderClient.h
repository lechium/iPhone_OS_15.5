//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSBaseXPCClient.h>

@class XBApplicationLaunchCompatibilityInfo;

@interface XBLaunchImageProviderClient : BSBaseXPCClient
{
    XBApplicationLaunchCompatibilityInfo *_appInfo;	// 16 = 0x10
}

+ (void)preheatServiceWithTimeout:(double)arg1;	// IMP=0x000000000002b5bc
- (void).cxx_destruct;	// IMP=0x000000000002b7e2
- (unsigned int)generateImageWithContext:(id)arg1 captureInfo:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000002a9df
- (id)initWithApplicationInfo:(id)arg1;	// IMP=0x000000000002a965
- (id)init;	// IMP=0x000000000002a8de

@end

