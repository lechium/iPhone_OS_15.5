//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthRecordsUI/NSCopying-Protocol.h>

@class HKUIMetricColors, NSArray, NSDictionary, NSString, UIImage;

@interface WDMedicalRecordCategory : NSObject <NSCopying>
{
    long long _categoryType;	// 8 = 0x8
    HKUIMetricColors *_categoryMetricColors;	// 16 = 0x10
    NSString *_displayName;	// 24 = 0x18
    NSString *_displayImageName;	// 32 = 0x20
    UIImage *_displayImage;	// 40 = 0x28
    NSArray *_sampleTypes;	// 48 = 0x30
    NSDictionary *_additionalPredicatesForCategory;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004ff72
@property(copy, nonatomic) NSDictionary *additionalPredicatesForCategory; // @synthesize additionalPredicatesForCategory=_additionalPredicatesForCategory;
@property(copy, nonatomic) NSArray *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
@property(retain, nonatomic) UIImage *displayImage; // @synthesize displayImage=_displayImage;
@property(copy, nonatomic) NSString *displayImageName; // @synthesize displayImageName=_displayImageName;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) HKUIMetricColors *categoryMetricColors; // @synthesize categoryMetricColors=_categoryMetricColors;
@property(nonatomic) long long categoryType; // @synthesize categoryType=_categoryType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004feb9
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000004fc06

@end

