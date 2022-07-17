//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PETScalarEventTracker;

@interface SGMSelfIdModelScore : NSObject
{
    PETScalarEventTracker *_tracker;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005510e
@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void)trackEventWithScalar:(unsigned long long)arg1 model:(struct SGMSelfIdModelType_)arg2 result:(struct SGMTypeSafeBool_)arg3 supervision:(struct SGMSelfIdSupervisionType_)arg4 extractionModelVersion:(unsigned long long)arg5;	// IMP=0x0000000000054d8c
- (id)init;	// IMP=0x0000000000054bda

@end
