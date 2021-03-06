//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber;

@interface CKVCoalescedTask : NSObject
{
    NSNumber *_taskId;	// 8 = 0x8
    NSNumber *_eventId;	// 16 = 0x10
    CDUnknownBlockType _runBlock;	// 24 = 0x18
    _Bool _arrivedInCoalescingWindow;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009da12
@property(readonly, nonatomic) _Bool arrivedInCoalescingWindow; // @synthesize arrivedInCoalescingWindow=_arrivedInCoalescingWindow;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void)cancel;	// IMP=0x000000000009d9f1
- (void)executeAfterDelay:(double)arg1 onQueue:(id)arg2;	// IMP=0x000000000009d99f
- (void)execute;	// IMP=0x000000000009d993
- (CDUnknownBlockType)_runBlockForTask:(CDUnknownBlockType)arg1 eventRegistry:(id)arg2 completion:(CDUnknownBlockType)arg3 completionQueue:(id)arg4;	// IMP=0x000000000009d78a
- (id)description;	// IMP=0x000000000009d704
- (id)initWithTaskId:(id)arg1 eventId:(id)arg2 date:(id)arg3 arrivedInCoalescingWindow:(_Bool)arg4 eventRegistry:(id)arg5 taskBlock:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7 completionQueue:(id)arg8;	// IMP=0x000000000009d5c1

@end

