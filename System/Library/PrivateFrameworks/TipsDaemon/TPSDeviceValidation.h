//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface TPSDeviceValidation
{
}

- (void)validateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028a73
- (_Bool)_matchesDevices:(id)arg1;	// IMP=0x00000000000287d0
@property(readonly, nonatomic) NSArray *excludeDevices;
@property(readonly, nonatomic) NSArray *targetDevices;
- (id)initWithTargetDevices:(id)arg1 excludeDevices:(id)arg2;	// IMP=0x000000000002877d

@end
