//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Email/NSSecureCoding-Protocol.h>

@class NSError;

@interface EMMessageDeliveryResult : NSObject <NSSecureCoding>
{
    long long _status;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006593e
- (void).cxx_destruct;	// IMP=0x0000000000065adf
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000065a12
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000065946
- (id)initWithStatus:(long long)arg1 error:(id)arg2;	// IMP=0x00000000000658b4

@end
