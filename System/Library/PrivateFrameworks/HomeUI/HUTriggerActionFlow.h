//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HUTriggerActionFlow : NSObject
{
    _Bool _hasChangedState;	// 8 = 0x8
    unsigned long long _flowState;	// 16 = 0x10
}

+ (id)selectFlowForState:(unsigned long long)arg1;	// IMP=0x00000000001d2a2b
@property(readonly, nonatomic) _Bool hasChangedState; // @synthesize hasChangedState=_hasChangedState;
@property(readonly, nonatomic) unsigned long long flowState; // @synthesize flowState=_flowState;
@property(readonly, nonatomic) _Bool isLastState;
@property(readonly, nonatomic) _Bool isSingleFlow;
@property(readonly, nonatomic) _Bool isFinished;
@property(readonly, nonatomic) _Bool isStandalone;
- (id)getNextState;	// IMP=0x00000000001d2aac
- (unsigned long long)_nextState;	// IMP=0x00000000001d2a6c
- (id)initWithFlowState:(unsigned long long)arg1 hasChangedState:(_Bool)arg2;	// IMP=0x00000000001d29e3
- (id)initWithFlowState:(unsigned long long)arg1;	// IMP=0x00000000001d29cf
- (id)initWithEditorMode:(unsigned long long)arg1;	// IMP=0x00000000001d2992

@end
