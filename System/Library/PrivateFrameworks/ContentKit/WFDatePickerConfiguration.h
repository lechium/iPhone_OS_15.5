//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContentKit/NSCopying-Protocol.h>
#import <ContentKit/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface WFDatePickerConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_datePickerMode;	// 8 = 0x8
    NSDate *_defaultDate;	// 16 = 0x10
    NSDate *_minimumDate;	// 24 = 0x18
    NSDate *_maximumDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002d41f
- (void).cxx_destruct;	// IMP=0x000000000002d3e1
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *defaultDate; // @synthesize defaultDate=_defaultDate;
@property(copy, nonatomic) NSString *datePickerMode; // @synthesize datePickerMode=_datePickerMode;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002d25f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002d10a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002d006

@end
