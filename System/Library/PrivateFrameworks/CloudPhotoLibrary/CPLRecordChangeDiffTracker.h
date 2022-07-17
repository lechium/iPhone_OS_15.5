//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLDiffTracker, NSArray;

@interface CPLRecordChangeDiffTracker : NSObject
{
    CPLDiffTracker *_diffTracker;	// 8 = 0x8
    unsigned long long _trackingChangeType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000e3f9b
- (id)redactedDescription;	// IMP=0x00000000000e3f51
- (id)description;	// IMP=0x00000000000e3f07
- (_Bool)areObjectsDifferentOnProperty:(id)arg1 changeType:(unsigned long long)arg2;	// IMP=0x00000000000e3c81
@property(readonly, nonatomic) NSArray *updatedProperties;
- (void)withTrackerForChangeType:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e3b93
- (id)initWithTrackingChangeTypeMask:(unsigned long long)arg1;	// IMP=0x00000000000e3b56
- (id)init;	// IMP=0x00000000000e3b42

@end
