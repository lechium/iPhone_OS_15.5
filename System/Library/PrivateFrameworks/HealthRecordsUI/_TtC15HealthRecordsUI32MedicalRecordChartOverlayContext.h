//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/HKOverlayContext-Protocol.h>

@class MISSING_TYPE;

@interface _TtC15HealthRecordsUI32MedicalRecordChartOverlayContext : NSObject <HKOverlayContext>
{
    MISSING_TYPE *title;	// 8 = 0x8
    MISSING_TYPE *dataSource;	// 24 = 0x18
    MISSING_TYPE *defaultColors;	// 32 = 0x20
    MISSING_TYPE *selectedColors;	// 40 = 0x28
    MISSING_TYPE *verticalAxis;	// 48 = 0x30
    MISSING_TYPE *cachedItem;	// 56 = 0x38
    MISSING_TYPE *cachedOverlayDisplayType;	// 64 = 0x40
    MISSING_TYPE *cachedDataSource;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000180ce0
- (id)init;	// IMP=0x0000000000180c80
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x0000000000180bf0
- (id)sampleTypeForDateRangeUpdates;	// IMP=0x0000000000180b70
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000180a50
- (id)contextItemForLastUpdate;	// IMP=0x0000000000180740
- (id)initWithTitle:(id)arg1 dataSource:(id)arg2 defaultColors:(id)arg3 selectedColors:(id)arg4 verticalAxis:(id)arg5;	// IMP=0x0000000000180650

@end

