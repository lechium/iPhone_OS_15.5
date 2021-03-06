//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/RTFrameworkProtocol-Protocol.h>

@class NSString, RTRoutineManager;

__attribute__((visibility("hidden")))
@interface RTRoutineManagerExportedObject : NSObject <RTFrameworkProtocol>
{
    RTRoutineManager *_routineManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000005c05
@property(nonatomic) __weak RTRoutineManager *routineManager; // @synthesize routineManager=_routineManager;
- (void)onVehicleEvents:(id)arg1 error:(id)arg2;	// IMP=0x0000000000005b58
- (void)onScenarioTrigger:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000005ad2
- (void)onLeechedLowConfidenceVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000005a4c
- (void)onLeechedVisit:(id)arg1 withError:(id)arg2;	// IMP=0x00000000000059c6
- (void)onVisit:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000005940
- (id)initWithRoutineManager:(id)arg1;	// IMP=0x00000000000058dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

