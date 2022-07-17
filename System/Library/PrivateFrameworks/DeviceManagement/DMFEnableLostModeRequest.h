//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface DMFEnableLostModeRequest
{
    NSString *_message;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_footnote;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001db01
+ (_Bool)isPermittedOnUserConnection;	// IMP=0x000000000001daf9
+ (_Bool)isPermittedOnSystemConnection;	// IMP=0x000000000001daf1
+ (id)permittedPlatforms;	// IMP=0x000000000001dae4
- (void).cxx_destruct;	// IMP=0x000000000001de29
@property(copy, nonatomic) NSString *footnote; // @synthesize footnote=_footnote;
@property(copy, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001dcba
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001db09

@end
