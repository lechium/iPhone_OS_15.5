//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFObserver-Protocol.h>

@class NSString;

@interface _SBFBlockObserver : NSObject <SBFObserver>
{
    CDUnknownBlockType _resultBlock;	// 8 = 0x8
    CDUnknownBlockType _completionBlock;	// 16 = 0x10
    CDUnknownBlockType _failureBlock;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001a3b7
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x000000000001a3a5
- (void)observerDidComplete;	// IMP=0x000000000001a399
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x000000000001a387
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a23e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
