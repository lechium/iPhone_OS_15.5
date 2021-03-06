//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreTelephony/NSSecureCoding-Protocol.h>

@class NSString;

@interface CTSweetgumUserConsentFlowInfo : NSObject <NSSecureCoding>
{
    NSString *_webURL;	// 8 = 0x8
    NSString *_postData;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001d397
- (void).cxx_destruct;	// IMP=0x000000000001d3d5
@property(retain, nonatomic) NSString *postData; // @synthesize postData=_postData;
@property(retain, nonatomic) NSString *webURL; // @synthesize webURL=_webURL;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001d2bd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001d24f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001d07c
- (id)description;	// IMP=0x000000000001cf92
- (id)init;	// IMP=0x000000000001cf2e

@end

