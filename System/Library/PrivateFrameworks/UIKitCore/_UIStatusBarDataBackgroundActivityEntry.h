//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface _UIStatusBarDataBackgroundActivityEntry
{
    long long _type;	// 16 = 0x10
    double _displayStartDate;	// 24 = 0x18
    NSString *_detailString;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000e454e6
- (void).cxx_destruct;	// IMP=0x0000000000e459b6
@property(copy, nonatomic) NSString *detailString; // @synthesize detailString=_detailString;
@property(nonatomic) double displayStartDate; // @synthesize displayStartDate=_displayStartDate;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)_ui_descriptionBuilder;	// IMP=0x0000000000e45834
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e456a5
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000e455af
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000e454ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e4543e
- (unsigned long long)hash;	// IMP=0x0000000000e453cb

@end
