//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTTapConfig, DTTapMemoHandler, NSString;
@protocol OS_dispatch_queue;

@interface DTTap : NSObject
{
    _Bool _isRunning;	// 8 = 0x8
    unsigned int _tapID;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_serialQueue;	// 16 = 0x10
    DTTapMemoHandler *_memoHandler;	// 24 = 0x18
    DTTapConfig *_config;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004c406
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
@property(readonly, retain, nonatomic) DTTapMemoHandler *memoHandler; // @synthesize memoHandler=_memoHandler;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) unsigned int tapID; // @synthesize tapID=_tapID;
- (id)_fetchDataForReason:(unsigned long long)arg1;	// IMP=0x000000000004c3aa
- (_Bool)_canFetchWhileArchiving;	// IMP=0x000000000004c3a2
- (void)_unpause;	// IMP=0x000000000004c37f
- (void)_pause;	// IMP=0x000000000004c35c
- (void)_stop;	// IMP=0x000000000004c339
- (void)_start;	// IMP=0x000000000004c316
- (void)resumeDataProcessing;	// IMP=0x000000000004c26d
- (void)suspendDataProcessing;	// IMP=0x000000000004c1c4
- (id)fetchDataNow;	// IMP=0x000000000004bee7
- (id)unpause;	// IMP=0x000000000004bc85
- (id)pause;	// IMP=0x000000000004ba23
- (id)stop;	// IMP=0x000000000004b784
- (id)start;	// IMP=0x000000000004b4f4
@property(readonly, retain, nonatomic) NSString *uuid;
- (id)initWithConfig:(id)arg1 memoHandler:(id)arg2;	// IMP=0x000000000004b3c3
- (id)initWithConfig:(id)arg1;	// IMP=0x000000000004b3af
- (id)init;	// IMP=0x000000000004b376

@end

