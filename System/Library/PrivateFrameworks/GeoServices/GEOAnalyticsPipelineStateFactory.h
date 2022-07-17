//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOLogMsgState, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineStateFactory : NSObject
{
    NSObject<OS_dispatch_queue> *_isolationQueue;	// 8 = 0x8
    GEOLogMsgState *_deviceIdentifierState;	// 16 = 0x10
    GEOLogMsgState *_deviceIdentifierInternalState;	// 24 = 0x18
    GEOLogMsgState *_applicationIdentifierState;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
}

+ (id)sharedFactory;	// IMP=0x0000000000fe556c
- (void).cxx_destruct;	// IMP=0x0000000000feb072
@property(retain) NSString *countryCode; // @synthesize countryCode=_countryCode;
- (void)deviceCountryChanged:(id)arg1;	// IMP=0x0000000000feafcc
- (void)sessionStateForType:(int)arg1 sessionAppId:(id)arg2 onQueue:(id)arg3 callback:(CDUnknownBlockType)arg4;	// IMP=0x0000000000feaa2d
- (void)sessionStateForType:(int)arg1 onQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000fea9aa
- (id)_sessionStateForType:(int)arg1;	// IMP=0x0000000000fea284
- (void)sessionStateForType:(int)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000fea21e
- (id)stateForType:(long long)arg1;	// IMP=0x0000000000fe7c21
- (int)logMsgStateTypeForType:(long long)arg1;	// IMP=0x0000000000fe7c09
- (id)curatedCollectionRedacted;	// IMP=0x0000000000fe7a92
- (id)mapUIShown;	// IMP=0x0000000000fe6402
- (void)dealloc;	// IMP=0x0000000000fe599d
- (id)init;	// IMP=0x0000000000fe55c1

@end
