//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSURemotePropertyList : NSObject
{
    NSURL *_remoteURL;	// 8 = 0x8
    NSURL *_localURL;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_accessQueue;	// 24 = 0x18
    NSDictionary *_propertyList;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_checkQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_updateTimer;	// 48 = 0x30
    _Bool _didUpdateAtLeastOnce;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000002cea4a
- (void)processPropertyList:(id)arg1;	// IMP=0x00000000002ce919
- (id)deserializePropertyListData:(id)arg1 error:(out id *)arg2;	// IMP=0x00000000002ce8f8
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;	// IMP=0x00000000002ce5a9
- (id)URLRequest;	// IMP=0x00000000002ce374
- (double)timeIntervalUntilNextUpdate;	// IMP=0x00000000002ce220
- (id)validateUserDefaultsDownloadURL:(id)arg1;	// IMP=0x00000000002ce20a
- (void)checkForUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cdf35
- (id)arrayForKey:(id)arg1;	// IMP=0x00000000002cdea9
- (id)dictionaryForKey:(id)arg1;	// IMP=0x00000000002cde1d
- (id)URLForKey:(id)arg1;	// IMP=0x00000000002cdd5e
- (id)stringForKey:(id)arg1;	// IMP=0x00000000002cdcd2
- (id)objectForKey:(id)arg1;	// IMP=0x00000000002cdb28
- (void)updateIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000002cda67
- (void)processDidResume:(id)arg1;	// IMP=0x00000000002cda4c
- (void)processWillSuspend:(id)arg1;	// IMP=0x00000000002cda16
- (void)startUpdateTimer;	// IMP=0x00000000002cd8b9
- (void)dealloc;	// IMP=0x00000000002cd83b
- (id)initWithRemoteURL:(id)arg1 localURL:(id)arg2;	// IMP=0x00000000002cd513
- (id)init;	// IMP=0x00000000002cd3ea

@end

