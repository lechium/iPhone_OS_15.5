//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FCThreadSafeMutableDictionary;
@protocol FCBackgroundTaskable;

@interface FCRemoteDefaults : NSObject
{
    id <FCBackgroundTaskable> _backgroundTaskable;	// 8 = 0x8
    FCThreadSafeMutableDictionary *_remoteDefaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021d92d
@property(readonly, nonatomic) FCThreadSafeMutableDictionary *remoteDefaults; // @synthesize remoteDefaults=_remoteDefaults;
@property(readonly, nonatomic) __weak id <FCBackgroundTaskable> backgroundTaskable; // @synthesize backgroundTaskable=_backgroundTaskable;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;	// IMP=0x000000000021d5de
- (id)URLRequest;	// IMP=0x000000000021d458
- (void)updateRemoteDefaults;	// IMP=0x000000000021d13e
- (_Bool)isAvailable;	// IMP=0x000000000021d100
- (void)checkForUpdate;	// IMP=0x000000000021d01b
- (id)dictionaryForKey:(id)arg1;	// IMP=0x000000000021cf8e
- (id)URLForKey:(id)arg1;	// IMP=0x000000000021cebb
- (id)stringForKey:(id)arg1;	// IMP=0x000000000021ce2e
- (id)objectForKey:(id)arg1;	// IMP=0x000000000021ccbf
- (id)init;	// IMP=0x000000000021cbbd
- (id)initWithBackgroundTaskable:(id)arg1;	// IMP=0x000000000021caa8

@end

