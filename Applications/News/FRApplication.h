//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class NSString;

@interface FRApplication : UIApplication
{
    _Bool shouldChangeWindowFrameSize;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldChangeWindowFrameSize; // @synthesize shouldChangeWindowFrameSize;
- (void)sendEvent:(id)arg1;	// IMP=0x001000000006402d
- (_Bool)shouldRecordExtendedLaunchTime;	// IMP=0x0010000000064025
- (id)_extendLaunchTest;	// IMP=0x0010000000064018
- (id)init;	// IMP=0x0010000000063fd9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

