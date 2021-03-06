//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/NSSecureCoding-Protocol.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface MSPSharedTripNotificationRules : NSObject <NSSecureCoding>
{
    _Bool _hasMadeFinalPush;	// 8 = 0x8
    unsigned long long _maxPostedNotifications;	// 16 = 0x10
    unsigned long long _postedNotifications;	// 24 = 0x18
    double _minimumETADifference;	// 32 = 0x20
    double _minimumNotificationInterval;	// 40 = 0x28
    NSDate *_lastPostedETADate;	// 48 = 0x30
    NSDate *_lastPostedNotificationDate;	// 56 = 0x38
    NSDate *_lastUpdatedDate;	// 64 = 0x40
    NSDate *_currentETADate;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001705
+ (id)unarchivingObjectsSet;	// IMP=0x0000000000001670
- (void).cxx_destruct;	// IMP=0x00000000000024ba
@property(nonatomic) _Bool hasMadeFinalPush; // @synthesize hasMadeFinalPush=_hasMadeFinalPush;
@property(retain, nonatomic) NSDate *currentETADate; // @synthesize currentETADate=_currentETADate;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(retain, nonatomic) NSDate *lastPostedNotificationDate; // @synthesize lastPostedNotificationDate=_lastPostedNotificationDate;
@property(retain, nonatomic) NSDate *lastPostedETADate; // @synthesize lastPostedETADate=_lastPostedETADate;
@property(nonatomic) double minimumNotificationInterval; // @synthesize minimumNotificationInterval=_minimumNotificationInterval;
@property(nonatomic) double minimumETADifference; // @synthesize minimumETADifference=_minimumETADifference;
@property(nonatomic) unsigned long long postedNotifications; // @synthesize postedNotifications=_postedNotifications;
@property(nonatomic) unsigned long long maxPostedNotifications; // @synthesize maxPostedNotifications=_maxPostedNotifications;
- (double)minimumETADifferenceIncrement;	// IMP=0x00000000000023d1
- (void)incrementMinimumETADifference;	// IMP=0x0000000000002334
- (void)didReceiveUpdateWithETA:(double)arg1 lastUpdated:(double)arg2;	// IMP=0x0000000000002295
@property(readonly, nonatomic) unsigned long long currentlyNecessaryNotificationType;
- (void)didPostNotification;	// IMP=0x0000000000001edd
- (id)description;	// IMP=0x0000000000001db5
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1 minimumNotificationInterval:(double)arg2;	// IMP=0x0000000000001cd5
- (id)initWithMaximumNumberOfNotifications:(unsigned long long)arg1;	// IMP=0x0000000000001c8d
- (id)init;	// IMP=0x0000000000001c45
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001971
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000170d

@end

