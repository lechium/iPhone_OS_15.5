//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RLMPropertyChange : NSObject
{
    NSString *_name;	// 8 = 0x8
    id _previousValue;	// 16 = 0x10
    id _value;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000050f0f
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

