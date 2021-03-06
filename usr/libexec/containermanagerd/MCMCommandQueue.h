//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface MCMCommandQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_commands;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002e148
@property(retain, nonatomic) NSMutableArray *commands; // @synthesize commands=_commands;
- (void)insertCommand:(id)arg1;	// IMP=0x001000000002dfb6
- (_Bool)executeAllUntilExhaustedOrError:(unsigned long long *)arg1;	// IMP=0x001000000002df54
- (_Bool)executeNextCommandWithError:(unsigned long long *)arg1;	// IMP=0x001000000002dce0
- (id)init;	// IMP=0x001000000002dc37

@end

