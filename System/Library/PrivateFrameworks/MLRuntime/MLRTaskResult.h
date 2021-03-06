//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MLRuntime/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;

@interface MLRTaskResult : NSObject <NSSecureCoding>
{
    NSDictionary *_JSONResult;	// 8 = 0x8
    NSData *_vector;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000347b
- (void).cxx_destruct;	// IMP=0x0000000000003648
@property(readonly, nonatomic) NSData *vector; // @synthesize vector=_vector;
@property(readonly, nonatomic) NSDictionary *JSONResult; // @synthesize JSONResult=_JSONResult;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000034e6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003483
- (id)description;	// IMP=0x0000000000003409
- (id)initWithJSONResult:(id)arg1 unprivatizedVector:(id)arg2;	// IMP=0x0000000000003361

@end

