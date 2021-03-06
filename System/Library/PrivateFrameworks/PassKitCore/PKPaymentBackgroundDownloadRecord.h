//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@interface PKPaymentBackgroundDownloadRecord : NSObject <NSSecureCoding>
{
    long long _taskType;	// 8 = 0x8
    long long _retryCount;	// 16 = 0x10
}

+ (id)taskWithType:(long long)arg1;	// IMP=0x00000000003a2a83
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003a2a7b
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long taskType; // @synthesize taskType=_taskType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003a29ff
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003a2954

@end

