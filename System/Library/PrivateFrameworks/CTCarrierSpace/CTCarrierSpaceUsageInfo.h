//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CTCarrierSpace/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CTCarrierSpaceUsageInfo : NSObject <NSSecureCoding>
{
    NSArray *_accountMetrics;	// 8 = 0x8
    NSString *_moreDetailsURL;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004723
- (void).cxx_destruct;	// IMP=0x0000000000004761
@property(retain, nonatomic) NSString *moreDetailsURL; // @synthesize moreDetailsURL=_moreDetailsURL;
@property(retain, nonatomic) NSArray *accountMetrics; // @synthesize accountMetrics=_accountMetrics;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000463b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004618
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004502
- (id)description;	// IMP=0x0000000000004418
- (id)init;	// IMP=0x00000000000043b4

@end

