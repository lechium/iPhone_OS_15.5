//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSThermalStatusProviding-Protocol.h>

@class NSString, SBThermalController;

@interface SBDashBoardThermalStatusProvider : NSObject <CSThermalStatusProviding>
{
    SBThermalController *_thermalController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000232fbc
@property(readonly, nonatomic) long long thermalStatus;
- (id)initWithThermalController:(id)arg1;	// IMP=0x0000000000232f1f
- (id)init;	// IMP=0x0000000000232ec5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
