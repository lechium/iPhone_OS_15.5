//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSupport/NSLocking-Protocol.h>

@class NSString;

@interface CPExclusiveLock : NSObject <NSLocking>
{
    int _fd;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
}

- (id)name;	// IMP=0x000000000000328f
- (void)setName:(id)arg1;	// IMP=0x00000000000031c0
- (_Bool)tryLock;	// IMP=0x0000000000003150
- (void)unlock;	// IMP=0x000000000000312c
- (void)lock;	// IMP=0x00000000000030c4
- (void)dealloc;	// IMP=0x0000000000003089
- (id)initWithName:(id)arg1;	// IMP=0x0000000000002ff6
- (id)init;	// IMP=0x0000000000002fe2

@end
