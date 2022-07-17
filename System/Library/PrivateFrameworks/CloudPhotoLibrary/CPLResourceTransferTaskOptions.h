//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSCopying-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@interface CPLResourceTransferTaskOptions : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _intent;	// 8 = 0x8
    unsigned long long _priority;	// 16 = 0x10
    CDStruct_e83c9415 _timeRange;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d180b
+ (id)optionsForLegacyIntent:(unsigned long long)arg1;	// IMP=0x00000000000d17ad
+ (_Bool)isForegroundOperationForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x00000000000d177e
+ (_Bool)isHighPriorityForIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x00000000000d174f
+ (id)descriptionForIntentPriority:(unsigned long long)arg1;	// IMP=0x00000000000d16e4
+ (id)descriptionForIntent:(unsigned long long)arg1;	// IMP=0x00000000000d15ef
+ (id)intentsToBackgroundDownload;	// IMP=0x00000000000d15e2
+ (id)defaultOptions;	// IMP=0x00000000000d15d0
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long intent; // @synthesize intent=_intent;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d1539
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d145e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d13a8
- (unsigned long long)legacyIntent;	// IMP=0x00000000000d12ff
- (id)description;	// IMP=0x00000000000d11c8
- (_Bool)hasValidTimeRange;	// IMP=0x00000000000d11a3
- (_Bool)shouldKeepPower;	// IMP=0x00000000000d117f
- (_Bool)isHighPriority;	// IMP=0x00000000000d1153
- (id)init;	// IMP=0x00000000000d113d
- (id)initWithHighPriority:(_Bool)arg1;	// IMP=0x00000000000d1120
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2;	// IMP=0x00000000000d10cd
- (id)initWithIntent:(unsigned long long)arg1 priority:(unsigned long long)arg2 timeRange:(CDStruct_e83c9415)arg3;	// IMP=0x00000000000d106a

@end
