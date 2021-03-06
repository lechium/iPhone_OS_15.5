//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreFollowUp/NSSecureCoding-Protocol.h>

@class FLFollowUpAction, NSDate, NSSet, NSString;

@interface FLFollowUpNotification : NSObject <NSSecureCoding>
{
    NSString *_title;	// 8 = 0x8
    NSString *_informativeText;	// 16 = 0x10
    NSString *_subtitleText;	// 24 = 0x18
    NSDate *_creationDate;	// 32 = 0x20
    FLFollowUpAction *_activateAction;	// 40 = 0x28
    FLFollowUpAction *_clearAction;	// 48 = 0x30
    NSString *_unlockActionLabel;	// 56 = 0x38
    double _frequency;	// 64 = 0x40
    double _firstNotificationDelay;	// 72 = 0x48
    NSSet *_options;	// 80 = 0x50
    unsigned long long _sqlID;	// 88 = 0x58
    NSDate *_previousNotificationActionDate;	// 96 = 0x60
    FLFollowUpAction *_dismissAction;	// 104 = 0x68
}

+ (id)defaultOptions;	// IMP=0x00000000000092c7
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000009225
- (void).cxx_destruct;	// IMP=0x000000000000a09a
@property(retain, nonatomic) FLFollowUpAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(retain, nonatomic) NSDate *previousNotificationActionDate; // @synthesize previousNotificationActionDate=_previousNotificationActionDate;
@property(nonatomic) unsigned long long sqlID; // @synthesize sqlID=_sqlID;
@property(copy, nonatomic) NSSet *options; // @synthesize options=_options;
@property(nonatomic) double firstNotificationDelay; // @synthesize firstNotificationDelay=_firstNotificationDelay;
@property(nonatomic) double frequency; // @synthesize frequency=_frequency;
@property(copy, nonatomic) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property(retain, nonatomic) FLFollowUpAction *clearAction; // @synthesize clearAction=_clearAction;
@property(retain, nonatomic) FLFollowUpAction *activateAction; // @synthesize activateAction=_activateAction;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(copy, nonatomic) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)description;	// IMP=0x0000000000009e84
- (_Bool)shouldBackgroundDefaultAction;	// IMP=0x0000000000009e67
- (void)recalculateActionDateToAccountForDelay;	// IMP=0x0000000000009d7a
- (double)_creationDateAugmentedRepeatTimer;	// IMP=0x0000000000009d23
- (double)_frequencyDelta;	// IMP=0x0000000000009cb8
- (void)set_optionsData:(id)arg1;	// IMP=0x0000000000009b9f
- (id)_optionsData;	// IMP=0x0000000000009a73
@property(nonatomic) _Bool forceDelivery;
- (_Bool)_shouldDeliverNotificationWithStringOut:(id *)arg1;	// IMP=0x0000000000009756
- (_Bool)shouldDeliverNotification;	// IMP=0x0000000000009742
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000009456
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000092fe
- (id)init;	// IMP=0x000000000000922d

@end

