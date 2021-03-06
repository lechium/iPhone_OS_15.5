//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSLocking-Protocol.h>

@interface NSMultiReadUniWriteLock : NSObject <NSLocking>
{
    void *_priv;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cb74a
- (id)name;	// IMP=0x00000000000cba78
- (void)setName:(id)arg1;	// IMP=0x00000000000cba38
- (id)description;	// IMP=0x00000000000cb94e
- (void)unlock;	// IMP=0x00000000000cb90d
- (void)lock;	// IMP=0x00000000000cb8e4
- (_Bool)lockForWritingBeforeDate:(id)arg1;	// IMP=0x00000000000cb8dc
- (_Bool)tryLockForWriting;	// IMP=0x00000000000cb8a9
- (void)lockForWriting;	// IMP=0x00000000000cb880
- (_Bool)lockForReadingBeforeDate:(id)arg1;	// IMP=0x00000000000cb878
- (_Bool)tryLockForReading;	// IMP=0x00000000000cb860
- (void)lockForReading;	// IMP=0x00000000000cb84e
- (void)dealloc;	// IMP=0x00000000000cb7d9
- (id)init;	// IMP=0x00000000000cb759

@end

