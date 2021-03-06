//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

__attribute__((visibility("hidden")))
@interface EKSerializableAlarm
{
    _Bool _isAbsolute;	// 8 = 0x8
    double _relativeOffset;	// 16 = 0x10
    NSDate *_absoluteDate;	// 24 = 0x18
}

+ (id)classesForKey;	// IMP=0x0000000000119635
- (void).cxx_destruct;	// IMP=0x0000000000119a7b
@property(nonatomic) _Bool isAbsolute; // @synthesize isAbsolute=_isAbsolute;
@property(copy, nonatomic) NSDate *absoluteDate; // @synthesize absoluteDate=_absoluteDate;
@property(nonatomic) double relativeOffset; // @synthesize relativeOffset=_relativeOffset;
- (id)createAlarm:(id *)arg1;	// IMP=0x0000000000119865
- (id)initWithAlarm:(id)arg1;	// IMP=0x0000000000119799

@end

