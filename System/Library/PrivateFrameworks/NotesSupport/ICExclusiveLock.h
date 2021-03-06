//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesSupport/NSLocking-Protocol.h>

@class NSString;

@interface ICExclusiveLock : NSObject <NSLocking>
{
    int _fd;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_cachePath;	// 24 = 0x18
    NSString *_fullPath;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000fa52
- (id)name;	// IMP=0x000000000000fa44
- (void)setName:(id)arg1;	// IMP=0x000000000000f929
- (_Bool)tryLock;	// IMP=0x000000000000f8e3
- (void)unlock;	// IMP=0x000000000000f8bf
- (void)lock;	// IMP=0x000000000000f881
- (void)dealloc;	// IMP=0x000000000000f852
- (id)initWithName:(id)arg1 cachePath:(id)arg2;	// IMP=0x000000000000f73d
- (id)init;	// IMP=0x000000000000f727

@end

