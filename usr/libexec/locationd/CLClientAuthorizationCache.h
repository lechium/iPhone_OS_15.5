//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <LocationSupport/CLIntersiloService.h>

@class NSDictionary, NSMutableArray, NSString;

@interface CLClientAuthorizationCache : CLIntersiloService
{
    NSDictionary *_clients;	// 8 = 0x8
    NSMutableArray *_cachePopulationReplyBlocks;	// 16 = 0x10
}

+ (id)getSilo;	// IMP=0x00200000009d55c8
+ (void)performSyncOnSilo:(id)arg1 invoker:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d55af
+ (void)becameFatallyBlocked:(id)arg1 index:(unsigned long long)arg2;	// IMP=0x00100000009d5552
@property(retain, nonatomic) NSMutableArray *cachePopulationReplyBlocks; // @synthesize cachePopulationReplyBlocks=_cachePopulationReplyBlocks;
@property(retain, nonatomic) NSDictionary *clients; // @synthesize clients=_clients;
- (void)notifyWhenCacheIsPopulatedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000009d5b96
- (void)setClientsAuthorizationMap:(id)arg1;	// IMP=0x00100000009d5920
- (void)getAuthorizationContextOfClient:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000009d587c
- (id)syncgetAuthorizationContextOfClient:(id)arg1;	// IMP=0x00100000009d584b
- (int)syncgetAuthorizationOfClient:(id)arg1 forServiceMask:(unsigned long long)arg2;	// IMP=0x00100000009d56bf
- (void)endService;	// IMP=0x00100000009d5688
- (void)beginService;	// IMP=0x00100000009d5661
- (id)init;	// IMP=0x00100000009d5624

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool valid;

@end
