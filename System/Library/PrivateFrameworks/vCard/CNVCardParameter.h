//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNVCardParameter : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)parameterWithName:(id)arg1 value:(id)arg2;	// IMP=0x00000000000239e8
- (void).cxx_destruct;	// IMP=0x0000000000023b63
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 value:(id)arg2;	// IMP=0x0000000000023a54

@end

