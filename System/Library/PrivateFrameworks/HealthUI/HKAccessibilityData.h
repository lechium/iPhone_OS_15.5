//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface HKAccessibilityData : NSObject
{
    NSArray *_accessibilityPointData;	// 8 = 0x8
    NSDictionary *_accessibilitySpans;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000127b72
@property(readonly, nonatomic) NSDictionary *accessibilitySpans; // @synthesize accessibilitySpans=_accessibilitySpans;
@property(readonly, nonatomic) NSArray *accessibilityPointData; // @synthesize accessibilityPointData=_accessibilityPointData;
- (id)description;	// IMP=0x0000000000127614
- (id)initWithPointData:(id)arg1 accessibilitySpans:(id)arg2;	// IMP=0x000000000012757b

@end

