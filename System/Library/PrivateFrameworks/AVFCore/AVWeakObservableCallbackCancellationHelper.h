//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface AVWeakObservableCallbackCancellationHelper : NSObject
{
    NSMutableArray *_callbackRegistrations;	// 8 = 0x8
}

- (void)cancelAllCallbacks;	// IMP=0x0000000000130fbe
- (void)addCallbackToCancel:(id)arg1;	// IMP=0x0000000000130fa8
- (void)dealloc;	// IMP=0x0000000000130f6d
- (id)init;	// IMP=0x0000000000130f21

@end

