//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAutoLayout/NSLayoutRule-Protocol.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRule : NSObject <NSLayoutRule>
{
    NSArray *_stackedRects;	// 8 = 0x8
    NSLayoutRect *_containingRect;	// 16 = 0x10
    double _spacing;	// 24 = 0x18
    long long _orientation;	// 32 = 0x20
}

+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;	// IMP=0x0000000000004b71
+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;	// IMP=0x0000000000004b57
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;	// IMP=0x0000000000004b0b
@property(readonly, copy) NSLayoutRect *containingRect; // @synthesize containingRect=_containingRect;
@property(readonly) double spacing; // @synthesize spacing=_spacing;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *ruleDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildRules;	// IMP=0x0000000000004b8e
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004a5b
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000049c9
- (void)dealloc;	// IMP=0x000000000000497f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
