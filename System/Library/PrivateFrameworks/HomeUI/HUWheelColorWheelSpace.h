//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HUColorWheelSpace-Protocol.h>

@class NSString;

@interface HUWheelColorWheelSpace : NSObject <HUColorWheelSpace>
{
}

- (CDStruct_c3b9c2ee)coordinateForColor:(CDStruct_dbd0f16f)arg1 isValid:(out _Bool *)arg2;	// IMP=0x00000000003ece82
- (CDStruct_dbd0f16f)colorForCoordinate:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000003ecdcc
@property(readonly, nonatomic) unsigned long long type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned long long mirroringBiasAxis;
@property(readonly) Class superclass;

@end

