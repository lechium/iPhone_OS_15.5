//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DTTapConfig;
@protocol DTTapMemoHandlerDelegate, OS_dispatch_queue;

@interface DTTapMemoHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    _Bool _sentRecordingInfo;	// 16 = 0x10
    DTTapConfig *_config;	// 24 = 0x18
    id <DTTapMemoHandlerDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002953c
@property(readonly, retain, nonatomic) DTTapConfig *config; // @synthesize config=_config;
- (id)handleMemo:(id)arg1;	// IMP=0x0000000000028e24
- (void)resume;	// IMP=0x0000000000028e16
- (void)suspend;	// IMP=0x0000000000028e08
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000028d0f

@end
