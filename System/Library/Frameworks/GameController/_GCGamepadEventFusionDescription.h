//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/_GCGamepadEventSourceDescription-Protocol.h>

@class NSArray, NSString, _GCGamepadEventFusion, _GCGamepadEventFusionConfig;

__attribute__((visibility("hidden")))
@interface _GCGamepadEventFusionDescription : NSObject <_GCGamepadEventSourceDescription>
{
    _GCGamepadEventFusionConfig *_config;	// 8 = 0x8
    NSArray *_sourcesDescription;	// 16 = 0x10
    _GCGamepadEventFusion *_materializedObject;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007e981
- (void).cxx_destruct;	// IMP=0x000000000007ee43
- (id)materializeWithContext:(id)arg1;	// IMP=0x000000000007ebe1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007eb73
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ea57
- (id)init;	// IMP=0x000000000007ea34
- (id)initWithConfiguration:(id)arg1 sources:(id)arg2;	// IMP=0x000000000007e989

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
