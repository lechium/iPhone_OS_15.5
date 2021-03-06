//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CMStrideCalibrationDatabaseDelegate;

@interface CMStrideCalibrationDatabase : NSObject
{
    struct CMStrideCalRecorderDb fStrideCalDb;	// 8 = 0x8
    id <CMStrideCalibrationDatabaseDelegate> _delegate;	// 424 = 0x1a8
}

- (id).cxx_construct;	// IMP=0x002000000059c89f
- (void).cxx_destruct;	// IMP=0x001000000059c891
- (void);	// IMP=0x001000000059c884
@property(nonatomic) id <CMStrideCalibrationDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)copyHistory;	// IMP=0x001000000059c710
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x001000000059c2e5
- (_Bool)isCalibrationConvergedStdForBinWithSpeed:(double)arg1;	// IMP=0x001000000059c0a0
- (void)addEntry:(CDStruct_9878d8f4)arg1;	// IMP=0x001000000059bd2b
- (id)initWithSilo:(id)arg1;	// IMP=0x001000000059b9d0

@end

