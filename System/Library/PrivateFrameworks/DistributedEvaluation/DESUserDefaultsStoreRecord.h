//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface DESUserDefaultsStoreRecord : NSObject
{
    NSString *_recordID;	// 8 = 0x8
}

+ (void)setSchedulerWakeupPeriodInSeconds:(id)arg1;	// IMP=0x0000000000028904
+ (id)schedulerWakeupPeriodInSeconds;	// IMP=0x00000000000288a6
+ (void)purgeObsoleted;	// IMP=0x000000000002851e
- (void).cxx_destruct;	// IMP=0x0000000000029204
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSNumber *maxTimeLimitInSeconds;
- (id)maxTimeLimitKey;	// IMP=0x00000000000290bb
@property(copy, nonatomic) NSNumber *periodInSeconds;
- (id)periodKey;	// IMP=0x0000000000028f7c
@property(copy, nonatomic) NSDictionary *debugInfo;
- (id)debugInfoKey;	// IMP=0x0000000000028e3d
@property(nonatomic) long long performCount;
- (id)performCountKey;	// IMP=0x0000000000028cb8
@property(copy, nonatomic) NSDate *lastCompletionDate;
@property(readonly, nonatomic) NSString *completionDateKey;
- (id)description;	// IMP=0x0000000000028a13
- (id)initWithRecordID:(id)arg1;	// IMP=0x0000000000028981

@end
