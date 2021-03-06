//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSConditionLock.h>

#import <MIME/MFLockObject-Protocol.h>

@class NSString;

@interface MFConditionLock : NSConditionLock <MFLockObject>
{
    NSString *_name;	// 16 = 0x10
    id _delegate;	// 24 = 0x18
}

+ (void)initialize;	// IMP=0x00000000000376f8
- (void)dealloc;	// IMP=0x00000000000379b5
- (id)description;	// IMP=0x0000000000037925
- (void)unlockWithCondition:(long long)arg1;	// IMP=0x00000000000378e5
- (void)unlock;	// IMP=0x00000000000378af
- (_Bool)lockWhenCondition:(long long)arg1 beforeDate:(id)arg2;	// IMP=0x0000000000037836
- (_Bool)lockBeforeDate:(id)arg1;	// IMP=0x00000000000377c7
- (_Bool)isLockedByMe;	// IMP=0x00000000000377bd
- (id)initWithName:(id)arg1 condition:(long long)arg2 andDelegate:(id)arg3;	// IMP=0x000000000003774a
- (id)initWithName:(id)arg1 andDelegate:(id)arg2;	// IMP=0x0000000000037733
- (id)init;	// IMP=0x0000000000037710

@end

