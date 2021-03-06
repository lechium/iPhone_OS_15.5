//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardFoundation/SBFObserver-Protocol.h>

@class NSMutableArray, NSString;

@interface SBFSubject <SBFObserver>
{
    NSMutableArray *_observers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000044bf2
- (id)subscribe:(id)arg1;	// IMP=0x0000000000044a7b
- (void)observerDidFailWithError:(id)arg1;	// IMP=0x000000000004492d
- (void)observerDidComplete;	// IMP=0x0000000000044805
- (void)observerDidReceiveResult:(id)arg1;	// IMP=0x00000000000446b7
- (id)_observers;	// IMP=0x0000000000044644
- (id)init;	// IMP=0x00000000000445d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

