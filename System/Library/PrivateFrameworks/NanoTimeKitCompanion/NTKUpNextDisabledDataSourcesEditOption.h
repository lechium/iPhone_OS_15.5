//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface NTKUpNextDisabledDataSourcesEditOption
{
    NSSet *_disabledBundleIdentifiers;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000235600
+ (id)optionWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000023532c
- (void).cxx_destruct;	// IMP=0x000000000023592f
@property(readonly, nonatomic) NSSet *disabledBundleIdentifiers; // @synthesize disabledBundleIdentifiers=_disabledBundleIdentifiers;
- (unsigned long long)hash;	// IMP=0x0000000000235901
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002358a3
- (_Bool)isValidOption;	// IMP=0x000000000023589b
- (id)_alphabeticallySortedIdentifiers;	// IMP=0x0000000000235824
- (id)JSONObjectRepresentation;	// IMP=0x0000000000235812
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002356a3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000235608
- (id)localizedName;	// IMP=0x00000000002355ee
- (id)dailySnapshotKey;	// IMP=0x0000000000235467
- (id)initWithJSONObjectRepresentation:(id)arg1 forDevice:(id)arg2;	// IMP=0x000000000023539c
- (id)initWithDisabledDataSourceIdentifiers:(id)arg1 forDevice:(id)arg2;	// IMP=0x00000000002352a8

@end
