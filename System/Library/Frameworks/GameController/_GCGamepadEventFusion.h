//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCGamepadEventSource-Protocol.h>

@class NSArray, NSString, _GCGamepadEventFusionConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusion : NSObject <_GCGamepadEventSource>
{
    _GCGamepadEventFusionConfig *_config;	// 8 = 0x8
    CDStruct_5be5f302 _fusedData;	// 16 = 0x10
    NSArray *_observations;	// 192 = 0xc0
    NSArray *_observers;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x000000000007e948
@property(copy) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSArray *observations; // @synthesize observations=_observations;
- (id)observeGamepadEvents:(CDUnknownBlockType)arg1;	// IMP=0x000000000007e590
- (void)dealloc;	// IMP=0x000000000007e547
- (id)init;	// IMP=0x000000000007e51c
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;	// IMP=0x000000000007e034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

