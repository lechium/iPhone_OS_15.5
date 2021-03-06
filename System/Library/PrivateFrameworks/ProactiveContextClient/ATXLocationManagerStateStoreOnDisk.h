//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXLocationManagerStateStore-Protocol.h>

@class NSString;
@protocol ATXLocationManagerStateStoreOnDiskEnv;

@interface ATXLocationManagerStateStoreOnDisk : NSObject <ATXLocationManagerStateStore>
{
    NSString *_path;	// 8 = 0x8
    id <ATXLocationManagerStateStoreOnDiskEnv> _env;	// 16 = 0x10
    CDUnknownBlockType _deferredLoadCallback;	// 24 = 0x18
    int _fd;	// 32 = 0x20
    double _cacheExpirationInterval;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000d716
@property double cacheExpirationInterval; // @synthesize cacheExpirationInterval=_cacheExpirationInterval;
- (void)clear;	// IMP=0x000000000000d66f
- (void)write:(id)arg1;	// IMP=0x000000000000d4a0
- (void)_deviceDidUnlock;	// IMP=0x000000000000d3fd
- (id)loadNowOrCallLater:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d0cc
- (_Bool)_tryToOpen;	// IMP=0x000000000000d05c
- (void)dealloc;	// IMP=0x000000000000d01f
- (id)initWithLocationParameters:(id)arg1;	// IMP=0x000000000000ce76
- (id)initWithPath:(id)arg1 environment:(id)arg2 locationParameters:(id)arg3;	// IMP=0x000000000000cdaa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

