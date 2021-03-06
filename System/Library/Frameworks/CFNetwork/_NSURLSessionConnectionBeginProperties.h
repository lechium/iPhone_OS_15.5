//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSSecureCoding-Protocol.h>

@class __CFN_ConnectionMetrics;
@protocol OS_nw_endpoint;

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding>
{
    __CFN_ConnectionMetrics *__metrics;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000253271
- (void).cxx_destruct;	// IMP=0x0000000000253261
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000025323e
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000025317e
@property(readonly, nonatomic, getter=isTLSConfigured) _Bool TLSConfigured;
@property(readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint;

@end

