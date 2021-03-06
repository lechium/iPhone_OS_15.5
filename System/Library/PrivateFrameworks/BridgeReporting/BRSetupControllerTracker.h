//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BRSetupControllerDetails, NSMutableArray;

@interface BRSetupControllerTracker : NSObject
{
    NSMutableArray *_setupControllers;	// 8 = 0x8
    BRSetupControllerDetails *_holdControllerDetails;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000020c2
@property(retain, nonatomic) BRSetupControllerDetails *holdControllerDetails; // @synthesize holdControllerDetails=_holdControllerDetails;
@property(retain, nonatomic) NSMutableArray *setupControllers; // @synthesize setupControllers=_setupControllers;
- (void)clearControllerHold;	// IMP=0x0000000000002078
- (id)lastPushedSetupController;	// IMP=0x0000000000001f6c
- (void)addSetupController:(id)arg1 action:(unsigned long long)arg2;	// IMP=0x0000000000001e6b
- (id)init;	// IMP=0x0000000000001e15

@end

