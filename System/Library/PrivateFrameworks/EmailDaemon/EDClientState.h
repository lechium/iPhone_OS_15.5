//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EDClientStateReporting-Protocol.h>
#import <EmailDaemon/EFLoggable-Protocol.h>

@class NSArray, NSString;

@interface EDClientState : NSObject <EDClientStateReporting, EFLoggable>
{
    _Bool _isForeground;	// 8 = 0x8
    _Bool _isRunningTests;	// 9 = 0x9
    NSArray *_visibleMailboxesObjectIds;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000019750
+ (id)log;	// IMP=0x0000000000019673
- (void).cxx_destruct;	// IMP=0x0000000000019fa4
@property(nonatomic) _Bool isRunningTests; // @synthesize isRunningTests=_isRunningTests;
@property(retain) NSArray *visibleMailboxesObjectIds; // @synthesize visibleMailboxesObjectIds=_visibleMailboxesObjectIds;
@property(readonly, nonatomic) _Bool isForeground; // @synthesize isForeground=_isForeground;
- (void)setStateForDemoMode:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019e41
- (void)setClientIsRunningTests:(_Bool)arg1;	// IMP=0x0000000000019d6b
- (id)giveBoostWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000019b09
- (void)setClientIsInForeground:(_Bool)arg1;	// IMP=0x00000000000199ed
- (void)setCurrentlyVisibleMailboxObjectIDs:(id)arg1;	// IMP=0x00000000000198c6
- (void)dealloc;	// IMP=0x00000000000197dd
- (id)init;	// IMP=0x00000000000197a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

