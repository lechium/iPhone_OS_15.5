//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSDateComponentsFormatter, NSDateFormatter, NSLengthFormatter, NSLocale, NSMeasurementFormatter, NSString, NSURL, PPQuickTypeQuery, _PASLock;

@interface PPQuickTypeFormatter : NSObject
{
    PPQuickTypeQuery *_query;	// 8 = 0x8
    NSLocale *_locale;	// 16 = 0x10
    NSString *_desiredLanguage;	// 24 = 0x18
    NSString *_fallbackLanguage;	// 32 = 0x20
    _PASLock *_localizedStrings;	// 40 = 0x28
    NSDateFormatter *_birthdayFormatter;	// 48 = 0x30
    NSDateFormatter *_chineseBirthdayFormatter;	// 56 = 0x38
    NSDateFormatter *_yearlessChineseBirthdayFormatter;	// 64 = 0x40
    NSDateFormatter *_shortEventFormatter;	// 72 = 0x48
    NSDateFormatter *_longEventFormatter;	// 80 = 0x50
    NSCache *_localizedLabelCache;	// 88 = 0x58
    NSCache *_dateFormatCache;	// 96 = 0x60
    NSURL *_labeledValueLocalizationURL;	// 104 = 0x68
    NSCache *_appNameCache;	// 112 = 0x70
    NSMeasurementFormatter *_measurementWholeFormatter;	// 120 = 0x78
    NSMeasurementFormatter *_measurementDecimalFormatter;	// 128 = 0x80
    NSMeasurementFormatter *_measurementUnscaledFormatter;	// 136 = 0x88
    NSLengthFormatter *_lengthFormatter;	// 144 = 0x90
    NSDateComponentsFormatter *_dateComponentFormatter;	// 152 = 0x98
}

+ (id)new;	// IMP=0x00000000000d7446
+ (id)formatterWithQuery:(id)arg1;	// IMP=0x00000000000d6c25
- (void).cxx_destruct;	// IMP=0x00000000000d60b2
- (id)inviteLinkLabel;	// IMP=0x00000000000d5fbd
- (id)timeLeftLabel;	// IMP=0x00000000000d5ec8
- (id)streetLabel;	// IMP=0x00000000000d5dd3
- (id)distanceLabel;	// IMP=0x00000000000d5cde
- (id)destinationLabel;	// IMP=0x00000000000d5be9
- (id)etaLabel;	// IMP=0x00000000000d5af4
- (id)attributionPattern;	// IMP=0x00000000000d5a2e
- (id)navigationItemLabelForTypeLabel:(id)arg1 destination:(id)arg2;	// IMP=0x00000000000d590c
- (id)formattedTimeInterval:(double)arg1;	// IMP=0x00000000000d58aa
- (id)makeDateComponentFormatter;	// IMP=0x00000000000d576e
- (id)formattedPostalAddress:(id)arg1;	// IMP=0x00000000000d5677
- (id)formattedLengthInMeters:(double)arg1;	// IMP=0x00000000000d5615
- (id)makeLengthFormatter;	// IMP=0x00000000000d5514
- (id)formattedMeasurement:(id)arg1 allowDecimals:(_Bool)arg2 scaleUnits:(_Bool)arg3;	// IMP=0x00000000000d547f
- (id)makeMeasurementUnscaledFormatter;	// IMP=0x00000000000d532f
- (id)makeMeasurementDecimalFormatter;	// IMP=0x00000000000d51d9
- (id)makeMeasurementWholeFormatter;	// IMP=0x00000000000d5095
- (id)localizedAppNameForBundleIdentifier:(id)arg1;	// IMP=0x00000000000d4ec3
- (id)formattedStringsForLabels:(id)arg1;	// IMP=0x00000000000d48f9
- (id)formattedStringForLabel:(id)arg1;	// IMP=0x00000000000d481e
- (id)formattedEventTime:(id)arg1;	// IMP=0x00000000000d46dd
- (id)formattedBirthday:(id)arg1;	// IMP=0x00000000000d3fe1
- (id)makeBirthdayFormatter;	// IMP=0x00000000000d3e31
- (id)makeChineseBirthdayFormatter;	// IMP=0x00000000000d3c5e
- (id)makeYearlessChineseBirthdayFormatter;	// IMP=0x00000000000d3a23
- (id)makeLongEventFormatter;	// IMP=0x00000000000d38f2
- (id)makeShortEventFormatter;	// IMP=0x00000000000d37c1
- (id)init;	// IMP=0x00000000000d37bb

@end

