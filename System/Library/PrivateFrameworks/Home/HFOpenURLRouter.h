//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HFApplicationURLHandling;

@interface HFOpenURLRouter : NSObject
{
    id <HFApplicationURLHandling> _applicationURLHandler;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x000000000005da7c
- (void).cxx_destruct;	// IMP=0x000000000005e16d
@property(nonatomic) __weak id <HFApplicationURLHandling> applicationURLHandler; // @synthesize applicationURLHandler=_applicationURLHandler;
- (void)_sendAnalyticsEventForURL:(id)arg1;	// IMP=0x000000000005e0a2
- (id)openSensitiveURL:(id)arg1;	// IMP=0x000000000005dd10
- (id)openURL:(id)arg1;	// IMP=0x000000000005dae2

@end
