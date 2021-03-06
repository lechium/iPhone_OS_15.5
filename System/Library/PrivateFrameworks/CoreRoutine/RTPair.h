//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@interface RTPair : NSObject <NSCopying, NSSecureCoding>
{
    id _firstObject;	// 8 = 0x8
    id _secondObject;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000239a9
+ (Class)getClusterClassOfObject:(id)arg1;	// IMP=0x0000000000023845
- (void).cxx_destruct;	// IMP=0x0000000000023c50
@property(readonly, nonatomic) id secondObject; // @synthesize secondObject=_secondObject;
@property(readonly, nonatomic) id firstObject; // @synthesize firstObject=_firstObject;
- (id)description;	// IMP=0x0000000000023b9c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000023a8a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000239b1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002395c
- (id)initWithFirstObject:(id)arg1 secondObject:(id)arg2;	// IMP=0x00000000000236ba
- (id)init;	// IMP=0x000000000002368b

@end

