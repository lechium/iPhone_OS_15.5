//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface FCSubmitNewsletterPersonalizationVectorCommand
{
    NSString *_personalizationVector;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ef15a
- (void).cxx_destruct;	// IMP=0x00000000000ef3db
@property(retain, nonatomic) NSString *personalizationVector; // @synthesize personalizationVector=_personalizationVector;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;	// IMP=0x00000000000ef162
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ef0e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ef054
- (id)initWithPersonalizationVector:(id)arg1;	// IMP=0x00000000000eefe6

@end

