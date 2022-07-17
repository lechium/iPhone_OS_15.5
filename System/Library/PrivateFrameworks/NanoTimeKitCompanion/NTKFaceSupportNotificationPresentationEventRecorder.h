//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface NTKFaceSupportNotificationPresentationEventRecorder : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMapTable *_lookup;	// 16 = 0x10
}

+ (id)eventRecorder;	// IMP=0x000000000029b022
+ (id)sharedRecorder;	// IMP=0x000000000029acb9
- (void).cxx_destruct;	// IMP=0x000000000029b5bd
@property(readonly, nonatomic) NSMapTable *lookup; // @synthesize lookup=_lookup;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_validateIdentifier:(id)arg1;	// IMP=0x000000000029b558
- (void)_queue_endPresentationForIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 errorCode:(long long)arg4 optOutStatus:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000029b346
- (void)_queue_beginPresentationForIdentifier:(id)arg1 pushDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000029b0cb
- (id)_init;	// IMP=0x000000000029b044
- (void)endPresentationForIdentifier:(id)arg1 status:(long long)arg2 artworkUsed:(long long)arg3 errorCode:(long long)arg4 optOutStatus:(long long)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000029aeb0
- (void)beginPresentationForIdentifier:(id)arg1 pushDate:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000029ad4e

@end
