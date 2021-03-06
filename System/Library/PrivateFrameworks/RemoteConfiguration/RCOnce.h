//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RCMutexLock;

@interface RCOnce : NSObject
{
    _Bool _finished;	// 8 = 0x8
    RCMutexLock *_lock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000009170
@property(retain, nonatomic) RCMutexLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool finished; // @synthesize finished=_finished;
- (_Bool)hasBeenTriggered;	// IMP=0x00000000000090f5
- (_Bool)trigger;	// IMP=0x0000000000009091
- (void)executeOnce:(CDUnknownBlockType)arg1;	// IMP=0x000000000000900d
- (id)initWithOptions:(unsigned long long)arg1;	// IMP=0x0000000000008fa7
- (id)init;	// IMP=0x0000000000008f93

@end

