//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TUIAnalyticsSession : NSObject
{
    _Bool _sessionActive;	// 8 = 0x8
}

+ (id)currentInputModeIdentifier;	// IMP=0x0000000000017763
+ (id)preferredEventName:(id)arg1;	// IMP=0x00000000000176ea
@property(readonly, nonatomic, getter=isSessionActive) _Bool sessionActive; // @synthesize sessionActive=_sessionActive;
- (void)dealloc;	// IMP=0x00000000000176a3
- (void)endSession;	// IMP=0x0000000000017699
- (void)beginSession;	// IMP=0x000000000001768f

@end

