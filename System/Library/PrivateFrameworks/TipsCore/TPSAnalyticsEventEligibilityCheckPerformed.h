//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface TPSAnalyticsEventEligibilityCheckPerformed
{
    NSString *_error;	// 8 = 0x8
}

+ (id)eventWithError:(id)arg1;	// IMP=0x0000000000046c67
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000046b51
- (void).cxx_destruct;	// IMP=0x0000000000046dec
@property(retain, nonatomic) NSString *error; // @synthesize error=_error;
- (id)mutableAnalyticsEventRepresentation;	// IMP=0x0000000000046d63
- (id)eventName;	// IMP=0x0000000000046d30
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000046cb0
- (id)_initWithError:(id)arg1;	// IMP=0x0000000000046bf7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000046b59

@end
