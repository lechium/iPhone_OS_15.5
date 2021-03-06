//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class FMFHandle, NSSet, NSString;

@interface FMFNotNowRequest : NSObject <NSCopying, NSSecureCoding>
{
    FMFHandle *_fromHandle;	// 8 = 0x8
    NSSet *_toHandles;	// 16 = 0x10
    NSString *_requestId;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000274de
+ (id)notNowRequestToHandles:(id)arg1 fromHandle:(id)arg2;	// IMP=0x0000000000027383
- (void).cxx_destruct;	// IMP=0x0000000000027811
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSSet *toHandles; // @synthesize toHandles=_toHandles;
@property(retain, nonatomic) FMFHandle *fromHandle; // @synthesize fromHandle=_fromHandle;
- (id)description;	// IMP=0x0000000000027738
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000275c9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000274e6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027413
- (id)initWithFromHandle:(id)arg1 toHandle:(id)arg2 requestId:(id)arg3;	// IMP=0x0000000000027295

@end

