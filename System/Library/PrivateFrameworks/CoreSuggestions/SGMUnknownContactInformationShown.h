//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMUnknownContactInformationShown : NSObject
{
    PETScalarEventTracker *_tracker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004dc5a
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 app:(struct SGMContactDetailUsedApp_)arg2 wasSuggestedContact:(struct SGMTypeSafeBool_)arg3;	// IMP=0x000000000004d9a8
- (id)init;	// IMP=0x000000000004d862

@end

