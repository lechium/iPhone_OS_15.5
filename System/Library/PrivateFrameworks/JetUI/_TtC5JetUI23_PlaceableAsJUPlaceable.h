//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <JetUI/JUPlaceable-Protocol.h>

@class MISSING_TYPE, NSString;

@interface _TtC5JetUI23_PlaceableAsJUPlaceable : NSObject <JUPlaceable>
{
    MISSING_TYPE *base;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000682c0
- (id)init;	// IMP=0x0000000000068260
@property(nonatomic, readonly) NSString *description;
- (void)placeAtRect:(struct CGRect)arg1 withTraitCollection:(id)arg2;	// IMP=0x00000000000680a0
- (struct JUMeasurements)measureToFit:(struct CGSize)arg1 withTraitCollection:(id)arg2;	// IMP=0x0000000000067f30

@end
