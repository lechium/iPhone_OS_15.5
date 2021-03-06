//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, WLKChannelsResponse;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    _Bool _filtered;	// 16 = 0x10
    WLKChannelsResponse *_cachedResponse;	// 24 = 0x18
    int _shouldRefreshNotificationToken;	// 32 = 0x20
    _Bool _shouldRefresh;	// 36 = 0x24
    struct os_unfair_lock_s _shouldRefreshLock;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    NSDictionary *_channelsByBundleID;	// 56 = 0x38
}

+ (id)_validiTunesBundles;	// IMP=0x0000000000044227
+ (_Bool)isItunesBundleID:(id)arg1;	// IMP=0x00000000000441b0
+ (id)sharedInstance;	// IMP=0x0000000000043afc
+ (id)sharedInstanceFiltered;	// IMP=0x0000000000043a92
- (void).cxx_destruct;	// IMP=0x00000000000448a4
@property(readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // @synthesize channelsByBundleID=_channelsByBundleID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (void)invalidateCache;	// IMP=0x000000000004480b
- (void)_loadConfigIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000443ef
- (id)_configuration;	// IMP=0x00000000000442ff
- (_Bool)isItunesOrFirstPartyBundleID:(id)arg1;	// IMP=0x0000000000044277
@property(readonly, copy, nonatomic) NSArray *orderedChannels;
- (id)channelIDForBundleID:(id)arg1;	// IMP=0x0000000000044110
- (id)channelForBundleID:(id)arg1;	// IMP=0x0000000000043e9b
- (id)channelForID:(id)arg1;	// IMP=0x0000000000043df0
@property(readonly, copy, nonatomic) NSDictionary *channelsByID;
@property(readonly, nonatomic) _Bool loaded;
- (void)dealloc;	// IMP=0x0000000000043d07
- (void)loadIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043cf5
- (id)init;	// IMP=0x0000000000043cb6
- (id)initFiltered:(_Bool)arg1;	// IMP=0x0000000000043b63

@end

