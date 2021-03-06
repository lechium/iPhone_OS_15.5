//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKMedicalDateInterval, NSArray, NSString;

@interface HDHealthRecordParsedHumanName : NSObject
{
    NSString *_use;	// 8 = 0x8
    NSString *_family;	// 16 = 0x10
    NSArray *_given;	// 24 = 0x18
    NSArray *_prefix;	// 32 = 0x20
    NSArray *_suffix;	// 40 = 0x28
    NSString *_text;	// 48 = 0x30
    HKMedicalDateInterval *_period;	// 56 = 0x38
}

+ (id)preferredNameInNames:(id)arg1 FHIRVersion:(id)arg2;	// IMP=0x00000000000188bd
+ (id)parsedNamesWithHumanNames:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000185b3
- (void).cxx_destruct;	// IMP=0x0000000000018efb
@property(readonly, copy, nonatomic) HKMedicalDateInterval *period; // @synthesize period=_period;
@property(readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, copy, nonatomic) NSArray *suffix; // @synthesize suffix=_suffix;
@property(readonly, copy, nonatomic) NSArray *prefix; // @synthesize prefix=_prefix;
@property(readonly, copy, nonatomic) NSArray *given; // @synthesize given=_given;
@property(readonly, copy, nonatomic) NSString *family; // @synthesize family=_family;
@property(readonly, copy, nonatomic) NSString *use; // @synthesize use=_use;
- (id)description;	// IMP=0x0000000000018520
@property(readonly, copy, nonatomic) NSString *fullName;
- (id)initWithHumanNameDictionary:(id)arg1 FHIRVersion:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017fb1

@end

