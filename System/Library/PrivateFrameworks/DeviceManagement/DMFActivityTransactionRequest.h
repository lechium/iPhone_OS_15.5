//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFActivityTransactionRequest
{
    NSString *_name;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000001ec9
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x0000000000001ec1
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x0000000000001eb9
+ (id)permittedPlatforms;	// IMP=0x0000000000001eac
- (void).cxx_destruct;	// IMP=0x0000000000002065
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000001fa8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000001ed1

@end
