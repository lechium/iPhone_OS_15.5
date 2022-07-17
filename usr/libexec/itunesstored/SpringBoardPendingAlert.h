//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;
@protocol OS_dispatch_source;

@interface SpringBoardPendingAlert : NSObject
{
    CDUnknownBlockType _completionBlock;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 24 = 0x18
    NSString *_viewControllerName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000015a1e5
@property(copy, nonatomic) NSString *viewControllerName; // @synthesize viewControllerName=_viewControllerName;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)cancelTimeoutTimer;	// IMP=0x001000000015a149
- (void)dealloc;	// IMP=0x001000000015a10a

@end
