//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSSet;
@protocol OS_dispatch_queue;

@interface FCFetchGroup : NSObject
{
    _Bool _shouldFilter;	// 8 = 0x8
    _Bool _isUserFacing;	// 9 = 0x9
    NSSet *_keys;	// 16 = 0x10
    id _context;	// 24 = 0x18
    long long _qualityOfService;	// 32 = 0x20
    long long _relativePriority;	// 40 = 0x28
    unsigned long long _numberOfFetchAttempts;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_completionQueue;	// 56 = 0x38
    CDUnknownBlockType _completion;	// 64 = 0x40
    NSDate *_requestDate;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000121009
@property(retain, nonatomic) NSDate *requestDate; // @synthesize requestDate=_requestDate;
@property(readonly, copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
- (long long)comparePriority:(id)arg1;	// IMP=0x0000000000120ec3

@end
