//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HRETypeValueTuple : NSObject
{
    NSString *_type;	// 8 = 0x8
    id _value;	// 16 = 0x10
}

+ (id)type:(id)arg1 value:(id)arg2;	// IMP=0x00000000000190e6
- (void).cxx_destruct;	// IMP=0x0000000000019166
@property(readonly, nonatomic) id value; // @synthesize value=_value;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)initWithType:(id)arg1 value:(id)arg2;	// IMP=0x000000000001904d

@end
