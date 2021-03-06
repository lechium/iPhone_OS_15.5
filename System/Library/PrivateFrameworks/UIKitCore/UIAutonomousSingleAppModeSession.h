//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIAutonomousSingleAppModeConfiguration;

@interface UIAutonomousSingleAppModeSession : NSObject
{
    _Bool _active;	// 8 = 0x8
    UIAutonomousSingleAppModeConfiguration *_effectiveConfiguration;	// 16 = 0x10
}

+ (void)__gaxTrampoline_requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a1fd
+ (void)requestSessionWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a181
+ (id)__gaxTrampoline_currentlyActiveSession;	// IMP=0x000000000001a179
+ (id)currentlyActiveSession;	// IMP=0x000000000001a144
- (void).cxx_destruct;	// IMP=0x000000000001a5fc
@property(copy, nonatomic) UIAutonomousSingleAppModeConfiguration *effectiveConfiguration; // @synthesize effectiveConfiguration=_effectiveConfiguration;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)__gaxTrampoline_endSessionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a41a
- (void)endWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a3b8
- (void)_guidedAccessStateDidChange:(id)arg1;	// IMP=0x000000000001a0f5
- (void)dealloc;	// IMP=0x000000000001a080
- (id)initWithEffectiveConfiguration:(id)arg1;	// IMP=0x0000000000019fc3

@end

