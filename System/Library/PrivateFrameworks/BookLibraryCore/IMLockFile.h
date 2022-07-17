//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IMLockFile : NSObject
{
    int _fd;	// 8 = 0x8
    _Bool _locked;	// 12 = 0xc
    unsigned long long _backgroundTaskIdentifier;	// 16 = 0x10
    _Bool _hasBackgroundTask;	// 24 = 0x18
    NSString *_path;	// 32 = 0x20
}

+ (id)backgroundTaskDelegate;	// IMP=0x000000000002f850
+ (void)setBackgroundTaskDelegate:(id)arg1;	// IMP=0x000000000002f83c
+ (id)iTunesSyncLockFilePath;	// IMP=0x000000000002f7b4
+ (id)iTunesSyncLockFile;	// IMP=0x000000000002f74a
- (void).cxx_destruct;	// IMP=0x000000000002fdbf
@property(readonly, nonatomic) _Bool locked; // @synthesize locked=_locked;
@property(readonly, nonatomic) NSString *path; // @synthesize path=_path;
- (_Bool)lockWithBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x000000000002fbcb
- (void)unlock;	// IMP=0x000000000002fae2
- (_Bool)tryLock:(_Bool)arg1;	// IMP=0x000000000002face
- (_Bool)lock:(_Bool)arg1;	// IMP=0x000000000002fab7
- (_Bool)_lock:(_Bool)arg1 blocking:(_Bool)arg2;	// IMP=0x000000000002f869
- (void)dealloc;	// IMP=0x000000000002f70c
- (id)initWithPath:(id)arg1;	// IMP=0x000000000002f6a3

@end
